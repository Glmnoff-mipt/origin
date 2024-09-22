#include <iostream>



double determinant(double* matrix, int matrix_size){
    for (int i = 0; i < matrix_size; i++){
        for (int j = i + 1; j < matrix_size; j++){
            int kf; 
            kf = matrix[j*matrix_size + i] / matrix[i*matrix_size + i];
            for (int k = i; k < matrix_size; k++){
                matrix[j*matrix_size + k] -= kf*matrix[i*matrix_size + k];
            }
        }
    }
    int det = 1;
    for (int l = 0; l < matrix_size; l++){
        det *= matrix[(matrix_size+1)*l];
    }

    // std::cout << determinant << std::endl;
    // for (int i = 0; i < matrix_size; i++){
    //     for (int j = 0; j < matrix_size; j++){
    //        std::cout << matrix[i*3 + j] << " ";
    //     }
    //     std::cout << '\n';
    // };

    delete[] matrix;
    return det;
}


int main(){
    int matrix_size;
    double* matrix = new double[matrix_size * matrix_size];

    std::cout << "Enter your matrix's size: " << std::endl;
    std::cin >> matrix_size;

    std::cout << "Enter your matrix one element at a 3time: " << std::endl;
    for (int i = 0; i < matrix_size * matrix_size; ++i){
        std::cin >> matrix[i];
    }

    std::cout << "Determinant of your matrix is: " << determinant(matrix, matrix_size) << std::endl;
    return 0;
};