#include "lib_1_extra.h"
#include "lib_1_main.h"

#include <stdio.h>

static void print_data_static(void) {
  printf("Hello from lib 1 static\r\n");
}

void lib_1_init(void) {
  print_data1();
  print_data_static();
}

