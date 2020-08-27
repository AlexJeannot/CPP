#include <iostream>
#include "mutantstack.hpp"

int main()
{
    std::cout << std::endl << "\033[38;5;40m=================== ITERATOR ===================\033[0m" << std::endl;

    MutantStack<int> A;
    MutantStack<int>::iterator iterBegin;
    MutantStack<int>::iterator iterEnd;

    for (int count = 0; count < 10; count++)
        A.push(count * 3);
    
    iterBegin = A.begin();
    iterEnd = A.end();

    std::cout << "*iterBegin = " << *iterBegin << "  (" << &iterBegin << ")" << std::endl;
    std::cout << "*iterEnd = " << *iterEnd << "  (" << &iterEnd << ")" << std::endl;

    std::cout << "-----------------" << std::endl;
    for (; iterBegin != iterEnd; iterBegin++)
        std::cout << *iterBegin << std::endl;

    std::cout << "-----------------" << std::endl;


    while (iterBegin != A.begin())
    {
        iterBegin--;
        std::cout << *iterBegin << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl; 
    std::cout << "iterBegin == A.begin(): " << (iterBegin == A.begin()) << std::endl;
    std::cout << "iterBegin != A.begin(): " << (iterBegin != A.begin()) << std::endl;

    std::cout << std::endl << "-----------------" << std::endl;
    std::cout << "*++iterBegin: " << *++iterBegin << std::endl;
    std::cout << "*--iterBegin: " << *--iterBegin << std::endl;



    std::cout << std::endl << "\033[38;5;40m=================== CONST ITERATOR ===================\033[0m" << std::endl;

    MutantStack<int> B;
    MutantStack<int>::const_iterator constIterBegin;
    MutantStack<int>::const_iterator constIterEnd;

    for (int count = 0; count < 10; count++)
        B.push(count * 3);
    
    constIterBegin = B.cbegin();
    constIterEnd = B.cend();

    std::cout << "*constIterBegin = " << *constIterBegin << "  (" << &constIterBegin << ")" << std::endl;
    std::cout << "*constIterEnd = " << *constIterEnd << "  (" << &constIterEnd << ")" << std::endl;

    std::cout << "-----------------" << std::endl;
    for (; constIterBegin != constIterEnd; constIterBegin++)
        std::cout << *constIterBegin << std::endl;

    std::cout << "-----------------" << std::endl;


    while (constIterBegin != B.cbegin())
    {
        constIterBegin--;
        std::cout << *constIterBegin << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl; 
    std::cout << "constIterBegin == B.cbegin(): " << (constIterBegin == B.cbegin()) << std::endl;
    std::cout << "constIterBegin != B.cbegin(): " << (constIterBegin != B.cbegin()) << std::endl;

    std::cout << std::endl << "-----------------" << std::endl;
    std::cout << "*++constIterBegin: " << *++constIterBegin << std::endl;
    std::cout << "*--constIterBegin: " << *--constIterBegin << std::endl;



    std::cout << std::endl << "\033[38;5;40m=================== REVERSE ITERATOR ===================\033[0m" << std::endl;

    MutantStack<int> C;
    MutantStack<int>::reverse_iterator reverseIterBegin;
    MutantStack<int>::reverse_iterator reverseIterEnd;

    for (int count = 0; count < 10; count++)
        C.push(count * 3);
    
    reverseIterBegin = C.rbegin();
    reverseIterEnd = C.rend();

    std::cout << "*iterBegin = " << *reverseIterBegin << "  (" << &reverseIterBegin << ")" << std::endl;
    std::cout << "*reverseIterEnd = " << *reverseIterEnd << "  (" << &reverseIterEnd << ")" << std::endl;

    std::cout << "-----------------" << std::endl;
    for (; reverseIterBegin != reverseIterEnd; reverseIterBegin++)
        std::cout << *reverseIterBegin << std::endl;

    std::cout << "-----------------" << std::endl;


    while (reverseIterBegin != C.rbegin())
    {
        reverseIterBegin--;
        std::cout << *reverseIterBegin << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl; 
    std::cout << "reverseIterBegin == C.rbegin(): " << (reverseIterBegin == C.rbegin()) << std::endl;
    std::cout << "reverseIterBegin != C.rbegin(): " << (reverseIterBegin != C.rbegin()) << std::endl;

    std::cout << std::endl << "-----------------" << std::endl;
    std::cout << "*++reverseIterBegin: " << *++reverseIterBegin << std::endl;
    std::cout << "*--reverseIterBegin: " << *--reverseIterBegin << std::endl;



    std::cout << std::endl << "\033[38;5;40m=================== CONST REVERSE ITERATOR ===================\033[0m" << std::endl;

    MutantStack<int> D;
    MutantStack<int>::const_reverse_iterator constReverseIterBegin;
    MutantStack<int>::const_reverse_iterator constReverseIterEnd;

    for (int count = 0; count < 10; count++)
        D.push(count * 3);
    
    constReverseIterBegin = D.crbegin();
    constReverseIterEnd = D.crend();

    std::cout << "*constReverseIterBegin = " << *constReverseIterBegin << "  (" << &constReverseIterBegin << ")" << std::endl;
    std::cout << "*constReverseIterEnd = " << *constReverseIterEnd << "  (" << &constReverseIterEnd << ")" << std::endl;

    std::cout << "-----------------" << std::endl;
    for (; constReverseIterBegin != constReverseIterEnd; constReverseIterBegin++)
        std::cout << *constReverseIterBegin << std::endl;

    std::cout << "-----------------" << std::endl;


    while (constReverseIterBegin != D.crbegin())
    {
        constReverseIterBegin--;
        std::cout << *constReverseIterBegin << std::endl;
    }

    std::cout << std::endl << "-----------------" << std::endl; 
    std::cout << "constReverseIterBegin == C.crbegin(): " << (constReverseIterBegin == D.crbegin()) << std::endl;
    std::cout << "constReverseIterBegin != C.crbegin(): " << (constReverseIterBegin != D.crbegin()) << std::endl;

    std::cout << std::endl << "-----------------" << std::endl;
    std::cout << "*++constReverseIterBegin: " << *++constReverseIterBegin << std::endl;
    std::cout << "*--constReverseIterBegin: " << *--constReverseIterBegin << std::endl;

    return (0);
}