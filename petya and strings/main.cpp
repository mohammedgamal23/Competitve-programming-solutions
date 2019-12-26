#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a,b;
    int aS=0, bS=0;
    cin >>a;
    cin >>b;
    for (unsigned int i=0; i<a.length();i++)
    {
        if(isupper(a[i]) || isupper(b[i]))
        {
            a[i] = tolower(a[i]);
            b[i] = tolower(b[i]);
        }
        aS = aS + (int) a[i];
        bS = bS + (int) b[i];
        if(aS < bS)
        {
            cout << "-1";
            break;
        }
        else if (aS > bS)
        {
            cout << "1";
            break;
        }
    }
    if(aS == bS) cout << "0";

    return 0;
}
