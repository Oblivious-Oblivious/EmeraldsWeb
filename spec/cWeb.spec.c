#include "cWeb.spec.h"

int main(void) {
    char *v = get_value();
    int res = strcmp(v, "Hello, World!");

    if(res == 0) printf("Test (1) passed\n");

    return 0;
}
