#include <iostream>

using namespace std ;

int calac(char a , int x, int z){
    switch (a)
    {
    case '+' :
        /* code */
        return x+z;
        break;
    case '-' :
        /* code */
        return x-z;
        break;
    case '*' :
        /* code */
        return x*z;
        break;
    case '/' :
        /* code */
        return x/z;
        break;
    default:
        break;
    }
}