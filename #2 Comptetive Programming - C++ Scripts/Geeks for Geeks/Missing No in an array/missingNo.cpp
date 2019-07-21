#include<bits/stdc++.h>
using namespace std;

int missingNo(int arr[], int size){

    for(int i=1; i<=(size); i++){
        if(i != arr[i]){
            return (i);
        }
    }
}

int main(){

    freopen("misin.txt","r",stdin);
    freopen("misout.txt","w",stdout);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int size;
        cin>>size;
        size--;
        int arr[size];
        for(int j=0; j<size; j++){
            cin>>arr[j];
        }
        cout<<missingNo(arr, size)<<endl;
    }
}
