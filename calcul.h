/// Автор: Мирошин Владислав
/// Даны натуральное число n,
/// действительные числа a1,..., an. Вычислить:
/// l) a1^2+a2^2 ... an^2;


// заголовочный файл модуля

#pragma once
#include <vector>

using vector_int= std::vector<int>;

namespace my_arrays
{   // вывод массива на экран
	void output_vector(const vector_int &v);

	// рандомный ввод массива от 1 до n+1
void input_rando_vector(vector_int &v);

	// вычисление результата
double calc_result(const vector_int &v);
}