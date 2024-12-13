#ifndef TABLE_H
#define TABLE_H

#include "row.hpp"

class Table
{
    private:
        Row* rows;

    public:
        Table();
        ~Table();

        Row* get_rows() const;
        Row& operator[](ushort) const;
};

#endif