#include<bits/stdc++.h>
using namespace std;

int searchLinear(int arr[], int start, int end, int x){
    if(start > end)
        return -1;
    if(arr[start] == x)
        return start;
    if(arr[end] == x)
        return end;
    searchLinear(arr, start+1, end-1, x);
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int x = 4;

    cout<<searchLinear(arr, 0, size-1, x);
}
