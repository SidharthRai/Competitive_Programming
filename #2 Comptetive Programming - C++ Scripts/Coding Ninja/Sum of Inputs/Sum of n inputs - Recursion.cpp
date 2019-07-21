#include<bits/stdc++.h>
using namespace std;

int add = 0;

int sum(int input[], int n){
    if (n == 0){
        return add;
    }
    return (input[n-1] + sum(input, n-1));
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sum(arr, n);
    return 0;
}
