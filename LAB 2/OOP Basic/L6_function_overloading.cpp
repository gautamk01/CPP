#include <iostream>
using namespace std;
//Function overloading
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{

    cout << sum(4.5, 2.3) << endl;        //double sum
    cout << sum(4, 5) << endl;            //int sum
    cout << sum(1.2, 5.2, 84.65) << endl; //float sum

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}