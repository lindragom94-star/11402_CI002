#include <stack>
#include <iostream>
#include <string>
using namespace std;
int main(){
  string s;
  char a;
  int N;
  cin>>N;
  cin.ignore();
  for(int i=1;i<=N;i++){
    stack<char> c;
    bool flag = true;
    getline(cin,s);
    if(s.size()==0){
        cout<<"Yes"<<endl;
        continue;
    }
    for(int j=0;j<s.size();j++){
      if(s[j]=='(' || s[j]=='['){
        c.push(s[j]);
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
    if(flag == true && c.empty() == true){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
}
