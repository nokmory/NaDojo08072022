#pragma once
#include <vector>

struct Coordinate
{
    int x;
    int y;
};


class Board
{
public:
   Board(int ,int,std::vector<Coordinate>);

   void load_mines_coordinates(std::vector<Coordinate> coordinates);

};