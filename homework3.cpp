// Kelby Hubbard
// CS372 -- Homework 3
// Feb. 21, 2021
// Modern C++ Feature Experiment: Coroutine

// To compile with Clang (couldn't get gcc to support coroutines):
//              clang++ -Wall -std=c++20 homework3.cpp -o main
// You must have libc++-dev instaled in order for <experimental/coroutine> to work

#include <iostream>
#include <vector>
#include <experimental/coroutine>

// Coroutines allow us to create simple and easy generators
int generateEvenNumbers(int start, int end){
    for (int i = start; i < end; i++){
        if (i % 2 == 0){
            co_yield i;
        }
        
    }
}

int main(){
    for (auto n : generateEvenNumbers(0,10)) std::cout << n << " ";
}
