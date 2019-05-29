#include<iostream>
#include<cstring>
#include<cstdio>
//字符串长度是个坑  尽量超过10
using namespace std;
int main(){
    int a[130];
    char s1[10010];
    char s2[10010];
    fgets(s1,10010,stdin);
    fgets(s2,10010,stdin);
    int j=0;
    while(j<strlen(s2)){
        a[(int)s2[j]]=1;
        j++;
    }
        int k=0;
    while(k<strlen(s1)){
        if(a[(int)(s1[k])]==0){
            cout<<s1[k];
        }
        ++k;
    }
    return 0;
}