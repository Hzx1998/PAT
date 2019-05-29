#include<iostream>
#include<cstring>
using namespace std;
void isPalindromic(int *a,int &n){
    int j=1;
    while(a[j]==a[n-j]&&j<=n/2){
        ++j;
    }
    --j;
    if(j==n/2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main(){
    int N,b;
    int a[31];
    memset(a,0,sizeof(a));
    cin>>N;
    cin>>b;
    int i=1;
    while(N!=0){
        a[i]=N%b;
        N=N/b;
        ++i;
    }
    isPalindromic(a,i);
    i=i-1;
    while(i>0){
        cout<<a[i];
        if(i!=1){
            cout<<" ";
        }
        --i;
    }
    return 0;
}