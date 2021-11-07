#include <iostream>
#include <array>
#include <math.h>
using namespace std;
void play_maker(int x)
{

    long double sum = 0;
    double key;
    double value;
    cout << "Enter the value of X : " << endl;
    cin >> key;
    for (int i = x; i > -1; i--)
    {
        cout << "x^" << i << " :" << endl;
        cin >> value;

        sum += value * pow(key, i);
        value = 0;
        cout << sum << endl;
    }
    cout << "The Result is  : " << sum << endl;
}

void find_l()
{
    double a, b, l, ro = 0.618;
    cout << "Enter a and b :" << endl;
    cin >> a >> b;
    l = b - a;
    cout << "The Lenght is l : " << l << endl;
    cout << "The a : " << b - (ro * l) << endl;
    cout << "The b : " << a + (ro * l) << endl;
}
void itration_num(float x)
{
    double res = 3;
    double ro = 0.618;
    int i;
    bool k = false;
    for (i = 1; i < 100; i++)
    {

        res = 2 * pow(0.618, i);
        cout << res << endl;
        if (res < x)
        {
            break;
        }
    }

    cout << "The Number of Itration is  : " << i << endl;
}

void secent()
{
    double f1;
    double f2;
    double f3;
    double f4;
    cout << "a and b" << endl;
    cin >> f1 >> f2;
    cout << "f'(a) and f'(b)" << endl;
    cin >> f3 >> f4;
    double res;
    res = (f4 * f1 - f3 * f2) / (f4 - f3);
    cout << "Result : " << res << endl;
}
int main()
{
    system("cls");
    int x;
    cout << "Enter the value of itration" << endl;
    cin >> x;
    int choice;
    do
    {
        cout << endl;
        cout << "1.function activatior" << endl;
        cout << "2.find a1 and b1" << endl;
        cout << "3.find number of itration" << endl;
        cout << "4.secent" << endl;
        cout << "5. Fibanocii " << endl;
        cout << "6. stop" << endl;
        cout << "Enter your choice :";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            play_maker(x);
            break;
        case 2:
            find_l();
            break;
        case 3:
            float k;
            cout << "Enter the limit value : ";
            cin >> k;
            itration_num(k);
            break;

        case 4:
            secent();
            break;
        case 5:

            break;
        case 6:
            cout << "Thank You" << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}