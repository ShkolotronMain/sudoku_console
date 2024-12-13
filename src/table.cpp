#include "table.hpp"

Table::Table()
{
    this->rows = new GameRow[9];
}

Table::~Table()
{
    delete[] this->rows;
}

GameRow* Table::get_rows() const
{
    return this->rows;
}

GameRow& Table::operator[](ushort val) const
{
    if (val > 9)
        throw "Неверное значение";
    else
        return rows[val];
}