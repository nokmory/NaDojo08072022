#include "Board.hpp"

Board::Board(int x, int y,const std::vector<Coordinate> &coordinates) : 
    container_of_fieldStates(x,std::vector<FieldState>(y, FieldState::Covered))
{
    if(!coordinates.empty())
    {
        gameState = GameState::Victory;
    }
}

FieldState Board::getFieldState(const Coordinate& coordinate) const
{
   return container_of_fieldStates.at(coordinate.x).at(coordinate.y);
}


void Board::uncover(const Coordinate& coordinate)
{
    container_of_fieldStates.at(coordinate.x).at(coordinate.y) = FieldState::Mines_0;

    gameState = GameState::Victory;
}

GameState Board::getGameState()
{
    return gameState;
}
