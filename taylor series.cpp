#include<bits/stdc++.h>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    double r;

    if(n==0){
        return 1;
    }

    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
   int c,a;
   cin>>c>>a;
   double f=e(c,a);

   cout<<f;
   return 0;
}
