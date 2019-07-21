#include<bits/stdc++.h>
#define N 2
using namespace std;



int multiply(int arr1[][N], int  arr2[][N], int result[][N]){

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            result[i][j] = 0;
            for(int k=0; k<N; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main(){
    int result[N][N];
    int arr1[N][N]={{1,1},
                   {1,2}};
    int arr2[N][N]={{2,1},
                   {1,2}};

    multiply(arr1, arr2, result);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<result[i][j]<<" ";
        }cout<<endl;
    }
}
