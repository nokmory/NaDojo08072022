#include "Board.hpp"

Board::Board(int, int,const std::vector<Coordinate> &)
{
    

}

FieldState Board::getFieldState(const Coordinate &)
{
   return FieldState::Covered;
}
