#ifndef TABLE_H
#define TABLE_H

#include "game_row.hpp"

class Table
{
    private:
        GameRow* rows;

    public:
        Table();
        ~Table();

        GameRow* get_rows() const;
        GameRow& operator[](ushort) const;
};

#endif