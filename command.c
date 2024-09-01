#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc: argument count (number of command-line arguments)
    // argv: argument vector (array of strings representing the arguments)

    printf("Number of arguments: %d\n", argc);

    // Loop through each argument and print it
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
