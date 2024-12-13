#ifndef GAME_ROW_H
#define GAME_ROW_H

#include <iostream>
#include "row_io.hpp"

class GameRow : public Row, public RowIO
{
    public:
        virtual void print_row() override;
};

#endif