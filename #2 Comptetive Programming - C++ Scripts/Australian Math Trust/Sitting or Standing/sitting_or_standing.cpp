#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);

    int a, b;
    cin>>a>>b;
    int d = a*b;
    int c;
    cin>>c;
    if (d>=c)
    {
        cout<<c<<" "<<0<<endl;
    }
    else
    {
        cout<<d<<" "<<(c-d)<<endl;
    }

    return 0;
}

