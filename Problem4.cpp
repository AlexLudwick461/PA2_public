/**
 * @file   Pa2_problem4.cpp
 * @author Alex Ludwick
 * @brief  This program calculates how many customers 
 *         purchase energy drinks and citrus-flavored energy drinks.
 * @date   2025-09-07
 *
 */

#include <iostream>
#include <vector>

using namespace std;


void printChorus() 
{
    // I used freinds instead of homies it didn't feel right
    cout << "Hey freinds, my code is gonna rock this place" << endl;
    cout << "With a function named main and a curly brace" << endl;
}

void printEnding() 
{
    cout << "I put a semicolon at the end of each line" << endl;
    cout << "You haters never seen code that looked so fine" << endl;
}

void printVerse(const vector<string>& verse) 
{
    for (const string& line : verse) 
    {
        cout << line << endl;
    }
}

int main() 
{

    vector<string> verse1 = {
        "The CPU loves my code, no need to debug",
        "I can rap in C++ until it unplug"
    };

    vector<string> verse2 = {
        "The first time I try, my code compiles",
        "Lost a point for style cause my comments are vile"
    };

    vector<string> verse3 = {
        "Got help from the TAs in the IPL",
        "But I didn't need it cause I code so well"
    };

    vector<string> verse4 ={
        "I got full credit on external correctness",
        "Hey playa check this, my code eats yours for breakfast"
    };

    vector<vector<string>> verses = {verse1, verse2, verse3, verse4};

    for (size_t i = 0; i <= verses.size(); ++i) 
    {
        printChorus();

        for (int j = i - 1; j >= 0; --j) 
        {
            printVerse(verses[j]);
        }

        printEnding();
        cout << endl;
    }

    return 0;
}

// g++ -Wall -std=c++17 Problem4.cpp -o Problem4
// ./Problem4