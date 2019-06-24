#include<bits/stdc++.h>
using namespace std;

int power(int num, int exponent){
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return num;
    exponent--;
    return num * power (num, exponent);}

int main(){
    freopen("powerin.txt","r",stdin);
    freopen("powerout.txt","w",stdout);

    int num;
    cin>>num;
    int exponent;
    cin>>exponent;

    cout<<power(num, exponent);}
