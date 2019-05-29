#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[4]{0};
    int Num;
    cin>>Num;
    for(int i=3;i>-1;--i){
        a[i]=Num%10;
        Num/=10;
    }
    int n=0;
    if(n==6174){
        cout<<"7641 - 1467 = 6174";
    }
    while(n!=6174){
       sort(a,a+4);
       cout<<a[3]<<a[2]<<a[1]<<a[0]<<" "<<"-"<<" "<<a[0]<<a[1]<<a[2]<<a[3]<<" "<<"="<<" ";
       n=(a[3]*1000+a[2]*100+a[1]*10+a[0])-(a[0]*1000+a[1]*100+a[2]*10+a[3]);
       a[0]=n/1000;
       a[1]=n%1000/100;
       a[2]=n%100/10;
       a[3]=n%10;
       cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
       if(n==0){
           break;
       }
    }
    return 0;
}