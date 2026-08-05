#include <stdio.h> 
#include <stdlib.h> 

char *copy(char *s) {
    char *result = malloc(strlen(s)+1);
    strcpy(result, s);
    return result;
}

int main() {

    char *name = copy("hello");

    printf("%s\n", name);

    return 0;
}
