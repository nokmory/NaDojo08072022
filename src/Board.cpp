#include "Board.hpp"

Board::Board(int, int,const std::vector<Coordinate> &coordinates)
{
    if(!coordinates.empty())
    {
        gameState = GameState::Victory;
    }
}

FieldState Board::getFieldState(const Coordinate &) const
{
   return field;
}


void Board::uncover(const Coordinate &)
{
    field = FieldState::Mines_0;
    gameState = GameState::Victory;

}

GameState Board::getGameState()
{
    return gameState;
}
