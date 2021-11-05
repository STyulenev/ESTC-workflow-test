#include <stdio.h>
#include "module_3d.h"

int main() 
{
    Point3D_type point_one;
    point_one.x = 1;
    point_one.y = 2;
    point_one.z = 3;
	
    Point3D_type * point_one_p = &point_one;
    
    Point3D_type  point_two;
    point_two.x = 2;
    point_two.y = 1;
    point_two.z = -2;

    Point3D_type * point_two_p = &point_two;
    
    Point3D_type point_result;
    Point3D_type * point_result_p = &point_result;
    
    dot_product(point_one_p, point_two_p, point_result_p);
    printf("dot_product: point_result x = %d, y = %d, z = %d", point_result_p->x, point_result_p->y, point_result_p->z);

    int result = cross_product(point_one_p, point_two_p);
    printf("cross_product =  %d ", result);

    vector_sum(point_one_p, point_two_p, point_result_p);
    printf("vector_sum: point_result x = %d, y = %d, z = %d", point_result_p->x, point_result_p->y, point_result_p->z);

    vector_devide(point_one_p, point_two_p, point_result_p);
    printf("vector_devide: point_result x = %d, y = %d, z = %d", point_result_p->x, point_result_p->y, point_result_p->z);

    return 0;
}
