﻿// v10_lozbina.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    /*int a;
    int factorial = 1;
    std::cout << "введите число факториал которого хотите найти\n";
    std::cin >> a;

    if (a < 1) 
    {
        std::cout << "у отрицательного числа нельзя найти факториал";
    }
    else 
    {
        for (int i = 1; i <= a; i++) {
            factorial *= i;
        }

        std::cout << "факториал числа " << a << " равен " << factorial << std::endl;

        return 0;
    }*/

    //
    
        int number;
        int min = INT_MAX;

        std::cout << "введите число: ";
        std::cin >> number;

        while (number != 0) {
            int digit = number % 10;
            if (digit < min) {
                min = digit; 
            }
            number /= 10; 
        }

        std::cout << "наименьшая цифра: " << min << std::endl;

        return 0;
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
