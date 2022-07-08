#include "gtest/gtest.h"
#include "Board.hpp"


TEST(MinesweeperTests, canPlayerSeeTheBoard)
{
    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);

    EXPECT_TRUE(board.getFieldState(0, 0) == FieldState::Covered);
}



TEST(MinesweeperTests, canCreateBoard)
{

    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);

};