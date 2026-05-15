#include<iostream>
using namespace std;
class stack{
    private:
    int arr[100];
    int top;
    public:

    stack(){
        top=-1;
    }
    void push(int val){
        if(top<99){
            top++;
            arr[top]=val;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow "<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }
    int size(){
        if(top>=0){
            return top+1;
        }else{
            cout<<"stack is empty "<<endl;
            return 0;
        }
    
    }
    bool isempty(){
        if(top<=-1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(45);
    s.push(6);
    s.push(56);
    s.push(25);
    cout<<"elements are pushed"<<endl;
    s.pop();
    cout<<"element is poped"<<endl;
    s.push(6);
    s.push(56);
    s.push(25);
    cout<<"elements are pushed"<<endl;
    cout<<"top element is: "<<s.peek()<<endl;
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"check for empty: "<<s.isempty()<<endl;
    return 0;
}