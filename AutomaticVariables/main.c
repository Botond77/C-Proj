#include <stdio.h>
// - auto - stored on stack - seldom used | not good for c/c++ compatibility
// - register - processor's fastest storage
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
    int res = foo_func(2,3);
    printf("Fo func res : %d\n", res);
    func_name2(); // for fun : what happens if you swap these functions? What is happening, Why ? :D
    func_name();

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