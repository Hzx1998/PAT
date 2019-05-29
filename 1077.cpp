#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    string a,b;
    getline(cin,a);
    reverse(a.begin(),a.end());
    for(int i=0;i<n-1;++i){
         getline(cin,b);
         reverse(b.begin(),b.end());
         int j=1;
         cout<<a<<endl;
         cout<<b<<endl;
         while(a.substr(0,j)==b.substr(0,j)){
            ++j;
         }
         a=a.substr(0,j-1);
    }
    if(a==""){
        cout<<"nai";
    }else{
        reverse(a.begin(),a.end());
        cout<<a;
    }
    return 0;
}