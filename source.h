//
// Created by genri on 21.01.2023.
//

#ifndef INC_5_IDZ_OOP_SOURCE_H
#define INC_5_IDZ_OOP_SOURCE_H
#include<atomic>

void adder(int n, int* input_array,  int size,  int threads, std::atomic<int> &sumResult);

#endif //INC_5_IDZ_OOP_SOURCE_H
