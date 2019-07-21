#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int size){
    int large = arr[0];
    for(int i=0; i<size; i++){
        if(large<arr[i])
            large = arr[i];
    }return large;
}

int main(){
    int arr[]={10,20,40,30,99,98,91,44};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,size);

}
