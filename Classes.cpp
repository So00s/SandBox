#include <iostream>

using namespace std;

class Class1
{
private:
    string name;
    string subname;
    int age;
    double weight;
public:
    void set(string name, string subname, int age, double weight)
    {
        name = name;
        subname = subname;
        age = age;
        weight = weight;
    }

    void out()
    {
        cout << name << " " << subname << " " << age << " " << weight << endl;
    } 

};

int main()
{
    string name = "Sanya";
    string subname = "Volkov";
    int age = 21;
    double weight = 198.5;

    Class1 parameters;
    Class1 parameters2;
    parameters.set(name, subname, age, weight);
    parameters.out();
    return 0;
}