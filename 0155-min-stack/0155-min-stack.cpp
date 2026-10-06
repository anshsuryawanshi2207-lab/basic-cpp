class MinStack {
public:
    stack<int> st;
    stack<int> mn;

    void push(int val) {
        st.push(val);

        if (mn.empty() || val <= mn.top())
            mn.push(val);
    }

    void pop() {
        if (st.empty())
            return;

        if (st.top() == mn.top())
            mn.pop();

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return mn.top();
    }
};