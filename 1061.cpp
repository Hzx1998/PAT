//字母的范围  A-G和A-N

#include<iostream>
#include<string>
using namespace std;
int main(){
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string a,b,c,d;
    char mark[2];
    int m=0;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int i=0;
    while(i<a.length()&&i<b.length()){
        if(m==0){
            if(a[i]==b[i]&&a[i]>='A'&&a[i]<='G'){
                mark[m]=a[i];
                ++m;
            }
        }else if(m==1){
            if(a[i]==b[i]&&((a[i]>='A'&&a[i]<='N')||(a[i]>='0'&&a[i]<='9'))){
                mark[m]=a[i];
                ++m;
            }
        }
        if(m==2){
            break;
        }
        ++i;
    }
    int i0=0;
    int m0=0;
    while(i0<c.length()&&i0<d.length()){
        if(c[i0]==d[i0]&&(c[i0]>='a'&&c[i0]<='z'||c[i0]>='A'&&c[i0]<='Z')){
            m=i0;
            break;
        }
        ++i0;
    }
    cout<<week[mark[0]-65]<<" ";
    if(mark[1]>='0'&&mark[1]<='9'){
        cout<<"0"<<mark[1];
    }else{
        cout<<mark[1]-54;
    }
    cout<<":";
    if(m<10){
        cout<<"0"<<m;
    }else{
        cout<<m;
    }

    return 0;  
}