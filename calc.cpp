/// Автор: Мирошин Владислав
/// Даны натуральное число n,
/// действительные числа a1,..., an. Вычислить:
/// l) a1^2+a2^2 ... an^2;


#include <iostream>		//ввод и вывод в консоль
#include <cmath>		//математические функции
#include "calcul.h"		//модуль с вычислениями
#include <exception>

 
/// вывод массива на экран
void my_arrays::output_vector(const vector_int &v)
{ 
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
}


/// рандомный ввод массива от 1 до n+1
void my_arrays::input_rando_vector(vector_int &v)
{
	for (int i = 0; i < v.size(); i++)
		v[i] = rand() % 100 + 1;
}

/// вычисление результата
double my_arrays::calc_result(const vector_int &v)
{
	
	double sum = 0;							// для сохранение промежуточной суммы
	for (int i = 0; i < v.size(); i++)
		sum += v[i]*v[i];					// добавляем к ранее выч-ой сумме
	return sum;								// возвращаем вычисленную сумму
}
