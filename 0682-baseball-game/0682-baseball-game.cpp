class Solution
{
public:
    int covert_num(string str)
    {
        int num{};
        int i = (str[0] == '-');
        for (; i < (int)str.size(); i++)
        {
            num = num * 10 + (str[i] - '0');
        }
        if (str[0] == '-')
            num *= -1;
        return num;
    }
    int calPoints(vector<string> &operations)
    {
        int total_score{};
        stack<int> scores;
        for (int i = 0; i < (int)operations.size(); i++)
        {
            if (isdigit(operations[i][0])||isdigit(operations[i][1]))
            {
                int num=covert_num(operations[i]);
                total_score += num;
                scores.push(num);
            }

            else if (operations[i][0] == '+')
            {
                int temp = scores.top();
                scores.pop();
                int new_s = temp + scores.top();
                scores.push(temp);
                scores.push(new_s);
                total_score += scores.top();
            }
            else if (operations[i][0] == 'D')
            {
                int new_s = 2 * scores.top();
                scores.push(new_s);
                total_score += scores.top();
            }

            else if (operations[i][0] == 'C')
            {
                total_score -= scores.top();
                scores.pop();
            }
            cout << total_score << "\n";
        }
        return total_score;
    }
};