#include "headers/game_row.hpp"

void GameRow::print_row()
{
    std::cout << "|";
    for (int i=0; i<9; i++)
        std::cout << " " << this->get_cells()[i].print_cell() << " |" << std::endl;
}