#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

void myfunction(int i)
{ // function:
    cout << ' ' << i + 5;
}
int findpos(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek)
            return i;
    }
    return -1;
}

int main()
{
    array<int, 14> marks = {20, 25, 25, 50, 40, 22, 25, 45, 42, 44, 33, 35, 44, 48};
    array<int, 14> mark2 = {30, 44, 35, 22, 38, 49, 33, 41, 44, 43, 25, 39, 33, 38};
    float min, max, avg;
    vector<int> v(30); // 0  0  0  0  0  0  0  0  0  0
    vector<int>::iterator it;
    /////////Q a and b/////////////
    cout << "Question a and b" << endl;
    if (
        all_of(marks.begin(), marks.end(), [](int i)
               { return i % 2; }))
        cout << "All the elements are odd numbers.\n";

    else
    {
        cout << "All are not odd numbers \n";
    }

    //////////Q c////////////
    cout << "Question c" << endl;
    if (all_of(marks.begin(), marks.end(), [](int i)
               { return i > 20; }))
        cout << "All the elements are greater than 20.\n";
    else
    {
        cout << "All are not greater than 20 \n";
    }

    /////////Q d////////////
    cout << "Question d" << endl;
    if (any_of(marks.begin(), marks.end(), [](int i)
               { return i == 50; }))
        cout << "Someone have got 50 marks.\n";

    else
    {
        cout << "Nobody got 50 \n";
    }

    /////////Q e////////////
    cout << "Question e" << endl;
    if (any_of(marks.begin(), marks.end(), [](int i)
               { return i < 0; }))
        cout << "Someone have got -ve marks.\n";

    else
    {
        cout << "Nobody got -ve marks \n";
    }
    //////////Q f////////////////
    cout << "Question f" << endl;
    for_each(marks.begin(), marks.end(), myfunction);
    cout << "\n";

    //////////Q g//////////////
    cout << "Question g" << endl;
    int seek = 44;
    for (int i = 0; i < 14; i++)
    {
        if (marks[i] == seek)
        {
            cout << i << '\n';
        }
    }
    ///////////Q h/////////////
    cout << "Question h" << endl;
    min = *min_element(marks.begin(), marks.end());
    max = *max_element(marks.begin(), marks.end());
    avg = (max + min) / 14;
    cout << "average is " << avg << endl;
    ////////////Q i//////////////
    cout << "Question i" << endl;
    sort(marks.begin(), marks.end());
    for (int i = 0; i < 14; i++)
    {
        cout << ' ' << marks[i];
    }
    cout << '\n';
    ///////////Q j/////////////
    cout << "Question j" << endl;
    for (int i = 0; i < 14; i++)
    {
        for (int j = 1; j < 14; j++)
        {
            cout << marks[i] << " - " << marks[j] << " " << marks[i] - marks[j] << '\n';
            break;
        }
    }
    /////////Q k/////////////
    cout << "Question k" << endl;
    it = set_union(marks.begin(), marks.end(), mark2.begin(), mark2.end(), v.begin());

    v.resize(it - v.begin());

    cout << "The union has " << (v.size()) << " elements:\n";
    for (it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    /////////Q l///////////////
    cout << "Question l" << endl;
    int myints[] = {1, 3, 2, 5};

    sort(myints, myints + 4);
    reverse(myints, myints + 4);

    cout << "The possible permutations :\n";
    do
    {
        cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' << myints[3] << '\n';
    } while (prev_permutation(myints, myints + 4));
    return 0;
}
