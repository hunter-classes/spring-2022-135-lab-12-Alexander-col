#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector> 
#include <string> 
#include "doctest.h"
#include "funcs.h"

std::string vector_to_string(std::vector<int> &vect) { 
    std::string sent = "";

    for(int a : vect) { 
        sent += std::to_string(a) + " ";
    }

    return sent;
}

TEST_CASE("TASK A") { 
    std::vector<int> test_one = makeVector(7);
    std::vector<int> test_two = makeVector(0);

    CHECK(vector_to_string(test_one) == "0 1 2 3 4 5 6 ");
    CHECK(vector_to_string(test_two) == "");

}

TEST_CASE("TASK B") { 
    std::vector<int> test_one = {  };
    std::vector<int> test_two = { 1, 4, 77, 6, 10, -10, -12, -14, 5, -34, -53};
    std::vector<int> test_three = { -10, -5, -1, -10, -6, -100, 0, 1 };


    SUBCASE("TEST ONE") { 
        test_one = goodVibes(test_one);
        CHECK(vector_to_string(test_one) == "");
    }

    SUBCASE("TEST TWO") { 
        test_two = goodVibes(test_two);
        CHECK(vector_to_string(test_two) == "1 4 77 6 10 5 ");
    }

    SUBCASE("TEST THREE") { 
        test_three = goodVibes(test_three);
        CHECK(vector_to_string(test_three) == "1 ");
    }

}

TEST_CASE("TASK C") { 
    SUBCASE("TEST ONE") { 
        std::vector<int> test_one = {  };
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };

        gogeta(test_one, test_two);

        CHECK(vector_to_string(test_one) == "1 4 6 10 -10 -12 -14 5 ");
        CHECK(vector_to_string(test_two) == "");
    }


}

TEST_CASE("TASK D") { 
    SUBCASE("TEST ONE") { 
        std::vector<int> test_one = {  };
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };

        std::vector<int> sums = sumPairWise(test_one, test_two);
        
        CHECK(vector_to_string(sums) == "1 4 6 10 -10 -12 -14 5 ");
    }

    SUBCASE("TEST TWO") { 
        std::vector<int> test_two = { 1, 4, 6, 10, -10, -12, -14, 5 };
        std::vector<int> test_four = { -100, 4, 5, -10, 2, -5, -6, 1 };

        std::vector<int> sums = sumPairWise(test_two, test_four);

        CHECK(vector_to_string(sums) == "-99 8 11 0 -8 -17 -20 6 ");
    }


}