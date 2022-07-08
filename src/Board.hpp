#pragma once

struct Coordinate
{
    int x;
    int y;
};


class Board
{
public:
   Board(int ,int );

   void load_mines_coordinates(std::vector<Coordinate> coordinates);

};