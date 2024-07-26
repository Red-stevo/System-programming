#include <unistd.h>
#include <stdio.h>

int main() 
{
    // Creating the first child
    int n1 = fork();

    // Creating the second child. The first child
    // also executes this line and creates a grandchild.
    int n2 = fork();

    if (n1 > 0 && n2 > 0) 
    {
        printf("parent\n");
        printf("n1 = %d, n2 = %d\n", n1, n2);
        printf("My ID is %d\n", getpid());
        printf("My parent ID is %d\n", getppid());
    } 
    else if (n1 == 0 && n2 > 0) 
    {
        printf("First child\n");
        printf("n1 = %d, n2 = %d\n", n1, n2);
        printf("My ID is %d\n", getpid());
        printf("My parent ID is %d\n", getppid());
    } 
    else if (n1 > 0 && n2 == 0) 
    {
        printf("Second child\n");
        printf("n1 = %d, n2 = %d\n", n1, n2);
        printf("My ID is %d\n", getpid());
        printf("My parent ID is %d\n", getppid());
    } 
    else 
    {
        printf("Third child\n");
        printf("n1 = %d, n2 = %d\n", n1, n2);
        printf("My ID is %d\n", getpid());
        printf("My parent ID is %d\n", getppid());
    }

    return 0;
}
