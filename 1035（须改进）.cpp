#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    int N;
    cin>>N;
    string name[N];
    string pwd[N];
    queue<int> q;
    for(int i=0;i<N;++i){
        cin>>name[i];
        cin>>pwd[i];
        bool co=false;
        while(pwd[i].find('0')!=-1){
            co=true;
            pwd[i].replace(pwd[i].find('0'),1,"%");
        }
        while(pwd[i].find('O')!=-1){
            co=true;
            pwd[i].replace(pwd[i].find('O'),1,"o");
        }
        while(pwd[i].find('l')!=-1){
            co=true;
            pwd[i].replace(pwd[i].find('l'),1,"L");
        }
        while(pwd[i].find('1')!=-1){
            co=true;
            pwd[i].replace(pwd[i].find('1'),1,"@");
        }
        if(co){
            q.push(i);
        }
    }
    if(q.empty()){
        if(N==1){
            cout<<"There is 1 accounts and no account is modified";
        }else{
            cout<<"There are "<<N<<" accounts and no account is modified";
        }
    }else{
        cout<<q.size()<<endl;
        while(!q.empty()){
            cout<<name[q.front()]<<" "<<pwd[q.front()]<<endl;
            q.pop();
        }
    }
    return 0;
}