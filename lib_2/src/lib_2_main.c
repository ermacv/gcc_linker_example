#include "lib_2_extra.h"
#include "lib_2_main.h"

#include <stdio.h>

static void print_data_static(void) {
  printf("Hello from lib 2 static\r\n");
}

void lib_2_init(void) {
  print_data();
  print_data_static();
}
