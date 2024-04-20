struct Node
{
    int data{};
    int min{};
    Node *prev{};
    Node() {}
    Node(int data) : data(data) {}
    ~Node() { }
};

class MinStack
{
    Node *head{};

public:
    MinStack()
    {
    }
    MinStack(int val)
    {
        push(val);
    }

    void push(int val)
    {

        if (head==nullptr)
        {
            head = new Node(val);
            head->min = val;
            return;
        }
        int new_min{};
        if (val < head->min)
            new_min = val;
        else{
            new_min=head->min;
        }

        Node *temp = new Node(val);
        temp->prev=head;
        temp->min=new_min;
        head=temp;
    }

    void pop()
    {
        if (!head)
            return;
        Node *temp = head->prev;
        delete head;
        head=temp;
    }

    int top()
    {
        if (!head)
        {
            cout << "no head";
            return -1;
        }
        return head->data;
    }

    int getMin()
    {
        return head->min;
    }
    ~MinStack()
    {
        while (head)
        {
            Node *temp = head->prev;
            delete head;
            head = temp;
        }
    }
};