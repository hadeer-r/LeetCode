/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    void dfs(vector<Employee*> employees,int id ,int& sum,map<int,int> &IDs)
    {
        sum+=employees[IDs[id]]->importance;
        for(auto emp_id : employees[IDs[id]]->subordinates){
            dfs(employees,emp_id,sum,IDs);
        }
    }
    int getImportance(vector<Employee*> employees, int id) {

        // fill hashtable
        map<int,int> IDs;
        for(int i=0;i<(int)employees.size();++i){
            IDs[employees[i]->id]=i;
        }
        int sum=0;

        dfs(employees,id,sum,IDs);
        return sum;
    }
};