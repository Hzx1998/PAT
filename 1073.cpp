#include<iostream>
#include<string>
using namespace std;
int main(){
    string temp;
    cin>>temp;
    int a=temp.find(".");
    string substr1(temp,1,a-1);
    int b=temp.find("E");
    string substr2(temp,a+1,b-a-1);
    int c=temp.length();
    string substr3(temp,b+2,c-b-2);
    int sum=0;
    for(int i=0;i<substr3.length();++i){
        sum*=10;
        sum=sum+(int)substr3[i]-48;
    }
    if(temp[0]=='-'){
        cout<<'-';
    }
    if(temp[b+1]=='+'){
        if(sum>=substr2.length()){
            cout<<substr1+substr2+string(sum-substr2.length(),'0');
        }else{
            string substr4=substr1+substr2;
            substr4.insert(sum+1,1,'.');
            cout<<substr4;
        }
    }else{
        if(sum>substr1.length()){

            cout<<"0."+string(sum-substr1.length(),'0')+substr1+substr2;
        }
        else if (sum==substr1.length())
        {
            cout<<"0."+substr1+substr2;
        }
        else
        {
            string substr5=substr1+substr2;
            substr5.insert(substr1.length()-sum,1,'.');
            cout<<substr5;
        }
            
    }
    return 0;
}