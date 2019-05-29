#include <cstdio>
#include <cstring>
#include<stack>
int main()
{
    std::stack<int> num;
    int a[10];
    int b[10];
    char c[21];
    bool co = true;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c,0,sizeof(c));
    int digit=0;
    int carry=0;
    scanf("%s",c);
    int rear=19;
    for(int i=rear;i>=0;--i){
        int temp = (int)c[i]-48;
        if(temp>=0){
            a[temp]++;
            temp=temp*2+carry;
            carry =temp/10;
            temp=temp%10;
            b[temp]++;
            num.push(temp);
        }

    }
    if(carry!=0){
        co=false;
        num.push(carry);
    }else{
        for(int i=1;i<10;++i){
            if(a[i]!=b[i]){
                co=false;
            }
        }
    }
    if(co){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    while(!num.empty()){
        printf("%d",num.top());
        num.pop();
    }
    return 0;
}
