#include <bits/stdc++.h> 
#define N 4 
using namespace std; 

//Subtraction of two Matrices

void AddMat(int A[][N], int B[][N], int C[][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            C[i][j]=A[i][j]+B[i][j];

        }
    }
}

int main(){
    int A[N][N] = { {1, 1, 1, 1},  
                    {2, 2, 2, 2},  
                    {3, 3, 3, 3},  
                    {4, 4, 4, 4}};  
  
    int B[N][N] = { {0, 1, 1, 1},  
                    {2, 0, 2, 2},  
                    {3, 3, 0, 3},  
                    {4, 4, 4, 0}}; 

    int C[N][N];
    int i,j;
    AddMat(A,B,C);
    cout<<"Result Matrix is :"<<endl;
    for (i = 0; i < N; i++)  
    {  
        for (j = 0; j < N; j++)  
        cout << C[i][j] << " ";  
        cout << endl;  
    }  
  
    return 0;  
                
}