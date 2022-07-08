#include "gtest/gtest.h"
#include "Board.hpp"


TEST(MinesweeperTests, gameIsWonAfterUncoverAllFieldsWithoutMines)
{
    std::vector<Coordinate> coordinates;
    coordinates.push_back({0,0});
    Board board(1,1, coordinates);

    EXPECT_EQ(board.getGameState(), GameState::Victory);
}

TEST(MinesweeperTests, gameIsWonAfterUncoverAllFieldsWithoutMines)
{
    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);
    board.uncover(Coordinate{0,0});

    EXPECT_EQ(board.getGameState(), GameState::Victory);
}


TEST(MinesweeperTests, gameIsRunningRightAfterCreation)
{
    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);
    EXPECT_EQ(board.getGameState(), GameState::Running);
}


TEST(MinesweeperTests, canPlayerUncoverTheField)
{
    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);
    board.uncover(Coordinate{0,0});
    EXPECT_EQ(board.getFieldState(Coordinate{0, 0}), FieldState::Mines_0);
}

TEST(MinesweeperTests, canPlayerSeeTheBoard)
{
    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);

    EXPECT_EQ(board.getFieldState(Coordinate{0, 0}), FieldState::Covered);
}
