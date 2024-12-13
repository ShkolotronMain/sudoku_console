#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "game_table.hpp"

class GameLoop
{
    private:
        // Определяет, идёт ли игра
        bool state;
        // Игровое поле
        GameTable table;

    public:
        GameLoop();
        ~GameLoop();

        // Игровой цикл
        void loop();

        // Печать игрового поля
        void print_table();
};

#endif