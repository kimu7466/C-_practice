n = int(input("enter a number : "))

for i in range(1, n+1) :
    for j in range(1, i+1) :
        if j==1 or j==i :
            print("*", end=" ")
        else :
            print("#", end=" ")
    print()



"""


SELECT dept.department_name, emp.employee_name, emp.salary
FROM employees emp  -- 'emp' is an alias for the 'employees' table
JOIN (
    SELECT department_id, MAX(salary) AS max_salary
    FROM employees
    GROUP BY department_id
) max_salaries ON emp.department_id = max_salaries.department_id AND emp.salary = max_salaries.max_salary  -- 'max_salaries' is an alias for the subquery result
JOIN departments dept ON emp.department_id = dept.department_id;  -- 'dept' is an alias for the 'departments' table


"""