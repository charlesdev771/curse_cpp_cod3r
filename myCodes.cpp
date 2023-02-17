#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "includes/include.h"

using namespace std;


class Date 
{
    public:
        int day;
        int mouth;

        string sayMyName()
        {
            return "aaaaaaaaaaa";
        }


        Date(int pDay, int pMouth){
           (*this).day = pDay;
           (*this).mouth = pMouth;
        }
};

int main()
{

    Date d1(1,2);
    cout << d1 << endl;
    cout << d1.sayMyName() << endl;
    return 0;
}
