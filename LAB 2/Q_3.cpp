#include <iostream>
using namespace std;

class Counter
{
private:
    int count_value;

public:
    void init()
    {
        count_value = 0;
    };
    void count()
    {
        count_value++;
    };
    void dispaly()
    {
        cout << "counter value : " << count_value << endl;
    }
};

int main()
{
    Counter c1;
    c1.init();
    int x;
    do
    {
        cout << "1.count " << endl;
        cout << "2.display" << endl;
        cout << "3.stop" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            c1.count();
            break;
        case 2:
            c1.dispaly();
            break;
        case 3:
            cout << "Thank u" << endl;
            exit(0);
            break;

        default:
            cout << "Wrong choice";
            break;
        }
    } while (x != 3);
    return 0;
}