#include "headers/gameloop.hpp"

GameLoop::GameLoop()
{
    this->state = 1;
    this->table = GameTable();
}

GameLoop::~GameLoop()
{
    this->state = 0;
}

void GameLoop::loop()
{
    while (this->state == 1)
    {
        print_table();

        std::string trash;
        std::cin >> trash;

        if (trash == "end")
            this->state = 0;
    }
}

void GameLoop::print_table()
{
    this->table.print_table();
}