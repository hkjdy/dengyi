
package cn.hkjdy.game.dao;

import java.util.List;

import cn.hkjdy.game.model.Employee;

/**
 * @author dengyi
 * @date 2015年8月5日 下午5:24:44
 */
public interface EmployeeDao {
	Employee findById(int id);
	 
    void saveEmployee(Employee employee);
     
    void deleteEmployeeBySsn(String ssn);
     
    List<Employee> findAllEmployees();
 
    Employee findEmployeeBySsn(String ssn);
}

