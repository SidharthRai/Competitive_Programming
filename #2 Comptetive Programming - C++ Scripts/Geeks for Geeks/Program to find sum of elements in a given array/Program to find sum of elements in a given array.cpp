#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum+= arr[i];
    }
    return sum;
}

int main()
{
	int arr[] = {10,11,12,13};
	int size = sizeof(arr)/sizeof(arr[0]);

    cout<<sum(arr,size);
}
