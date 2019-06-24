#include<bits/stdc++.h>
using namespace std;

long int power(int num, int exponent){
    long int temp;
    if(exponent == 0){
        return 1;
    }
    temp = power(num, exponent/2);
    if(exponent%2 == 0)
        return temp*temp;
    else
        return num*temp*temp;
}

int main(){
    freopen("powerin.txt","r",stdin);
    freopen("powerout.txt","w",stdout);

    int num;
    cin>>num;
    int exponent;
    cin>>exponent;

    cout<<power(num, exponent);
    }
