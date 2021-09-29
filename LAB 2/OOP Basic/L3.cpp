#include <iostream>
using namespace std;
//Abtraction

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employe : AbstractEmployee
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
    Employe(string name, string company, int age) //parametric Constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << "- got promotion" << endl;
        }
        else
        {
            cout << Name << "- Sorry better luck next time " << endl;
        }
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
    Employe E2 = Employe("Ram", "apple", 34);
    Employe E3 = Employe("Jack", "apple", 20);
    E2.AskForPromotion();
    E3.AskForPromotion();

    E1.setAge(12);

    cout << E1.getName() << " " << E1.getAge() << " " << E1.getCompany();

    return 0;
}