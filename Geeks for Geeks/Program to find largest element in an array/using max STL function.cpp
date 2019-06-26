#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int size){
    return *max_element(arr, arr+size);
}

int smallest(int arr[], int size){
    return *min_element(arr, arr+size);
}

int main(){
    int arr[]={10,20,40,30,99,98,91,44};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,size)<<endl;
    cout<<smallest(arr,size)<<endl;

}

