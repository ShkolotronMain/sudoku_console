#include "headers/game_table.hpp"

void GameTable::print_table()
{
    for (int i=0; i<37; i++)
        std::cout << "-";
    std::cout << std::endl;

    for (int j=0; j<9; j++)
    {
        this->get_rows()[j].print_row();
        for (int i=0; i<37; i++)
            std::cout << "-";
        std::cout << std::endl;
    }

    std::cout << std::endl;
}