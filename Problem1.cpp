/**
 * @file   Pa2_problem1.cpp
 * @author Alex Ludwick
 * @brief  This program caclucates how many cans of paint you need.
 * @date   2025-09-07 
 *
 */
#include <iostream>
using namespace std;

int main()
{
    int num1 = 340;
    int num2 = 0;
    int num3 = 0;
    int num4 = 2;
    int total = 0;

    cout << "The brand that you are looking at if covers 340 square ft." << endl;
    cout << "The program will cover front and back of the area." << endl;

    cout << " Please enter the length and height of the area you want to paint: (use the space between the numbers) " << endl;
    cin >> num2 >> num3;

    cout << "num2 = " << num2 << " num3 = " << num3 << endl;
    total = (num3 * num2);
    total = (total * num4); 
    total = (total / num1);

    cout << " You will need " << total << " can(s) of paint." << endl;

    return 0;
}

// g++ -Wall -std=c++17 Problem1.cpp -o Problem1
// ./Problem1