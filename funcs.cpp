#include <iostream>
#include <vector>

void h_w()
{
    std::cout << "Hello World" << std::endl;
}

//  that returns a vector of n integers that range from 0 to n-1. 
//  Call your program vectors.cpp. 
//  Your function must be implemented outside the main 
//  function and must return a vector.
std::vector<int> makeVector(int n)
{
    std::vector<int> output;
    for (int i = 0; i !=n; i++)
    {
        output.push_back(i);
    }
    return output;
}


// that, given a vector of integers, 
// returns a vector with only the positive integers in the same order.
std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector<int> output; 

    for(int i = 0; i != v.size(); i++)
    {
        if(v[i] > 0)
        {
            output.push_back(v[i]);
        }


    }
    return output;

}