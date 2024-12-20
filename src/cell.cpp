#include "headers/cell.hpp"

Cell::Cell()
{
    this->visible = 0;
    this->value = 0;
}

bool Cell::get_visible() const
{
    return this->visible;
}

ushort Cell::get_value() const
{
    return this->value;
}

void Cell::set_value(ushort val)
{
    if (val>9)
        this->value = 9;
    else
        this->value = val;
}

void Cell::set_visible(bool val)
{
    this->visible = val;
}