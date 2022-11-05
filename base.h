#ifndef BASE_H
#define BASE_H

struct class_base;

struct vtable_base {
  void (*mtd1)(struct class_base *);
  void (*mtd2)(struct class_base *, int);
};

struct class_base {
  struct vtable_base *vtable;
  int a;
};

void class_base_init(struct class_base *);

struct class_base *class_base_new();

#endif // !BASE_H
