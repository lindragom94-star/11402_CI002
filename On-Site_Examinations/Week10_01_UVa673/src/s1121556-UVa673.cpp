#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main(){
  stack<char> c;
  string s;
  char a;
  bool flag;
  int N;
  cin>>N;
  for(int i=1;i<=N;i++){
    cin>>s;
    for(int j=0;j<s.size();j++){
      if(s[j]=='(' || s[j]=='['){
        c.push(s[j]);
      }
      if(s==""){
        flag=true;
        break;
      }
      if(s[j]==')'){
        if(c.empty()==true){
          flag=false;
          break;
        }
        if(c.top()=='('){
          flag=true;
          c.pop();
        }
        else{
          flag=false;
          c.pop();
          break;
        }
      }
      if(s[j]==']'){
        if(c.empty()==true){
          flag=false;
          break;
        }
        if(c.top()=='['){
          flag=true;
          c.pop();
        }
        else{
          flag=false;
          c.pop();
          break;
        }
      }
    }
    if(flag==true){
      cout<<"Yes"<<endl;
    }
    if(flag==false){
      cout<<"No"<<endl;
    }
  }
}
