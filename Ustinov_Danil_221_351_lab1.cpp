#include <iostream>
#include <bitset> // Для записи числа в 2-ой СС

// Подключаем нужные функции из пространства имен (namespace) std
using std::cout;
using std::cin;


int main()
{
    // Подключаем русский язык
    setlocale(LC_ALL, "Russian");

    //  Объявляем переменные
    int num = 1, a = 0, b = 0, cor0 = 0, cor1 = 0;

    // Ex. 1
    cout << "1.\nUstinov Danila Maksimovich, 221-351 \n\n";

    // Ex. 2
    cout << "2.\nMin int = " << INT_MIN << ", max int = " << INT_MAX << ", size of int = " << sizeof(int)
        << "\nMin unsigned int = 0" << ", max unsigned int = " << UINT_MAX << ", size of unsigned int = " << sizeof(unsigned int)
        << "\nMin short = " << SHRT_MIN << ", max short = " << SHRT_MAX << ", size of short = " << sizeof(short int)
        << "\nMin unsigned short = 0" << ", max unsigned short = " << USHRT_MAX << ", size of unsigned short = " << sizeof(unsigned short int)
        << "\nMin long = " << LONG_MIN << ", max long = " << LONG_MAX << ", size of long = " << sizeof(long int)
        << "\nMin long long = " << LLONG_MIN << ", max long long = " << LLONG_MAX << ", size of long long = " << sizeof(long long int)
        << "\nMin double = " << DBL_MIN << ", max double = " << DBL_MAX << ", size of double = " << sizeof(double)
        << "\nMin char = " << CHAR_MIN << ", max char = " << CHAR_MAX << ", size of char = " << sizeof(char)
        << "\nMin bool = 0" << ", max bool = 1" << ", size of bool = " << sizeof(bool) << "\n\n";

    // Ex. 3
    cout << "3.\nВведите число: ";
    cin >> num;
    cout << "В бинарном виде " << std::bitset<8 * sizeof(num)>(num)
        << "\nВ шестнадцатиричном виде " << std::hex << num
        << "\nbool " << bool(num)
        << "\ndouble " << double(num)
        << "\nchar " << char(num);

    // Ex. 4
    cout << "\n\n4.\nВведите коэффициенты a * x = b: ";
    cin >> a >> b;
    cout << a << " * x = " << b
        << "\nx = " << b << " / " << a
        << "\nx = " << b / a
        << "\nОтвет: " << b / a << ".\n";

    // Ex. 5
    cout << "\n5.\nВведите координаты отрезка на прямой: ";
    cin >> cor0 >> cor1;
    cout << "Середина отрезка находится в точке с координатой " << cor0 + ((cor1 - cor0) / 2.0) << ".\n";

    return 0;
}
