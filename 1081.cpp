#include<iostream>
#include<cmath>
using namespace std;
typedef struct fraction{
    long int up;
    long int down;
}Fraction;
long int gcd(long int a,long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void addFraction(Fraction &a,Fraction &b){
    long int up=a.down*b.up+b.down*a.up;
    long int down=a.down*b.down;
    long int d=gcd(abs(up),abs(down));
    a.up=up/d;
    a.down=down/d;
}
int main(){
    int n;
    cin>>n;
    Fraction a,b;
    scanf("%ld/%ld",&a.up,&a.down);
    for(int i=0;i<n-1;++i){
        scanf("%ld/%ld",&b.up,&b.down);
        addFraction(a,b);
    }
    if(a.down==1){
        cout<<a.up;
    }else{
        if(a.up/a.down==0){
            cout<<a.up<<"/"<<a.down;
        }else{
            cout<<a.up/a.down<<" "<<abs(a.up%a.down)<<"/"<<a.down;
        }
    }

    return 0;
}