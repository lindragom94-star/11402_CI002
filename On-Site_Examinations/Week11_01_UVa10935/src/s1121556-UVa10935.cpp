#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		if(n>50 || n<0){
			continue;
		}
		queue<int> q;
		vector<int> discarded;
		for(int i=1;i<=n;i++){
			q.push(i);
		}
		for(int j=1;j<n;j++){
			discarded.push_back(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		if(n==1){
			cout<<"Discarded cards:";
		}
		else{
			cout<<"Discarded cards: ";
		}
		for(int k=0;k<discarded.size();k++){
			if(k==(discarded.size()-1)){
				cout<<discarded[k];	
			}
			else{
				cout<<discarded[k]<<", ";
			}
		}
		cout<<endl;
		cout<<"Remaining card: ";
		cout<<q.front();
      	cout<<endl;
	}
}
