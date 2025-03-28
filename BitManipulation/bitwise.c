#include "bitwise.h"
#include <stdio.h>

void bitwiseXOrSwap()
{
    short int w1 = 25;
    short int w2 = 77;

    printf("Before swap w1 : %d\n", w1);
    printf("Before swap w2 : %d\n", w2);

    w1^=w2;

    //0011001
    //1001101
    //-------
//w1//1010100 = 84

    w2^=w1;

    //1001101
    //1010100
//w2//0011001 - 25

    w1^=w2;
    //1010100
    //0011001
//w2//1001101 - 77

    printf("After swap w1 : %d\n", w1);
    printf("After swap w2 : %d\n", w2);

    
}
void bitwiseXOr()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;
    w3 = w1 ^ w2;
    //0011001
    //1001101
    //-------
    //1010100 = 84
    printf("XOR W3 : %d\n", w3);
    short int w4 = w1 ^ 3;
    //0011001
    //0000011
    //0011010 = 26

    printf("XOR W4 : %d\n", w4);

    w3^=w3;
    printf("XOR W3 with W3 : %d\n", w3);


}
void bitwiseOr()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;
    w3 = w1 | w2;
    //0011001
    //1001101
    //-------
    //1011101 = 93
    printf("OR W3 : %d\n", w3);
    short int w4 = w1 | 3;
    //0011001
    //0000011
    //0011011 = 27

    printf("OR W4 : %d\n", w4);

}
void bitwiseAnd()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;
    w3 = w1 & w2;
    //0011001
    //1001101
    //-------
    //0001001 = 9
    printf("AND W3 : %d\n", w3);

    short int w4 = w1 & 3;
    //0011001
    //0000011
    //0000001 = 1

    printf("AND W4 : %d\n", w4);

}
void bitwiseOperations()
{
    bitwiseAnd();
    bitwiseOr();
    bitwiseXOr();
    bitwiseXOrSwap();
}
