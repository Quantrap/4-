﻿// 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int N=0,t;
    cout << "Введите размер массива:\n";
    cin >> N;
    int *mass = new int[N];
    for (int i = 0; i < N; i++)
    {
        mass[i] = rand();
        cout << mass[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < N-1; i++)
    {
        for (int g = i + 1; g < N; g++)
        {
            if (mass[i] < mass[g])
            {
                t = mass[i];
                mass[i] = mass[g];
                mass[g] = t;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << mass[i] << " ";
    }
    delete []mass;
    system("pause");
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
