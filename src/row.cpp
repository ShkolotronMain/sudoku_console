#include "row.hpp"

Row::Row()
{
    this->cells = new GameCell[9];
}

Row::~Row()
{
    delete[] this->cells;
}

GameCell* Row::get_cells() const
{
    return this->cells;
}

GameCell& Row::operator[](ushort val) const
{
    if (val > 9)
        throw "Неверное значение";
    else
        return cells[val];
}