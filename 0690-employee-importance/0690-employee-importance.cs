/*
// Definition for Employee.
class Employee {
    public int id;
    public int importance;
    public IList<int> subordinates;
}
*/

class Solution {
    Dictionary<int,Employee> id_to_emp=new Dictionary<int,Employee> ();
    
    private int DFS(int id){
        Employee emp = id_to_emp[id];
        int result=emp.importance;
        foreach(var sId in emp.subordinates){
            result+=DFS(sId);
        }
        return result;
    }
    public int GetImportance(IList<Employee> employees, int id) {
        for(int i=0;i<employees.Count;i++){
            id_to_emp.Add(employees[i].id,employees[i]);
        }
        
        return DFS(id);
    }
}