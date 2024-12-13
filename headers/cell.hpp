#define ushort unsigned short

#ifndef CELL_H
#define CELL_H

class Cell
{
    private:
        // видимость при выводе
        bool visible;
        // значение ячейки
        ushort value;

    public:
        bool get_visible() const;
        ushort get_value() const;

        void set_visible(bool);
        void set_value(ushort);
};

#endif