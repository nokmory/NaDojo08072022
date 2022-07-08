#pragma once
#include <vector>

enum class FieldState{Covered, Mines_0};

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

private:
FieldState field = FieldState::Covered;

};