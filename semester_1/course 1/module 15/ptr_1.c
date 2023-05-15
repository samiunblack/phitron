#include <stdio.h>
 
int main() {
    int x = 10;
    int *px = &x; //declare and initialize

    /*alternative declaration
    
    int *px;
    *px = &x;
    */

    printf("%d\n", px); //prints address stored in px
    printf("%d\n", *px); //prints values of the variable that is in the address that px points to

    *px = 50; //change value of the variable that is in the address that px points to
    printf("%d\n", x);


    *px = 400; //chaing the value of the variable that is in the address px points to
    px = 400; //chaning the address which px points to

    return 0;
}

/*
3 concepts about pointers:
    1. pointer saves the address of a variable
    2. pointer can show the value of the variable whose address it saves (de-reference)
    3. pointer can change the value of the variable whose address it saves
*/