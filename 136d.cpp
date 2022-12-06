/// Автор: Мирошин Владислав
/// Даны натуральное число n,
/// действительные числа a1,..., an. Вычислить:
/// l) a1^2+a2^2 ... an^2;



#include <cstdlib>
#include <iostream>         //ввод и вывод в консоль
#include <locale>           // для вывода на русском
#include <exception>
#include "calcul.h"         // созданный модуль
#include <fstream>



// подключение пространства имён std и my_arrays(пользовательское пространство имен с функциями для работы с массивом)
using namespace std;
using namespace my_arrays;

int main()
{
    // для вывода на русском
    setlocale(LC_ALL, "rus");

    cout << "136 Даны натуральное число n, действительные числа a1,..., an. " << endl;
    cout << "Вычислить: а) a1^2+a2^2 ... an^2;" << endl;

    const string namefile = "recult.txt";

    int n;
    cout << "Введите n: ";
    //cin >> n; // ввод n
   
        vector_int arr;
        //arr.resize(n);
        ifstream out;
        out.open(namefile);		//заполнение вектора из файла
        while (!out.eof())
        {
            out >> n;
            arr.push_back(n);
        }
        out.close();
        // ввод массива
       // input_rando_vector(arr);

        // вывод массива
        output_vector(arr);

        cout << endl; // переход на новую строку

        cout << "Содержимое файла " << namefile << endl;

        // вычисление и вывод результата
        cout << "a1^2+a2^2 ... an^2 = " << calc_result(arr) << endl;
      cin >> n;
   return 0;
}