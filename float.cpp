#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


struct float_as_struct
{
    unsigned int fraction : 23; // мантисса
    unsigned int exponent : 8; // порядок
    unsigned int sign : 1; // бит знака
};


void dec_to_bin(unsigned int decnum)
{
    int binnum = 0;
    string temp = "";
    // Написать простой алгоритм по переводу из 10 в 2, все числа если что целые, простой перевод в прямой код
    do 
    {
        temp = temp + to_string(decnum % 2);
        decnum = decnum / 2;
    } while (decnum > 0);
    
    reverse(temp.begin(), temp.end());
    cout << temp << endl;
}


int main()
{
    setlocale(LC_ALL, "Russian"); // Установка русского языка

    float fin = 5.5f; // Сюда пишите любое число, но f в конце надо, так общепринято показывать что тип float (32 бита)
    struct float_as_struct t;

    memcpy(&t, &fin, sizeof(float));
    //---------------------------------------------
    cout << "Знак в десятичной: " << t.sign << endl;     // Выводится значение знака в 10
    cout << "Мантисса в десятичной: " << t.fraction << endl; // Выводится значение мантиссы в 10
    cout << "Порядок в десятичной: " << t.exponent << endl; // Выводится значение порядка в 10
    cout << "---------------------------------------------" << endl;
    dec_to_bin(t.sign);
    dec_to_bin(t.fraction);
    dec_to_bin(t.exponent);
    //---------------------------------------------

    return 0;
}
