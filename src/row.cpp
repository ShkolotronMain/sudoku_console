#include "row.hpp"

Row::Row()
{
    this->cells = new Cell[9];
}

Row::~Row()
{
    delete[] this->cells;
}

Cell* Row::get_cells() const
{
    return this->cells;
}

Cell& Row::operator[](ushort val) const
{
    if (val > 9)
        throw "Неверное значение";
    else
        return cells[val];
}