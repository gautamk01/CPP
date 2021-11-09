#include <iostream>
#include <array>
#include <math.h>
using namespace std;

void cal_l(int l, array<int, 14> F1, int k, int n)
{
    float a = F1.at(n - k);
    float b = F1.at(n);
    float res = a / b;
    cout << "l* : " << res << endl;
    double x;
    double y;
    cout << "Enter the a and b :" << endl;
    cin >> x >> y;
    cout << "The x1 : " << x + res << endl;
    cout << "The x2 : " << y - res << endl;
}

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

int main()
{
    double uncertainty = 0.2;
    int n = 0;
    int l0;
    int k;
    cout << "Enter the k value : ";
    cin >> k;
    cout << "Enter the L value : ";
    cin >> l0;
    array<int, 14> F1 = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    int choice;
    do
    {
        cout << endl;
        cout << "1.function activatior" << endl;
        cout << "2.FIBANOCCI" << endl;
        cout << "3. stop" << endl;
        cout << "Enter your choice :";
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            int x;
            cout << "Enter the value of itration" << endl;
            cin >> x;
            play_maker(x);
            break;
        case 2:

            for (int i = 0; i < F1.size(); i++)
            {
                if (F1[i] >= 1 / (2 * uncertainty))
                {
                    n = i;
                    break;
                }
            }
            cout << "The num : " << n << endl;
            cal_l(l0, F1, k, n);
            break;
        case 3:
            cout << "Thank You" << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}