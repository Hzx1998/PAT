#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
    string c;
    cin>>c;
    int n=c.length();
    int n2=0;
    int k=0;
    if(n%3!=0){
        n2=n/3+n%3;
        k=(n-n2)/2;
    }else{
        n2=n/3+n%3+2;
        k=(n-n2)/2;
    }
    for(int j=0;j<k;++j){
        for(int r=0;r<n2;++r){
            if(r==0){
                printf("%c",c[j]);
            }else if(r==n2-1){
                printf("%c",c[n-j-1]);
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int j=k;j<k+n2;++j){
        printf("%c",c[j]);
    }
    return 0;
}