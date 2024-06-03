
class Solution {
public:
vector<int> replaceElements(vector<int> &arr)
{

    if ((int)arr.size() == 1)
    {
        arr[0] = -1;

        return arr;
    }
    int maxSoFar{}, greatest{};
    for (int i = (int)arr.size() - 2; i >= 0; i--)
    {
        maxSoFar = (greatest, arr[i]);
        greatest = max(maxSoFar, arr[i + 1]);
        arr[i] = greatest;
    }
    arr.push_back(-1);
    vector<int> result(arr.begin()+1,arr.end());
    return result;
}
    };