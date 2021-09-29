#include <iostream>
using namespace std;
//Encalsulation

class Employe
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) //setter
    {
        Name = name;
    }
    string getName() //getter
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
    }

    int getAge()
    {
        return Age;
    }
    Employe() //basic or default constructor
    {
        Name = "No Name";
        Company = "No Company";
        Age = 0;
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
    Employe E1;
    E1.setAge(12);

    cout << E1.getName() << " " << E1.getAge() << " " << E1.getCompany();

    return 0;
}