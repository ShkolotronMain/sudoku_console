#ifndef GAME_TABLE_H
#define GAME_TABLE_H

#include "table_io.hpp"

class GameTable : public Table, public TableIO
{
    public:
        virtual void print_table() override;
};

#endif