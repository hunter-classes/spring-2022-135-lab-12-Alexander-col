#include <iostream>
#include <vector>
#include "funcs.h"

//non lab task function but makes printing vectors easier to displayed 
//oringally was in funcs.h but ran into conflicts 
void loop(std::vector<int> a);

int main()
{
    std::cout << "goodbye world" << std::endl;
    std::cout << "=================================Task A=================================" << std::endl;  
    std::cout << "vector ex1 has been created and function makeVector(int n) was used to make it with int 6 in the function" << std::endl;
    std::cout << "the vector should hold ints of 0-5 since 6 was put in the function and return a vector of 0-(n-1)" << std::endl;
    std::cout << "the loop should print out the amount of the size of the vector" << std::endl;
    std::vector<int> ex1 = makeVector(6);
    loop(ex1);


    std::cout << "=================================Task B=================================" << std::endl;  
    std::vector<int> example = {-4,4,-3,3,-2,2,-1,1,0};
    std::cout << "The integers that are in the vector named example are: ";
    loop(example);
    example = goodVibes(example);
    std::cout << "The function has been used on the example vector and should now only reutrn the positve values of the vector!" << std::endl;
    loop(example);

    std::cout << "=================================Task C=================================" << std::endl;  
    std::vector<int> doctor = {1,2,3};
    std::vector<int> strange = {4,5};

    std::cout << "The values for the vector of doctor are: ";
    loop(doctor);
    std::cout << "The value for the vector of strange are: ";
    std::cout << "The values for the vector of doctor are: ";
    loop(strange);

    std::cout << "Once they are put in the function of gogeta with docot as the first peramter and strange as the second we have: ";

    gogeta(doctor,strange);
    loop(doctor);


    std::cout << "=================================Task D=================================" << std::endl;  
    std::vector<int> pair1 = {2,1,6,5};
    std::vector<int> pair2 = {6,8,3,5};
    std::vector<int> outcome = sumPairWise(pair1, pair2);
    loop(outcome);

}

void loop(std::vector<int> a)
{
    for(int i = 0; i != a.size(); i++){
        if(a.at(i) == a.back()){
            std::cout << a[i];
            }
        else{std::cout << a[i] << ", ";
        }
    }
    std::cout << "\n";
}