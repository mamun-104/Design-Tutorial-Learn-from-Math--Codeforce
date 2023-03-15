#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;

    if(n%2==0)
    {
        x=4;
        y=n-4;
    }
    else
    {
        x=9;
        y=n-9;
    }
    cout<<x<<" "<<y;



    return 0;
}

