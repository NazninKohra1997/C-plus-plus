#include<bits/stdc++.h>
using namespace std;

int main(){
     int **A;
     A=new int*[3];

     A[0]=new int[2];
     A[1]=new int[2];
     A[2]=new int[2];

      for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
