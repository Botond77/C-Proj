#include "conversions.h"
#include <stdint.h>

static long long convertDecimalToBinaryLong(int dec)
{
    long long binary = 0;
    int remainder = 0;
    int index = 1;
    while(dec != 0)
    {
        remainder = dec % 2;
        dec = dec / 2;
        binary += index * remainder;
        index = index * 10;

    }
    return binary;
}
static char* convertDecimalToBinary(int dec)
{
    size_t size = 32;
    char *binaryPtr = (char*)malloc(size* sizeof(char));

    if (!binaryPtr) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    else
    {
        memset(binaryPtr,'0',size);
    }

    int index = size - 1;
    while (dec > 0 && index >= 0)
    {
        binaryPtr[index] = (dec % 2) ? '1' : '0';
        index--;
        dec /= 2;
    }
    return binaryPtr;
}

static int convertBinaryToDecimal(long long n)
{
    int dec = 0; 
    int remainder = 0;
    int index = 0;
    while(n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        dec += remainder * pow(2,index);
        index++;
    }
    return dec;
}
void conversions(long long binary, int dec)
{
    printf("Dec for %d : %d \n", binary,convertBinaryToDecimal(binary));
    printf("Binary for %d : %d", dec , convertDecimalToBinaryLong(dec));

}