#include "derived.h"
#include <stdio.h>
#include <stdlib.h>

void class_derived_mtd1(struct class_derived *this) {
  printf("Derived mtd1, a=%d, b=%d\n", this->a, this->b);
}

void class_derived_mtd2(struct class_derived *this, int i) {
  printf("Derived mtd2, a+b+i=%d\n", this->a + this->b + i);
}

struct vtable_base vtable_derived = {
    (void (*)(struct class_base *)) & class_derived_mtd1,
    (void (*)(struct class_base *, int)) & class_derived_mtd2,
};

void class_derived_init(struct class_derived *this) {
  this->vtable = &vtable_derived;
}

struct class_derived *class_derived_new() {
  struct class_derived *ptr = malloc(sizeof(struct class_derived));
  class_derived_init(ptr);
  return ptr;
}
