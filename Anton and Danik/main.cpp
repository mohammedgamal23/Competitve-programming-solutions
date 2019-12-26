#include <iostream>

using namespace std;

int main()
{
    char who;
    string friendship="Friendship";
    int n, danik=0, anton = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>who;
        if(who=='A')
        {
            anton++;
        }
        else if (who =='D')
        {
            danik++;
        }
    }
    if(anton>danik)
    {
        cout<< "Anton\n";
    }
    else if (danik>anton)
    {
        cout<< "Danik\n";
    }
    else {
        cout << friendship;
    }
    return 0;
}
