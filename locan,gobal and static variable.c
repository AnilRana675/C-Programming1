//WAP to demonstrate the local global and static variable
#include <stdio.h>

int global_var = 10;  // Global variable

void func() {
    int local_var = 20;  // Local variable
    static int static_var = 30;  // Static variable

    printf("Inside func():\n");
    printf("  Local variable: %d\n", local_var);
    printf("  Static variable: %d\n", static_var);
    static_var++;  // Increment static variable
}

int main() {
    int local_var = 40;  // Another local variable (different scope)

    printf("Inside main():\n");
    printf("  Global variable: %d\n", global_var);
    printf("  Local variable: %d\n", local_var);

    func();  // Call func() twice
    func();

    printf("Inside main() after calling func():\n");
    printf("  Global variable: %d\n", global_var);
    printf("  Local variable: %d\n", local_var);  // Unchanged

    return 0;
}
