﻿#include <iostream>
#include "LibZapoln.h" // библиотека с 3мя видами заполнения
#include "LibVivod.h" //библиотека для функции вывода
#include "ObmenSort.h" //библиотека обменных сортировок
#include "BezSravSort.h" //библиотека сортировок без сравнений
#include "ViborSort.h" //библиотека сортировок выбором
#include "VstavkiSort.h" //библиотека сортировок вставками

using namespace std;
//Поразрядная сортировка работает при количестве элементов >=10
void main()
{
    setlocale(LC_ALL, "RUS");

    int n;
    cout << "Введите кол-во элементов: ";
    cin >> n;

    int* m = new int[n];

    cout << endl << "Четно-нечетная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);//функция заполнения случайным образом
    Vivod(m, n);//функция вывода
    ChetNechetSort(m, n);//Четно-нечетная сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Cортировка простым обменом" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ProstObmenSort(m, n);//Cортировка простым обменом
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка расческой" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    RacheskaSort(m, n);//Сортировка расческой
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка Хоара" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    QSort(m, 0, n - 1);//Сортировка Хоара
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Гномья сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    GnomeSort(m, n);//Гномья сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Шейкер сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ShakerSort(m, n); //Шейкер сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка подсчетом" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    PodchetSort(m, n);//Сортировка подсчетом
    cout << endl;

    cout << endl << "Сортировка выбором" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    SortViborom(m, n);//сортировка выбором
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Квадратичная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    KvadratSort(m, n);//Квадратичная сортировка

    cout << endl << endl << "Пирамидальная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    PirSort(m, n);//Пирамидальная сортировка
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка простыми вставками" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    ProstVstavki(m, n);//Сортировка простыми вставками
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка бинарными вставками" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    BinarSort(m, n);//Сортировка бинарными вставками
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Сортировка Шелла" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    SortShella(m, n);//Сортировка Шелла
    cout << "Отсортированный массив: ";
    Vivod(m, n);

    cout << endl << "Поразрядная сортировка" << endl;
    cout << "Массив случайным способом заполнения: ";
    Rand(m, n);
    Vivod(m, n);
    int razr = 2;
    for (int i = 1; i <= razr; i++)
    {
        PorazrSort(m, i, n); //Поразрядная сортировка
    }
    cout << "Отсортированный массив: ";
    Vivod(m, n);
    cout << endl<<"Конец" << endl;

    system("pause");
}

//Введите кол - во элементов : 11
//
//Четно - нечетная сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Cортировка простым обменом
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка расческой
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка Хоара
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Гномья сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Шейкер сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка подсчетом
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка выбором
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Квадратичная сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 14 16 16 17 18 666 666
//
//Пирамидальная сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка простыми вставками
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка бинарными вставками
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Сортировка Шелла
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Поразрядная сортировка
//Массив случайным способом заполнения : 17 14 12 11 18 11 16 10 16 13 16
//Отсортированный массив : 10 11 11 12 13 14 16 16 16 17 18
//
//Конец