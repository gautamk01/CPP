//operatter overloading

#include <iostream>
#include <string.h>

using namespace std;

class username
{
public:
    string firstname, lastname;
    username(string fname, string lname)
    {
        firstname = fname;
        lastname = lname;

        // firstname = fname;  // lastname =fname;
    }
    void display()
    {
        cout << "My name is : " << firstname + lastname << endl;
    }
};

int main()
{
    string fname, lname;
    cout << " enter your first name " << endl;
    getline(cin, fname);
    cout << " enter your last name  ";
    getline(cin, lname);
    username u1(fname, lname);
    u1.display();
    return 0;
}