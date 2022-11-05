#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

struct class_derived {
  struct class_base;
  int b;
};

void class_derived_init(struct class_derived *);

struct class_derived *class_derived_new();

#endif // !DERIVED_H
