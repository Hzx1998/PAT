//相加产生越界  所以把相加换成减
#include <iostream>

using namespace std;
int main() {
   int n;
   long long a,b,c;
   cin>>n;
   int boo[n];
   for(int i=0;i<n;++i)
   {
     cin>>a;
     cin>>b;
     cin>>c;
     if(c-a<b){
       boo[i]=0;
     }else{
       boo[i]=1;
     }
    
   }
    for(int j=0;j<n;++j)
    {
      cout<<"Case #"<<j+1<<":";
      if(boo[j]){
           cout<<"true"<<endl;
      }else{
           cout<<"false"<<endl;
      }
    }
      
   return 0;
}