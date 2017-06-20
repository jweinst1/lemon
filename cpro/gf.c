#include <stdio.h>
#include "example.h"




main(void){
    fitem foo = {.code = 1, .f = 1};
    fitem * foop = &foo;
    item * doop = (item *)foop;
    printf("hello %d\n", foo.f);
    printf("hello %d\n", doop->code);
}