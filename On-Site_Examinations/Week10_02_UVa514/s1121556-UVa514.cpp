#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void solve() {
    int N;
    while (cin>>N) {
        if(N==0){
            break;
        }
        while (true) {
            vector<int> target(N);
            cin >> target[0];
            if (target[0] == 0){
                break;
            } 

            for (int i = 1; i < N; i++){
                cin >> target[i];
            }

            stack<int> station;
            int current_car = 1;
            bool possible = true;

            for (int i = 0; i < N; i++) {
                while (current_car <= N && (station.empty() || station.top() != target[i])) {
                    station.push(current_car);
                    current_car++;
                }

                if (station.empty()==false && station.top() == target[i]) {
                    station.pop(); 
                } 
                else {
                    possible = false;
                    break;
                }
            }

            if (possible){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
