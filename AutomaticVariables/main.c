#include <stdio.h>
// - auto - stored on stack - seldom used | not good for c/c++ compatibility
// - register - processor's fastest storage | keyword (recommendation to the compiler) : to store a symbol in a register instead of RAM | varialbe used a lot | size = max size of a register size
    // used only local scope
// - static - used to declare methods and variables which are used in a file but only a specific file, in other words making it usable only in a specific file 
// - extern - defined elsewhere, allows to access defined symbol in another file

int func_name();
int func_name2();
void myFunc();
extern int multiplier;
extern int multiplier2;

extern int foo_func(int lhs ,int rhs);
int main()
{
    multiplier = 5;
    // printf("Static acess : %d\n" ,multiplier2); linker error
    printf("Foo func res : %d\n", foo_func(2,3));
    func_name2(); // for fun : what happens if you swap these functions? What is happening, Why ? :D
    func_name();

    register int x;
    for( x = 1; x < 15; x++)
    {
        printf("\n %d", x);
    }

    return 0;
}

void myFunc()
{
    char x[] = "apple";
}
int func_name2()
{
    int y = 3;
    printf("%s : %d\n", __FUNCTION__, y);

    return y;
}
int func_name()
{
    int y;
    printf("%s : %d\n", __FUNCTION__, y);
    return y;
}