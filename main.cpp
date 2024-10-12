#include <stdio.h>
#include <iostream>

/*
    I want to create an application
*/
class calculator{
    int x, y;
    public:
        void set_values(int a, int b)
        {
            this->x = a;
            this->y = b;
        }
        int addition(){return x + y;}
};

class calc
{
    int x, y;
    public:
        int addition(int a, int b){return a + b;}
};



int main()
{
    int x = 10, y = 20;
    //calculator z; z.set_values(x,y);

    calc z;
    std::cout << x << " + " << y << " = " << z.addition(x,y);
    return 0;
}