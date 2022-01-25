// Euler_028_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Started 25 Jan 2022


#include <iostream>

using namespace std;

int main()
{
    
}


// Strategy
// Observe patter in square
// 21 22 23 24 25
// 20  7  8  9 10
// 19  6  1  2 11
// 18  5  4  3 12
// 17 16 15 14 13

// Top left: 6-14
// Top right: 8-16
// Bottom left: 4-12
// Bottom Right: 2-8-18

// Sums
// 1 - 24 - 76
// 1 - 6 - 19 - 40 - 69 - 106
// 1 1 2 3 5 8 13 21 34 55 89

// Next corners: 31 - 37 - 43 - 49
// Next corners: 57 - 65 - 73 - 81
// Next corners: 91 - 101 - 111- 121

// FORMULA
// For odd numbers 3+
// n^2 * 4 - (n - 1)*6