#include <iostream>
#include <vector>
#include "funcs.h"
int main()
{
    std::cout << "goodbye world" << std::endl;
    std::cout << "=================================Task A=================================" << std::endl;  
    std::cout << "vector ex1 has been created and function makeVector(int n) was used to make it with int 6 in the function" << std::endl;
    std::cout << "the vector should hold ints of 0-5 since 6 was put in the function and return a vector of 0-(n-1)" << std::endl;
    std::cout << "the loop should print out the amount of the size of the vector" << std::endl;
    std::vector<int> ex1 = makeVector(6);
    for (int i = 0; i != (ex1.size()); i++)
    {
        std::cout << ex1[i] << std::endl;
    }

    std::cout << "=================================Task B=================================" << std::endl;  
    std::vector<int> example = {-4,4,-3,3,-2,2,-1,1,0};
    std::cout << "The integers that are in the vector named example are: ";
    for(int i = 0; i != example.size(); i++)
    {
        std::cout << example[i] << ", ";
        if (i == example.size()-1)
        {
            std::cout << "\n";
        }
        
    }
    example = goodVibes(example);
    std::cout << "The function has been used on the example vector and should now only reutrn the positve values of the vector!" << std::endl;
    for(int i = 0; i != example.size(); i++)
    {
        std::cout << example[i] << ", ";
        if (i == example.size()-1)
        {
            std::cout << "\n";
        }
    }

    std::cout << "=================================Task C=================================" << std::endl;  
    std::vector<int> doctor = {1,2,3};
    std::vector<int> strange = {4,5};

    std::cout << "The values for the vector of doctor are:";
    for(int i = 0; i != doctor.size(); i++)
    {
        std::cout << doctor[i] << ", ";
        if (i == doctor.size()-1)
        {
            std::cout << "\n";
        }
    }
    std::cout << "The value for the vector of strange are: ";
    std::cout << "The values for the vector of doctor are:";
    for(int i = 0; i != strange.size(); i++)
    {
        std::cout << strange[i] << ", ";
        if (i == strange.size()-1)
        {
            std::cout << "\n";
        }
    }

    std::cout << "Once they are put in the function of gogeta with docot as the first peramter and strange as the second we have:";

    gogeta(doctor,strange);
        for(int i = 0; i != doctor.size(); i++)
    {
        std::cout << doctor[i] << ", ";
        if (i == doctor.size()-1)
        {
            std::cout << "\n";
        }
        strange.empty();
    }


    std::cout << "=================================Task D=================================" << std::endl;  
    std::vector<int> pair1 = {1,2,3};
    std::vector<int> pair2 = {4,5,6};
    std::vector<int> outcome = sumPairWise(pair1, pair2);
    loop(outcome);







}