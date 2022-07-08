#include "Board.hpp"

Board::Board(int, int,const std::vector<Coordinate> &)
{


}

FieldState Board::getFieldState(const Coordinate &) const
{
   return field;
}


void Board::uncover(const Coordinate &)
{
    field = FieldState::Mines_0;
}