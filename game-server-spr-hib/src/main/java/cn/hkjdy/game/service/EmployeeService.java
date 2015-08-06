
package cn.hkjdy.game.service;

import java.util.List;

import cn.hkjdy.game.model.Employee;

/**
 * @author dengyi
 * @date 2015年8月5日 下午5:34:14
 */
public interface EmployeeService {
	Employee findById(int id);
    
    void saveEmployee(Employee employee);
     
    void updateEmployee(Employee employee);
     
    void deleteEmployeeBySsn(String ssn);
 
    List<Employee> findAllEmployees(); 
     
    Employee findEmployeeBySsn(String ssn);
 
    boolean isEmployeeSsnUnique(Integer id, String ssn);
}

