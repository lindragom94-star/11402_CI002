#include <stack>
using namespace std;
class MyQueue {
public:
    stack<int> inStack;
    stack<int> outStack;
    MyQueue() {

    }
    
    void push(int x) {
        inStack.push(x);
    }

    void outStack_isEmpty(){
        while(inStack.empty()!=true){
            int a;
            a=inStack.top();
            inStack.pop();
            outStack.push(a);
        }
    }
    
    int pop() {
        if(outStack.empty()){
            outStack_isEmpty();
        }
        int b;
        b=outStack.top();
        outStack.pop();
        return b;
    }
    
    int peek() {
        if(outStack.empty()){
            outStack_isEmpty();
        }
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
