#include "headers/game_cell.hpp"

char GameCell::print_cell()
{
    if (this->get_visible() == true)
        return (char)(48+this->get_value());
}