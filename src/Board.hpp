#pragma once
#include <vector>

enum class FieldState{Covered};

struct Coordinate
{
    int x;
    int y;
};


class Board
{
public:
   Board(int ,int,const std::vector<Coordinate> &);

   FieldState getFieldState(int , int);

};