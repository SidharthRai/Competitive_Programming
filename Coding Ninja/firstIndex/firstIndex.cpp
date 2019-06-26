#include<bits/stdc++.h>
using namespace std;

int firstIndex(int input[], int size, int x){
   if(size==0){
    return -1;
   }
   if(x == input[0]){
    return 0;
   }
   int occ = firstIndex(input+1, size-1, x);
   if(occ == -1){
    return -1;
   }
   else{
    return occ+1;
   }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    cout<<firstIndex(arr, n, x);
    return 0;
}
