#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int temp = n-1;
    for(int i=0; i<n; i++){

        for(int j = 0; j<= temp; j++){
            cout<<" ";
        }temp--;
        for(int j=0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    temp = 1;
    for (int i=0; i<n; i++){
        for(int j = 0; j< temp; j++){
            cout<<" ";
        }temp++;
        for(int j=0; j<2*((n-i)-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
