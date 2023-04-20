// Initializers
// 4 Ways to initialize: Assignment, Function, Syntax or Calling a Constructor

#include <stdio.h>


int main(){

    int a = 1;
    int b = int(2);
    int c(3);
    int d{4};   // NEW to C++

    int e = {5};
    printf("A = %d \n B = %d \n C = %d \n D = %d \n E = %d \n ",a,b,c,d,e);

    // ARRAYS

    int birth_years[] = { [0]: 1920, [1]: 2001, [2]: 2011, [3]: 2019};

    int john[] = { [0]: 1988};

}

