#ifndef ROW_H
#define ROW_H

#include "cell.hpp"

class Row
{
    private:
        Cell* cells;

    public:
        Row();
        ~Row();

        Cell* get_cells() const;
        Cell& operator[](ushort) const;
};

#endif