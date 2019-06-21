#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("mixin.txt","r",stdin);
    freopen("mixout.txt","w",stdout);

    int n,d;
    cin>>n>>d;
    int quotient = n/d;
    int remainder = n%d;
    if (remainder == 0)
    {
        cout<<quotient<<endl;
    }
    else
    {
        cout<<quotient<<" "<<remainder<<"/"<<d<<endl;
    }
    return 0;
}
