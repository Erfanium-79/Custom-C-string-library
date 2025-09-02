#include "mystring.h"

size_t strlen(const char *s){
    int counter = 0;
    while (s[counter] != '\0'){
        counter++;
    }
    return counter;
}