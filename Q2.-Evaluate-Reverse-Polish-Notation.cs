public class Solution {
    public int EvalRPN(string[] tokens) {
        Stack<int> st = new Stack<int>();
        foreach(var t in tokens){
            if(t == "-" || t == "+" || t == "*" || t == "/")
            {
                int n1 = st.Pop();
                int n2 = st.Pop();
                int result = _performOperation(n2,n1,t);
                st.Push(result);
                continue;
            }
            st.Push(Int32.Parse(t));

            
        }
        return st.Pop();

    }

    private int _performOperation(int a, int b, string op){
        int result=0;
        switch(op){
            case "*":
                result=a*b;
                break;
            case "-":
                result=a-b;
                break;
            case "+":
                result=a+b;
                break;
            default:
                result=a/b;
                break;
            
        }
        return result;
    }
}