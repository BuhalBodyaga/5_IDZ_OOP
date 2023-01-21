#include<thread>
#include<atomic>
#include<iostream>
#include "source.h"

int main()
{
    int size;
    std::cout << "Введите количество переменных ";
    std::cin >> size;
    int* input_array = new int[size];

    std::cout << "Введите количество потоков " ;
    int threads;
    std::cin >> threads;

    std::atomic<int> sumResult(0);                                                    //Создаем атомарную переменную

    for (int i = 0; i < size; i++) {
        std::cin >> input_array[i];
    }

    int j=0;
    while( j < threads){
        //Здесь мы создаем количество потоков (std::thread t)
        std::thread t(adder, j, input_array, size, threads, std::ref(sumResult));//Создаваемая функция
        t.detach();                                                                     //Запуск потока
        j++;
    }

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));             //Задаем задержку перед выводом на экран

    std::cout << sumResult << std::endl;
}