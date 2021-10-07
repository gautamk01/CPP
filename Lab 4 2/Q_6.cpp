#include <map>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
vector<string> v;
map<string, int> wordsMap;
void mapper()
{
    for (string i : v)
    {
        wordsMap[i] = count(v.begin(), v.end(), i);
    }
}

void wordsCount(string str)
{

    //spilte the string by white space
    istringstream wordStream(str);

    string word;

    while (wordStream >> word)
    {
        v.push_back(word);
    }
}

int main()
{

    wordsCount("Hello world This is amazing world");
    mapper();
    for (auto &mp : wordsMap)
    {
        cout << mp.first << " " << mp.second << endl;
    }
    return 0;
}
