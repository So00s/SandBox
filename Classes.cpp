#include <iostream>
#include <string.h>
using namespace std;

class Class1
{
private:
    string name;
    string subname;
    int age;
    double weight;
public:
    void set(string n, string s, int a, double w)
    {
        name = n;
        subname = s;
        age = a;
        weight = w;
    }

    void out()
    {
        cout << name << endl << subname << endl << age << endl << weight << endl;
    } 

};

int main()
{
    string name = "Sanya";
    string name2 = "Alex";
    string subname = "Volkov";
    string subname2 = "AUF";
    int age = 21;
    int age2 = 13;
    double weight = 198.5;
    double weight2 = 156;
    Class1 parameters;
    Class1 parameters2;
    parameters.set(name,subname,age,weight);
    parameters.out();
    parameters2.set(name2, subname2, age2, weight2);
    parameters2.out();
    return 0;
}
