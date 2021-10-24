#ifndef MODULE_3D_H
#define MODULE_3D_H

/**
 * @brief Summation function
 * @detailed The function of element-by-element summation of two 3D vectors of the same size.
 * @param size Vector size
 * @param vector_one The first vector
 * @param vector_two The second vector
 * @param vector_result The result vector
 */
void summ_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result);

/**
 * @brief Subtraction function
 * @detailed The function of element-by-element subtraction of two 3D vectors of the same size.
 * @param size Vector size
 * @param vector_one The first vector
 * @param vector_two The second vector
 * @param vector_result The result vector
 */
void differece_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result);

/**
 * @brief Prodact function
 * @detailed The function of element-by-element prodact of two 3D vectors of the same size.
 * @param size Vector size
 * @param vector_one The first vector
 * @param vector_two The second vector
 * @param vector_result The result vector
 */
void prodact_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result);

/**
 * @brief Devide function
 * @detailed The function of element-by-element devide of two 3D vectors of the same size.
 * @warning Integer variables are used, there may be inaccuracy in the calculation.
 * @param size Vector size
 * @param vector_one The first vector
 * @param vector_two The second vector
 * @param vector_result The result vector
 */
void devide_vector_3d(int size, int *** vector_one, int *** vector_two, int *** vector_result);

#endif // MODULE_3D_H
