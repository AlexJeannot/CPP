#include "Pony.hpp"

void checkInstanceNumber(void)
{
    std::cout << std::endl << ">>>   Number of pony instance = "<<Pony::m_numberOfInstance << std::endl;
}
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
    checkInstanceNumber();
    ponyOnTheStack();
    checkInstanceNumber();
    ponyOnTheHeap();
    checkInstanceNumber();
    std::cout << std::endl;
    return (0);
}