#include <iostream>

using namespace std;

int main()
{
    string s;
    int upper= 0, lower=0;
    cin >>s;
    for(unsigned int i=0; i<s.length();i++)
    {
        if(s[i] > 96 && s[i] <123) lower++;
        else if(s[i] >64 && s[i] <91) upper++;
    }
    if(lower > upper || lower == upper)
    {
        for(unsigned int i=0;i<s.length();i++)
        {
            if(isupper(s[i])) s[i] = s[i] +32;

            cout << s[i];
        }
    }else
    {
        for(unsigned int i=0;i<s.length();i++)
        {
            if(islower(s[i])) s[i] = s[i] -32;

            cout << s[i];
        }
    }

    return 0;
}
