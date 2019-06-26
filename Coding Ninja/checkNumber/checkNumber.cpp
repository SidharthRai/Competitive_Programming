 #include<bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x){
   if(input[size]==x){
    return true;
   }
   size--;
   checkNumber(input, size, x);
   if(size<0){
    return false;
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

    int y = checkNumber(arr, n, x);

    if(y==1){
        cout<<"true";
        return 0;
    }cout<<"false";
    return 0;
}
