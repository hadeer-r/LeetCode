1public class Solution {
2    public int[] ExclusiveTime(int n, IList<string> logs) {
3        // init arr 
4        int[] result = new int[n];
5
6        Stack<int[]> st = new Stack<int[]>();
7        string[] entry = logs[logs.Count-1].Split(':');
8        int tUnits = Int32.Parse(entry[2]);
9        int log_idx=0;
10        for(int i =0;i<=tUnits;){
11            entry = logs[log_idx].Split(':');
12            int id = Int32.Parse(entry[0]);
13            int time = Int32.Parse(entry[2]);
14            if(entry[1][0]=='s'){
15                    if(st.Count>0) {
16                        result[st.Peek()[0]]+=time-i;
17                    }
18                i = time;
19                log_idx++;
20                st.Push(new int[]{id,time});
21            }
22            else{
23                int[] unit = st.Pop();
24                string[] prev_entry = logs[log_idx-1].Split(':'); 
25
26                if(prev_entry[1][0]=='e') {
27                    result[unit[0]] += time-Int32.Parse(prev_entry[2]) ; 
28                }
29
30                else {
31                    result[unit[0]] += time - unit[1]+1; 
32                }
33                log_idx++;
34                i=time+1;
35            }
36            
37        } 
38        return result;
39
40    }
41}