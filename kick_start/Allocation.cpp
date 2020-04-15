#include<iostream>
using namespace std;
int main(void){
    int t,n,B,max=0,m=0,c=1;
    cin>>t;
     for(int j=1;j<=t;j++){
        //int p=t;
        cin>>n>>B;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        max=a[0];
        for(int i=0;i<n;i++){
            if(max<B){
                max+=a[i+1];
                c=c+1;
            }
            if(max>=B){
                m+=a[i];
                max=m;
                c=c-1;
            }
        }
        cout<<"Case #"<<j<<":"<<c-1;
    }
}
