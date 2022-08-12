#include <iostream>
#include <stdio.h>
using namespace std;//decared this globally 

int main()
{
    cout << "Hello World!\n";
    int a = 10;
    int b = 20;
    int c = a + b;
    cout << c <<"\n";
    int numbers[5] = { 1,2,3,4,5 };//This is an array with the elements 1 - 5
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i]<< "\n";
    }                                      
}

