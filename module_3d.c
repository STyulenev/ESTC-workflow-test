#include "module_3d.h"

void dot_product(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result) 
{
    point_result->x = point_one->y * point_two->z - point_one->z * point_two->y;
    point_result->y = -(point_one->x * point_two->z - point_one->z * point_two->x);
    point_result->z = point_one->x * point_two->y - point_one->y * point_two->x;
}

int cross_product(const Point3D_type * point_one, const Point3D_type * point_two)
{
    return point_one->x * point_two->x + point_one->y * point_two->y + point_one->z * point_two->z;
}

void vector_sum(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result)
{
    point_result->x = point_one->x + point_two->x;
    point_result->y = point_one->y + point_two->y;
    point_result->z = point_one->z + point_two->z;
}

void vector_devide(const Point3D_type * point_one, const Point3D_type * point_two, Point3D_type * point_result)
{
    point_result->x = point_one->x - point_two->x;
    point_result->y = point_one->y - point_two->y;
    point_result->z = point_one->z - point_two->z;
}
