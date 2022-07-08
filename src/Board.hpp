#pragma once
#include <vector>

enum class FieldState{Covered, Mines_0};

enum class GameState{Running};

struct Coordinate
{
    int x;
    int y;
};


class Board
{
public:
   Board(int ,int,const std::vector<Coordinate> &);

    FieldState getFieldState(const Coordinate &) const;
    void uncover(const Coordinate &);
    GameState getGameState();

private:
FieldState field = FieldState::Covered;

};