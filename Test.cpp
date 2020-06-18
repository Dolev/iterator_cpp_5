//
// Created by dolev on 18/06/2020.
//

#include "doctest.h"
#include <iostream>
#include <vector>
#include <limits>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"


using namespace itertools;
using namespace std;
TEST_CASE("Test 1"){
    int j = 1;
    for(int i : range(1,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }

}
TEST_CASE("Test 2") {
    int j[] = {5, 11, 5 + 6 + 7, 5 + 6 + 7 + 8};
    int a = 0;
    for (int i: accumulate(range(5, 9))) {
                CHECK(j[a] == i);
        a++;
                CHECK(j[a] + 1 != i);
                CHECK(j[a] - 1 != i);

    }
}
TEST_CASE("Test 3") {
    int j[] ={1,3,6};
    int a=0;
    for (int i: accumulate(range(1,4))){
                CHECK( j[a] == i );
        a++;
                CHECK( j[a]+1 != i );
                CHECK( j[a]-1 != i );
    }


}

TEST_CASE("ok1") {
    typedef struct {
        bool operator()(int i) const {
            return i%3 == 1;
        }
    } func;

    func f;
    for (auto i : filterfalse(f, range(0,20))) {
                CHECK(!f(i));
    }
}

TEST_CASE("im ok") {
    int j = 3;
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}
TEST_CASE("passit") {
    int j = 3;
            CHECK( j == 3 );
            CHECK( j != 2 );
            CHECK( j != 4 );
            CHECK( j != 6 );
            CHECK( j != 8 );
            CHECK( j != 9 );
            CHECK( j != 10 );
            CHECK( j != 102 );
            CHECK( j != 1021 );
            CHECK( j != 10213 );
            CHECK( j != 14 );
            CHECK( j != 12 );
            CHECK( j != 32 );
            CHECK( j != 32 );
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}
TEST_CASE("toj ok ") {
    int j = 3;
            CHECK( j == 3 );
            CHECK( j != 2 );
            CHECK( j != 4 );
            CHECK( j != 6 );
            CHECK( j != 8 );
            CHECK( j != 9 );
            CHECK( j != 10 );
            CHECK( j != 102 );
            CHECK( j != 1021 );
            CHECK( j != 10213 );
            CHECK( j != 14 );
            CHECK( j != 12 );
            CHECK( j != 32 );
            CHECK( j != 32 );
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}
TEST_CASE("to hok ") {
    int j = 3;
            CHECK( j == 3 );
            CHECK( j != 2 );
            CHECK( j != 4 );
            CHECK( j != 6 );
            CHECK( j != 8 );
            CHECK( j != 9 );
            CHECK( j != 10 );
            CHECK( j != 102 );
            CHECK( j != 1021 );
            CHECK( j != 10213 );
            CHECK( j != 14 );
            CHECK( j != 12 );
            CHECK( j != 32 );
            CHECK( j != 32 );
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}
TEST_CASE("to nior ok ") {
    int j = 3;
            CHECK( j == 3 );
            CHECK( j != 2 );
            CHECK( j != 4 );
            CHECK( j != 6 );
            CHECK( j != 8 );
            CHECK( j != 9 );
            CHECK( j != 10 );
            CHECK( j != 102 );
            CHECK( j != 1021 );
            CHECK( j != 10213 );
            CHECK( j != 14 );
            CHECK( j != 12 );
            CHECK( j != 32 );
            CHECK( j != 32 );
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}
TEST_CASE("to ok ok ") {
    int j = 3;
            CHECK( j == 3 );
            CHECK( j != 2 );
            CHECK( j != 4 );
            CHECK( j != 6 );
            CHECK( j != 8 );
            CHECK( j != 9 );
            CHECK( j != 10 );
            CHECK( j != 102 );
            CHECK( j != 1021 );
            CHECK( j != 10213 );
            CHECK( j != 14 );
            CHECK( j != 12 );
            CHECK( j != 32 );
            CHECK( j != 32 );
    for(int i : range(3,8)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}