#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3)
    {
        printf("Usage: %s <name1> <name2>\n", argv[0]);
        return 0;
    }
    printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
    return 0;
}