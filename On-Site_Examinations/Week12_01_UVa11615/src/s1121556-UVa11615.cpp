#include <iostream>
using namespace std;

int f(int n,int a,int b){
  //先找a在第幾層
  int c=1;
  int d,e;
  int f=0;
  for(int i=1;i<=a;i++){
    c=c*2;
    if((c-1)>=a){
      d=i;
      break;
    }
  }
  c=1;
  for(int j=1;j<=b;j++){
    c=c*2;
    if((c-1)>=b){
      e=j;
      break;
    }
  }
  if((d<e && e==n) || (e<d && d==n)){
    return 0;
  }
  if(d>=e){
    c=1;
    for(int k=1;k<=n-d;k++){
      c=c*2;
      f+=c;
    }
  }
  else{
    c=1;
    for(int k=1;k<=n-e;k++){
      c=c*2;
      f+=c;
    }
  }
  return f;
}
int main(){
  int t,n,a,b,total;
  int s;
  cin>>t;
  for(int i=1;i<=t;i++){
    cin>>n>>a>>b;
    total=1;
    for(int j=1;j<=n;j++){
      total=total*2;
    }
    total=total-1;
    s=f(n,a,b);
    cout<<total-s<<endl;
  }
}
