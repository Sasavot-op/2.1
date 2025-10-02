#include "operation.h"

void handle_operation(int argc, char *argv[]) 
{
    if (argc < 2) 
    {
        printf("Usage:\n");
        printf("  %s --greet <name>\n", argv[0]);
        printf("  %s --add <num1> <num2>\n", argv[0]);
        printf("  %s --list\n", argv[0]);
        return;
    }

    char *op = argv[1];

    if (strcmp(op, "--greet") == 0) 
    {
        if (argc != 3) 
        {
            printf("Usage: %s --greet <name>\n", argv[0]);
            return;
        }
        printf("Hello %s!\n", argv[2]);
    } 
    else if (strcmp(op, "--add") == 0) 
    {
        if (argc != 4) 
        {
            printf("Usage: %s --add <num1> <num2>\n", argv[0]);
            return;
        }
        double a = atof(argv[2]);
        double b = atof(argv[3]);
        printf("%f + %f = %f\n", a, b, a + b);
    } 
    else if (strcmp(op, "--list") == 0) 
    {
        if (argc != 2) 
        {
            printf("Usage: %s --list\n", argv[0]);
            return;
        }
        printf("Listing items:\n");
        printf(" - Item 1\n");
        printf(" - Item 2\n");
        printf(" - Item 3\n");
    } 
    else 
    {
        printf("Unknown operation: %s\n", op);
    }
}
