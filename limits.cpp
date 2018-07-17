/*
 * limits.cpp
 *
 *  Created on: 17 июл. 2018 г.
 *      Author: user
 */
#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int n_int = INT_MAX;		//Инициализация n_int максимальным значением int
	short n_short = SHRT_MAX;	//символы определенные в файле climits
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//операция sizeof выдает размер типа или переменной в байтах
	cout << "int is " << sizeof n_int << " bytes" << endl;
	cout << "short is " << sizeof n_short << " bytes" << endl;
	cout << "long is " << sizeof n_long << " bytes" << endl;
	cout << "long long is " << sizeof n_llong << " bytes" << endl;
	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	return 0;
}



