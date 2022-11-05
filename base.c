#include "base.h"
#include <stdio.h>
#include <stdlib.h>

void class_base_mtd1(struct class_base *this) {
  printf("Base mtd1, a=%d\n", this->a);
}

void class_base_mtd2(struct class_base *this, int i) {
  printf("Base mtd2, a+i=%d\n", this->a + i);
}

struct vtable_base vtable_base = {
    &class_base_mtd1,
    &class_base_mtd2,
};

void class_base_init(struct class_base *this) { this->vtable = &vtable_base; }

struct class_base *class_base_new() {
  struct class_base *ptr = malloc(sizeof(struct class_base));
  class_base_init(ptr);
  return ptr;
}
