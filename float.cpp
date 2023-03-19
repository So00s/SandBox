#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct float_as_struct
{
    unsigned int fraction : 23; // мантисса
    unsigned int exponent : 8; // порядок
    unsigned int sign : 1; // бит знака 
};


void dec_to_bin(unsigned int decnum)
{
    vector <int> temp;
    // Написать простой алгоритм по переводу из 10 в 2, все числа если что целые, простой перевод в прямой код
    do 
    {
        temp.insert(temp.begin(), decnum % 2);
        decnum = decnum / 2;
    } while (decnum > 0);
    
    for(int i = 0; i < temp.size(); i++)
    {
        cout << temp[i];
    }    
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
    cout << "Знак в двоичной: ";
    dec_to_bin(t.sign); // Не работает потому что надо написать функцию
    cout << endl;
    cout << "Мантисса в двоичной: ";
    dec_to_bin(t.fraction);
    cout << endl; // Не работает потому что надо написать функцию
    cout << "Порядок в двоичной: ";
    dec_to_bin(t.exponent);
    cout << endl; // Не работает потому что надо написать функцию
    //---------------------------------------------

    return 0;
}
