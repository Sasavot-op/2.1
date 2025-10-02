#include "operation.h"

void greet(int argc, char *argv[]) 
{
    if (argc == 2) 
    { 
        printf("Hello %s!\n", argv[1]);
    } 
    else if (argc == 3) 
    { 
        printf("Hello %s, you are %s!\n", argv[1], argv[2]);
    } 
    else if (argc == 4) 
    { 
        printf("Hello %s, you are %s from %s!\n", argv[1], argv[2], argv[3]);
    } 
    else 
    { 
        printf("Usage:\n");
        printf("  %s <name>\n", argv[0]);
        printf("  %s <name> <age>\n", argv[0]);
        printf("  %s <name> <age> <city>\n", argv[0]);
    }
}