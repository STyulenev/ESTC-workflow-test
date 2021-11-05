#ifndef MODULE_3D_H
#define MODULE_3D_H

#include <stdio.h>

typedef struct Point3D {
    int x;
    int y;
    int z;
} Point3D_type;

void dot_product(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result);

int cross_product(const Point3D_type * point_one, const Point3D_type * point_two);

void vector_sum(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result);

void vector_devide(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result);

#endif // MODULE_3D_H
