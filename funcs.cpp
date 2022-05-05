#include <iostream>
#include <vector>

void loop(std::vector<int> a)
{
    for(int i = 0; i != a.size(); i++)
    {
        std::cout << a[i] << ", ";
    }
    std::cout << "\n";
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


//  that appends elements of the second vector into the first and empties the second vector.
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    int size = vegeta.size();
    for(int i = 0; i != size; i++)
    {
        goku.push_back(vegeta.at(i));
    }
}

//  that returns a vector of integers whose elements are 
//  the pairwise sum of the elements from the two vectors 
//  passed as arguments. If a vector has a smaller size than the other, 
//  consider extra entries from the shorter vectors as 0. Example:
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    int diff;

    std::vector<int> output;
    if(v1.size() == v2.size())
    {
        for(int i = 0; i != v1.size(); i++)
        {
            output.push_back(v1[i] + v2[i]);
        }
    }
    else if(v1.size() > v2.size())
    {
        diff = (v1.size() - v2.size());
        for(int i = 0; i != diff; i++)
        {
            output.push_back(0);
        }
        for(int j = 0; j != v1.size(); j++)
        {
            output.push_back(v1[j] + v2[j]);
        }        

    }
    else if(v1.size() < v2.size())
    {
        diff = v2.size() - v1.size();
        for(int i = 0; i != diff; i++)
        {
            output.push_back(0);
        }        
        for(int j = 0; j != v1.size(); j++)
        {
            output.push_back(v1[j] + v2[j]);
        }

    }



    return output;
}
