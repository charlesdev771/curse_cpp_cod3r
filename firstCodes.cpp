#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "includes/include.h"
#define ZERO 0

using namespace std;


namespace calculos
{
    int add2(int a, int b)
    {
        return a*b;
    }
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "Hello World!" << endl;
    printf("Jooj!/n");
    puts("aaaa/n");
    int valor = 0;
    cin >> valor;
    printf("O valor eh: %i", valor);

    bool isadmin = false;

    short int age = 14;



    string title = "Mr purple";

    cout << title << endl;

    int refencia = 10;
    int& referencia2 = refencia;

    cout << &refencia << endl; 
    cout << *&refencia << endl; //desreference



    int value = 9;
    int& ref = value;
    int *point = &value;

    cout << point << endl;

    cout << add(100, 1000) << endl;


    cout << calculos::add2(10, 10) << endl;

    return ZERO;
}