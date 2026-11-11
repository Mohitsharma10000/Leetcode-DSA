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
int dfs(vector<Employee*> employees, int id){
    int sum=0;
     for(int i=0;i<employees.size();i++){
            if(employees[i]->id==id){
                sum+=employees[i]->importance;
                for(auto it: employees[i]->subordinates){
                    sum+=dfs(employees,it);
                }
                break;
            }
        }
        return sum;
        
}
    int getImportance(vector<Employee*> employees, int id) {
        return dfs(employees,id);
       
    }
};