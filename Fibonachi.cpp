#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Input number: ";
    cin >> n;
    int a = 0;
    int b = 1;
    int temp;
    if (n == 1)
    {
        cout << "Your number:" << a << endl;
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp = b;
        b += a;
        a = temp;
    }
    int out_number = b;
    cout << "Your number:" << out_number << endl;

    return 0;
}