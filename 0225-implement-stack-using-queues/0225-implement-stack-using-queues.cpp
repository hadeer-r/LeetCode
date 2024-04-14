class MyStack
{
    queue<int> stk;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        stk.push(x);
    }

    int pop()
    {
        if (stk.empty())
            return 0;

        queue<int> temp;
        int top = stk.back();
        while (!stk.empty())
        {

            if (stk.front() == top)
            {
                stk.pop();
                continue;
            }
            temp.push(stk.front());

            stk.pop();
        }
        stk = temp;
        return top;
    }

    int top()
    {
        return stk.back();
    }

    bool empty()
    {
        return stk.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */