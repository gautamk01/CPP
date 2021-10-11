#include <iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int second;

public:
    time()
    {
        this->hours = 0;
        this->minutes = 0;
        this->second = 0;
    }
    time(int h, int m, int s)
    {
        this->hours = h;
        this->minutes = m;
        this->second = s;
    }
    void display()
    {
        cout << hours << ":" << minutes << ":" << second << endl;
    }
    int set_hour(int hours)
    {
        this->hours = hours;
        return 0;
    }
    int set_Min(int minutes)
    {
        this->minutes = minutes;
        return 0;
    }
    int set_Sec(int second)
    {
        this->second = second;
        return 0;
    }
    int get_hour()
    {
        return hours;
    }
    int get_min()
    {
        return minutes;
    }
    int get_sec()
    {
        return second;
    }
    time add(time T1, time T2)
    {
        time temp;
        temp.hours = T1.get_hour() + T2.get_hour();
        if (temp.hours > 23)
        {
            temp.hours -= 24;
        }
        temp.minutes = T1.get_min() + T2.get_min();
        if (temp.minutes > 59)
        {
            temp.minutes -= 60;
        }
        temp.second = T1.get_sec() + T2.get_sec();
        if (temp.second > 59)
        {
            temp.second -= 60;
        }
        return temp;
    };
};
int main()
{
    time T1(12, 3, 7);
    time T2(11, 2, 1);
    time T3 = T3.add(T1, T2);

    cout << "Time 1 ->";
    T1.display();
    cout << "\nTime 2 ->";
    T2.display();
    cout << "\nTime 3 ->";
    T3.display();

    return 0;
}