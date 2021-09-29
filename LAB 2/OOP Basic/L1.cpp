#include <iostream>
using namespace std;
//class and object

class Employe
{
public:
    string Name;
    string Company;
    int Age;

    Employe() //basic or default constructor
    {
        Name = "No Name";
        Company = "No Company";
        Age = 0;
    }
    Employe(string name, string company, int age) //parametric Constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void intro()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
        cout << endl;
    }
};

int main()
{
    Employe E1; //Object 1
    Employe E2; //object 2
    Employe E3 = Employe("Gautam", "Amazon", 20);
    Employe E4 = Employe(E2); //copy constructor

    E1.Name = "Gautam";
    E1.Company = "apple";
    E1.Age = 25;
    E1.intro();
    E2.intro();
    E3.intro();
    E4.intro();
    return 0;
}