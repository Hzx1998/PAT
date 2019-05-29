#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N];
    int mark=-1;
    int b[10002];
    memset(b,0,sizeof(b));
    for(int i=0;i<N;++i){
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0;i<N;++i){
        if(b[a[i]]==1){
            mark=i;
            break;
        }
    }
    if(mark==-1){
        cout<<"None";
    }else{
        cout<<a[mark];
    }
    return 0;
}