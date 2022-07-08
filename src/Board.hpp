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
   Board(int ,int,const std::vector<Coordinate> &);

};