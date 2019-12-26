#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cin >> input;
    vector<char> inp;

    for(unsigned int i=0;i<input.length();i++)
    {
        if(std::find(inp.begin(),inp.end(),input[i]) != inp.end())
        {
            continue;
        }else inp.push_back(input[i]);

    }

    if (inp.size()%2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }else cout << "IGNORE HIM!\n";
    return 0;
}
