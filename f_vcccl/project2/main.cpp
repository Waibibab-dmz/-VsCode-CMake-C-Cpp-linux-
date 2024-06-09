#include "include/swap.h"

int main(int argc,char **argv)
{
    swap s(10,20);
    s.printInfo();
    s.run();
    s.printInfo();
    return 0;
}