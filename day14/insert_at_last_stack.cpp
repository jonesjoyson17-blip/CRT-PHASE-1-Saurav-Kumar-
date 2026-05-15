#include <iostream>
#include <stack>
using namespace std;

// insert element at bottom (last)
void insertAtLast(stack<int>& st, int x) {

    // base case
    if(st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    // recursive call
    insertAtLast(st, x);

    // restore elements
    st.push(temp);
}

// display stack
void display(stack<int> st) {

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
}

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Original Stack: ";
    display(st);

    insertAtLast(st, 5);

    cout << "After Inserting at Last: ";
    display(st);

    return 0;
}