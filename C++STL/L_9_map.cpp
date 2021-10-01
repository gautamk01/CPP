#include <iostream>
#include <map>
using namespace std;

void print(map<int, string> &m)
{
    cout << endl;
    cout << "The size of Map -> " << m.size() << endl;
    for (auto &mp : m)
    {
        cout << mp.first << " " << mp.second << endl;
    }
}

int main()
{
    //map always store the value sorted order
    map<int, string> m1;
    m1[1] = "Gautam";
    m1[2] = "Java";
    m1[3] = "cpp";
    m1.insert({4, "rama"});
    m1[5]; //it has only one key

    //one way to print the map

    // map<int, string>::iterator it;
    // for (it = m1.begin(); it != m1.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    //another way to print map

    // for (auto &mp : m1)
    // {
    //     cout << mp.first << " " << mp.second << endl;
    // }

    //calling the function
    print(m1);

    //find in map
    //this is an itrator so we must call auto and also find function return an itrator
    cout << "\n\nFinding\n";
    auto itrat = m1.find(2);
    if (itrat == m1.end())
    {
        cout << "Sorry we couldn't find the value ";
    }
    else
    {
        cout << (*itrat).first << " " << (*itrat).second << endl;
    }

    //to erase the item

    //for eraseing we have 2 input in that function
    //1.value
    //2.itrator
    cout << "\n\nErase\n";
    m1.erase(3);
    auto itrat2 = m1.find(3);
    if (itrat2 != m1.end())
    {
        m1.erase(itrat2);
        cout << "Deleted successfully" << endl;
    }
    else
    {
        cout << "sorry, the element is not fount !" << endl;
    }
    m1.clear();
    print(m1);
    return 0;
}