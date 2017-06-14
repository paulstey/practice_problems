#include <iostream>


struct list {
    int x;
    int y;

    list(int a, int b) : x(a), y(b) {}; 
};

int main(int argc, char *argv[]) {
    list xlist = list(1, 2);

    std::cout << xlist.x << " " << xlist.y << std::endl;
}




