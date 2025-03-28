#include <stdio.h>
#include <malloc.h>
// const - trivial, making a variable constant, wont be able to change it - its idempotent ( const const double pi = 3.141592654)
// volatile - telling compiler with this qualifier that the specified variable will change its value
    //      - tells the compiler to supress various kind of optimalizations eg. seemingly redundant assingments to a var.
    //      - prevents compiler from caching eg. loading directly in a register
// restrict - optimalization hint for the compiler
    //      - tells the compiler that the pointer is the only reference to the value
    //      - the pointer exclusively manages the data object
    //      - tells the compiler it does not need any additional checks
    //      - violating theese above, leads to undefined behaviour

void f1(int n, float * restrict a1, const float* restrict a2)
{

    for(int i=0 ; i< n; i++)
    {
        a1[i] += a2[i];
    }

}
int main()
{
    const float *pf; // constant float
    float * const pt; // constant pointer
    const float * const ptr; // const pointer & const float


    int n;
    int arr[10];
    int * restrict rest = (int*) malloc(10*sizeof(int));
    // use "rest" to modify the object

    return 0;
}
