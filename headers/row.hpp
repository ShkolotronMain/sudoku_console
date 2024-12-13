#ifndef ROW_H
#define ROW_H

#include "game_cell.hpp"

class Row
{
    private:
        GameCell* cells;

    public:
        Row();
        ~Row();

        GameCell* get_cells() const;
        GameCell& operator[](ushort) const;
};

#endif