#ifndef GAME_CELL_H
#define GAME_CELL_H

#include "cell_io.hpp"

class GameCell : public Cell, public CellIO 
{
    public:
        virtual char print_cell() override;
};

#endif