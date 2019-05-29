#include<iostream>
#include<queue>
using namespace std;
int main(){
/*    char a;
    char b;
    std::queue<int> q;
    char c[6]={'A','B','C'};
    for(int i=0;i<3;++i){
        a=getchar();
        b=getchar();
        getchar();
        int num1=(int)a;
        int num2=(int)b;
        if(num1>64){
            num1=num1-55;
        }else{
            num1=num1-48;
        }
        if(num2>64){
            num2=num2-55;
        }else{
            num2=num2-48;
        }
        int num=num1*13+num2;
        q.push(num);
    }
    printf("#");
    while(!q.empty()){
        int num=q.front();
        q.pop();
        int num1=num%16;
        int num2=num/16;
        
        if(num2<10){
            printf("%d",num2);
        }else{
            printf("%c",c[num2%10]);
        }
        if(num1<10){
            printf("%d",num1);
        }else{
            printf("%c",c[num1%10]);
        }
    }
    */
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    char m[3]={'A','B','C'};
    cout<<"#";
    for(int i=0;i<3;++i){
        int b=a[i]%13;
        int c=a[i]/13;
                if(c<10){
            cout<<c;
        }else
        {
            cout<<m[c%10];
        }
        if(b<10){
            cout<<b;
        }else
        {
            cout<<m[b%10];
        }

        
    }
    return 0;
}