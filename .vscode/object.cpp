#include <iostream>
using namespace std;

class Dog //Class declaration
{
public:           // Accesss specifer
    string breed; //Data members
    int wright;
    string color;
    void sleep();
}; //class definition ends here

void Dog::sleep()
{
    cout << "Don't disturb! My puppy is sleeping\n";
}

int main()
{
    Dog puppy1; //Object decleartion
    Dog puppy2; //Object decleartion

    puppy1.breed = "pom";
    puppy1.color = "white";
    cout << puppy1.color << "\n";
    puppy1.sleep();
    puppy2.breed = "pom";
    puppy2.color = "Black";
    cout << puppy2.color << "\n";
    puppy2.sleep();

    return 0;
}