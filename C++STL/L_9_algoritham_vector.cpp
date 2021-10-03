#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void print_v(vector<int> temp)
{
    for (int i : temp)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    print_v(v);
    int min = *min_element(v.begin(), v.end());
    cout << "The Minimum element : " << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << "The Maximum element : " << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0); //this is algorithm that is used to sum all element in vector we need starting point ending point and initial sum
    cout << "Sum : " << sum << endl;
    int ct = count(v.begin(), v.end(), 3); //This is will count how many 3 are there in vector v
    cout << "The count values  are : " << ct << endl;
    auto ele = find(v.begin(), v.end(), 2); //This is an itrator that why i use auto as datatype
    if (ele != v.end())
    {
        cout << "The element that is found " << *ele << endl;
    }
    else
    {
        cout << "The element is not found" << endl;
    }
    cout << "Reversing the element : " << endl;
    reverse(v.begin(), v.end());
    print_v(v);
    cout << "reversing a string example" << endl;
    string s = "Gautam krishna.M";
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}