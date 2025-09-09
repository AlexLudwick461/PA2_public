/**
 * @file   Pa2_problem2.cpp
 * @author Alex Ludwick
 * @brief  This program computes how many inches are in a given number of feet.
 * 
 * @date   2025-09-07
 *
 */
#include <iostream>
using namespace std;


int main()
{
    int feet = 0;
    int inches = 0;

    cout << "Enter height in feet:" << endl;
    cin >> feet;
    inches = feet * 12;
    cout << feet << " feet is into " << inches << " inches." << endl;

    return 0;
}

// g++ -Wall -std=c++17 Problem2.cpp -o Problem2
// ./Problem2
