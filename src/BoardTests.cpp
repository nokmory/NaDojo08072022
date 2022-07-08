#include "gtest/gtest.h"
#include "Board.hpp"

struct Board1on1WithoutMines : public testing::Test
{
    std::vector<Coordinate> coordinates;
    Board board{1,1, coordinates};
};

TEST(Board2on2WithMines, gameIsWonAfterNotUncoveringAllFieldsWithMinesP)
{
    std::vector<Coordinate> coordinates{ {0,0} };
    Board board(2,2, coordinates);
    board.uncover(1,1);

    EXPECT_EQ(board.getGameState(), GameState::Running);
}


// TEST(Board2on2WithMines, gameIsWonAfterNotUncoveringAllFieldsWithMinesP)
// {
//     std::vector<Coordinate> coordinates{ {0,0} };
//     Board board(2,2, coordinates);

//     EXPECT_EQ(board.getGameState(), GameState::Running);
// }


TEST(Board1on1WithMines, gameIsWonAfterNotUncoveringAllFieldsWithMines)
{
    std::vector<Coordinate> coordinates{ {0,0} };
    Board board(1,1, coordinates);

    EXPECT_EQ(board.getGameState(), GameState::Victory);
}

TEST_F(Board1on1WithoutMines, gameIsWonAfterUncoverAllFieldsWithoutMines)
{
    board.uncover(Coordinate{0,0});

    EXPECT_EQ(board.getGameState(), GameState::Victory);
}


TEST_F(Board1on1WithoutMines, gameIsRunningRightAfterCreation)
{

    EXPECT_EQ(board.getGameState(), GameState::Running);
}


TEST_F(Board1on1WithoutMines, canPlayerUncoverTheField)
{

    board.uncover(Coordinate{0,0});
    EXPECT_EQ(board.getFieldState(Coordinate{0, 0}), FieldState::Mines_0);
}

TEST_F(Board1on1WithoutMines, canPlayerSeeTheBoard)
{
    EXPECT_EQ(board.getFieldState(Coordinate{0, 0}), FieldState::Covered);
}
