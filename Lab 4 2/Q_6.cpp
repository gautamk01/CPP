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
    //key value pair map
    //key = word, value = count

    //extract words and push in map
    istringstream wordStream(str);

    string word;
    //Extract each words and add to map
    //if it does not exist in map
    while (wordStream >> word)
    {
        v.push_back(word);
    }
}

int main()
{

    wordsCount("hello world gautam gautam hello");
    mapper();
    for (auto &mp : wordsMap)
    {
        cout << mp.first << " " << mp.second << endl;
    }
    return 0;
}
