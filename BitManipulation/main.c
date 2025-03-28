#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <string.h>

int convertBinaryToDecimal(long long n);
char* convertDecimalToBinary(int dec);
long long convertDecimalToBinaryLong(int dec);

int main()
{
    printf("Dec : %d \n",convertBinaryToDecimal(1010000));

    char* ptr = convertDecimalToBinary(80);
    if (ptr) {
        printf("%s\n", ptr);
        free(ptr);
        ptr = NULL;
    }
    else
    {
        printf("convertDecimalToBinary failed");
    }
    printf("\n Binary for 41 : %d" , convertDecimalToBinaryLong(41));

    return 0;
}
long long convertDecimalToBinaryLong(int dec)
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
char* convertDecimalToBinary(int dec)
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

int convertBinaryToDecimal(long long n)
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