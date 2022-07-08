#pragma once
#include <vector>

enum class FieldState{Covered, Uncovered};

struct Coordinate
{
    int x;
    int y;
};


class Board
{
public:
   Board(int ,int,const std::vector<Coordinate> &);

    FieldState getFieldState(const Coordinate &);
    void uncover(const Coordinate &);

};