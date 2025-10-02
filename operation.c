#include "operation.h"

void operation(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        printf("Usage: %s <name> <age>\n", argv[0]);
        return;
    }

    char *name = argv[1];
    char *age  = argv[2];

    printf("Hello %s, you are %s years old!\n", name, age);
}