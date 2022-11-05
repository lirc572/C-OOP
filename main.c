#include "base.h"
#include "derived.h"
#include "oop_utils.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  struct class_base *b1 = class_base_new();
  b1->a = 1;
  OBJ_MTD0(b1, mtd1);
  OBJ_MTD1(b1, mtd2, 200);
  free(b1);

  struct class_derived *d1 = class_derived_new();
  d1->a = 2;
  d1->b = 40;
  struct class_base *d1b = (struct class_base *)d1;
  OBJ_MTD0(d1b, mtd1);
  OBJ_MTD1(d1b, mtd2, 800);
  free(d1);

  return 0;
}
