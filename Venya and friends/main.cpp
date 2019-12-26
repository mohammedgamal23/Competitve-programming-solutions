#include <iostream>

using namespace std;

int main()
{
    int n,h,index=0;
    cin >> n >> h;
    cout<<endl;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            index++;
        }
        else
        {
            index+=2;
        }
    }
    cout<< index <<endl;
    return 0;
}
