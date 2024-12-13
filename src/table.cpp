#include "table.hpp"

Table::Table()
{
    this->rows = new Row[9];
}

Table::~Table()
{
    delete[] this->rows;
}

Row* Table::get_rows() const
{
    return this->rows;
}

Row& Table::operator[](ushort val) const
{
    if (val > 9)
        throw "Неверное значение";
    else
        return rows[val];
}