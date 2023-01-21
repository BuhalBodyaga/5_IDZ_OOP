//
// Created by genri on 21.01.2023.
//
#include<atomic>

void adder(int n, int* input_array,  int size,  int threads, std::atomic<int> &sumResult) //Метод который будут выполнять потоки
{
    for (int i = n; i < size; i += threads) {
        sumResult += input_array[i];
    }
}