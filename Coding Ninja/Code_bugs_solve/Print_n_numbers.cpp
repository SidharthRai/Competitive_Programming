#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n>0)
    {
    n--;
    print(n);
    cout<< n+1<< " ";
    }
}

int main(){ print(1);}
