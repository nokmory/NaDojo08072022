#include "gtest/gtest.h"
#include "Board.hpp"



TEST(MinesweeperTests,Asd)
{
    Board board(1,1);

    std::vector<Coordinate> coordinates;

    board.load_mines_coordinates(coordinates);

};

TEST(MinesweeperTests,GameBoardGenerateSucces)
{
    Board board(1,1);
};