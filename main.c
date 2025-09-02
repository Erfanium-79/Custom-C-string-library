#include <stdio.h>
#include "mystring.h"

int main(){
    char str[] = "hello World!";
    printf("Length of the string: %zu\n", strlen(str));
    return 0;
}