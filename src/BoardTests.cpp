#include "gtest/gtest.h"
#include "Board.hpp"



TEST(MinesweeperTests, canCreateBoard)
{

    std::vector<Coordinate> coordinates;
    Board board(1,1, coordinates);

};