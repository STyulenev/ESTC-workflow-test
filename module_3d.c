#include "module_3d.h"

void summ_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result) {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            for (int k = 0; k < size; ++k)
                vector_result[i][j][k] = vector_one[i][j][k] + vector_two[i][j][k];
}

void differece_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result) {
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            for (int k = 0; k < size; ++k)
                vector_result[i][j][k] = vector_one[i][j][k] - vector_two[i][j][k];
}
