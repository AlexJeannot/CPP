#include "Pony.hpp"

void ponyOnTheStack(void)
{
    std::cout << "\n====== ON THE STACK ======\n" << std::endl;
    Pony onTheStack("Stack");
    onTheStack.displayPony();
}

void ponyOnTheHeap(void)
{
    std::cout << "\n====== ON THE HEAP ======\n" << std::endl;
    Pony *onTheHeap = new Pony("Heap", "Black", 2.33, 66.77);
    onTheHeap->displayPony();
    delete onTheHeap;
}

int main()
{
    Pony::checkInstanceNumber();
    ponyOnTheStack();
    Pony::checkInstanceNumber();
    ponyOnTheHeap();
    Pony::checkInstanceNumber();
    std::cout << std::endl;
    return (0);
}