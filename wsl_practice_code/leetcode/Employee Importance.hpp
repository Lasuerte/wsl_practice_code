#include "common.h"

namespace EmployeeImportance{
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};


class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {     
        for_each(employees.begin(), employees.end(), [&](Employee* em) {
            employeeIdx.insert({ em->id, em });
        });
        return getImpSub(id);
    }
    int getImpSub(int id)
    {
        int ans = 0;
        auto mrX = employeeIdx[id];
        ans += mrX->importance;
        for (auto itr : mrX->subordinates)
        {
            ans += getImpSub(itr);
        }
        return ans;
    }
    map<int, Employee*> employeeIdx;
};
}