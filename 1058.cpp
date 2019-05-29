#include<cstdio>
int main(){
    int a,b,c;
    int e,f,g;
    scanf("%d.%d.%d",&a,&b,&c);
    scanf("%d.%d.%d",&e,&f,&g);
    int temp=0;
    temp=(c+g)/29;
    c=(c+g)%29;
    temp=(b+f+temp)/17;
    b=(b+f)%17;
    a=a+e+temp;
    printf("%d.%d.%d",a,b,c);

    return 0;
}