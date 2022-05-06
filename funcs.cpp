#include <iostream>
#include <vector>
#include "funcs.h"



//  that returns a vector of n integers that range from 0 to n-1. 
//  Call your program vectors.cpp. 
//  Your function must be implemented outside the main 
//  function and must return a vector.
std::vector<int> makeVector(int n)
{
    std::vector<int> output;
    for (int i = 0; i <n; i++)
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
        if(v.at(i) > 0)
        {
            output.push_back(v.at(i));
        }


    }
    return output;

}


//  that appends elements of the second vector into the first and empties the second vector.
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) 
{
    const int size = vegeta.size();

    for(int i = 0; i < size; i++) 
    { 
        goku.push_back(vegeta.at(0));
        vegeta.erase(vegeta.begin());
    }
}

//  that returns a vector of integers whose elements are 
//  the pairwise sum of the elements from the two vectors 
//  passed as arguments. If a vector has a smaller size than the other, 
//  consider extra entries from the shorter vectors as 0. Example:
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) 
{ 
    std::vector<int> sums = v1.size() > v2.size() ? v1 : v2; 

    // gets the smaller size from two vectors
    const int size = v1.size() > v2.size() ? v2.size() : v1.size();

    for(int i = 0; i < size; i++) 
    { 
        sums[i] = v1.at(i) + v2.at(i);
    }

    return sums;

}
