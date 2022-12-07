#include <stdio.h>
#include "caml/mlvalues.h"

CAMLprim value caml_print_hello(value _unit) {
    printf("hello\n");
    return Val_unit;
}