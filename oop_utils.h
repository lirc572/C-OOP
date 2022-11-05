/* Call a method with 0 argument */
#define OBJ_MTD0(obj, mtd) obj->vtable->mtd(obj)

/* Call a method with 1 argument */
#define OBJ_MTD1(obj, mtd, arg1) obj->vtable->mtd(obj, arg1)

/* Call a method with 2 arguments */
#define OBJ_MTD2(obj, mtd, arg1, arg2) obj->vtable->mtd(obj, arg1, arg2)

/* Call a method with 3 arguments */
#define OBJ_MTD3(obj, mtd, arg1, arg2, arg3)                                   \
  obj->vtable->mtd(obj, arg1, arg2, arg3)
