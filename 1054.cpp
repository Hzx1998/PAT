//hash 问题
#include<map>
#include<iostream>
using namespace std;
int main(){
    map<int,int> mp;
    int M,N;
    cin>>M>>N;
    int num=0;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin>>num;
            mp[num]+=1;
        }
    }
    int max=0;
    int mark=0;
    map<int,int>::iterator it=mp.begin();
    for(it=mp.begin();it!=mp.end();++it){
        if(it->second>max){
            max = it->second;
            mark = it->first;
        }
    }
    cout<<mark;
    return 0;
}