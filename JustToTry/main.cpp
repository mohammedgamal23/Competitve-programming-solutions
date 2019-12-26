#include <bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    string number;
    stringstream s;
    int count = 0;
    while (s >> number)
    {
        a[count] = atoi(number);
        count++;
    }
    return 0;
}
