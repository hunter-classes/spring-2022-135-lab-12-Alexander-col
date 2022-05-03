#include <iostream>
#include <vector>
#include "funcs.h"
int main()
{
    std::cout << "goodbye world" << std::endl;
    std::cout << "=========================================================Task A=========================================================" << std::endl;  
    std::cout << "vector ex1 has been created and function makeVector(int n) was used to make it with int 6 in the function" << std::endl;
    std::cout << "the vector should hold ints of 0-5 since 6 was put in the function and return a vector of 0-(n-1)" << std::endl;
    std::cout << "the loop should print out the amount of the size of the vector" << std::endl;
    std::vector<int> ex1 = makeVector(6);
    for (int i = 0; i != (ex1.size()); i++)
    {
        std::cout << ex1[i] << std::endl;
    }
}