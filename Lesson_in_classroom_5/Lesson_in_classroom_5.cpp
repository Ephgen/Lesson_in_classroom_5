// Lesson_in_classroom_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "Russian");


    /*string name;
    cout << "Как ваше имя? " << endl;
    cin >> name;
    cout << "Приветствую Владыка " << name << "!!!";*/
        
    // 1
    // Считать с клавиатуры имя пользователя и поприветствовать его

       /* int arr[5];
       
        cout << "Заполните 5 мерный массив с клавиатуры" << endl;
        for (int i = 0; i < 5; i++)        
            cin >> arr[i];                 
        cout << arr[0]<< " " << arr[1]<<" " << arr[2]<< " " << arr[3]<< " " << arr[4] << endl;
        cout << "Массивы которые деляться на 2 без остатка: " << endl;
        for (int i = 0; i <5; i++)        
            if (arr[i] % 2 == 0)
                cout << arr[i]<< endl;            
        */
        

    // 2
    // Заполнить одномерный массив числами с клавиатуры и вывести на экран числа которые не деляться на 2

        /*int arr[10];
        for (int i = 0; i < 10; i++)
        {
            arr[i] = rand() % (150 - 40) + 40;
            cout << arr[i] << endl;
                }
        cout << "Не делятся на три из них: \n";
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] % 3 != 0)
                cout << arr[i] << endl;
        }*/


    //3
    // заполнить одномерный масси рандомными числами от 40 до 150 и вывести его на экран и вывести те числа которые имеют остатоу при делении на 3.

   /* int x = 1; int y = 1;
    while (x <= 5)
    {
        y = 1;
        while (y <= 5)
        {

            if (x + y == 6 || x==y)
                cout << "+";
            else
                cout << "=";
            y++;
        }
        x++;
        cout << endl;
    }*/

    /*4 
     Вывести на экран с помощью цикла while
     +===+
     =+=+=
     ==+==
     =+=+=
     +===+
     */

        

//5 Заполнить два целочисленных массива А[10] B [10] сформировать третий массив X[20], элементы которого будут взяты из А и B:
//а) чередование (a0,b0,a1,b1...)
//b) следования (a0,a1.a2...b9,b8,b7...)

    srand(time(NULL));
    /*int A[10];
    int B[10];
    int X[20];
    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % (99 - 1) + 1;
        B[i] = rand() % (99 - 1) + 1;
        
    
    }
 
    cout << "1) заполнить чередованием\n2)заполнить следованием";
    int q;
    cin >> q;
    if (q == 1)
    {
        int i = 0;
        int j = 0;
        while (i < 20)
        {
            X[i] = A[j];
            i += 2;
            j++;
        }
        i = 1;
        j = 0;
        while (i < 20)
        {
            X[i] = B[j];
            i += 2;
            j++;
        }




    }
    else if (q == 2)
    {
        int i = 0;
        int j = 0;
        while (i < 10)
        {
            X[i] = A[j];
            i++;
            j++;
        }
        i = 10;
        j = 9;
        while (i < 20)
        {
            X[i] = B[j];
            i++;
            j--;
        }
    }

    for (int i = 0; i < 20; i++)
        cout << X[i]<<"  ";*/
    
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % (400 - 1) + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            for (int q = 0; q < 5; q++)
                for (int r = 0; r < 5; r++)
                    if (arr[i][j] < arr[q][r])
                        swap(arr[i][j], arr[q][r]);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)

            cout << arr[i][j] << "  ";
        cout << endl;
    }
    
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
