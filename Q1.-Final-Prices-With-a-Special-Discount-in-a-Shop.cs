1public class Solution {
2    public int[] FinalPrices(int[] prices) {
3        Stack<int> st = new Stack<int>();
4        int n = prices.Length;
5        int[] result = new int[n];
6        result[n-1]=prices[n-1];
7        st.Push(prices[n-1]);
8        for(int i=n-2;i>=0;i--){
9            if(st.Count>0 && prices[i]>=st.Peek()){
10                result[i]=prices[i]-st.Peek();
11                st.Push(prices[i]);
12            }
13            else {
14                // pop to the one who I greater or equal
15                while(st.Count>0 && st.Peek()>prices[i]){
16                    st.Pop();
17                }
18                if(st.Count>0){
19                    result[i]=prices[i]-st.Peek();
20                }
21                else result[i]=prices[i];
22                st.Push(prices[i]);
23            }
24        }
25        return result;
26    }
27}