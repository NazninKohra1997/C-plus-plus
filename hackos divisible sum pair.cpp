#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int a[n];

    int sum=0;
    int i;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j] && (a[i]+a[j])%k==0){
            sum+=1;
        }
        }
    }


cout<<sum;
return 0;
}
