#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "includes/include.h"

using namespace std;


class Actor
{
    public:
        string name;

        string sayMyName()
        {
            return "aaaaaaaaaaa";
        }


        Actor(string name){
           (*this).name = name;
        }
    private:

        void myTeste()
        {
            printf("aaa");
        }
};

int main()
{

    Actor actor("charles");
    return 0;
}
