
package cn.hkjdy.game.dao;

import java.util.List;

import org.hibernate.Criteria;
import org.hibernate.Query;
import org.hibernate.criterion.Restrictions;
import org.springframework.stereotype.Repository;

import cn.hkjdy.game.model.Employee;

/**
 * @author dengyi
 * @date 2015年8月5日 下午5:30:35
 */

@Repository("employeeDao")
public class EmployeeDaoImpl extends AbstractDao<Integer, Employee> implements
		EmployeeDao {

	@Override
	public Employee findById(int id) {
		// TODO Auto-generated method stub
		return getByKey(id);
	}

	@Override
	public void saveEmployee(Employee employee) {
		// TODO Auto-generated method stub
		System.out.println("dao save =======" + employee);
		persist(employee);
	}

	@Override
	public void deleteEmployeeBySsn(String ssn) {
		// TODO Auto-generated method stub
		Query query = getSession().createSQLQuery("delete from EMPLOYEE where ssn = :ssn");
		System.out.println("delete Employee by ssn :" + query+":" + ssn + ":" + getSession());
        query.setString("ssn", ssn);
        query.executeUpdate();
	}

	@Override
	@SuppressWarnings("unchecked")
	public List<Employee> findAllEmployees() {
		// TODO Auto-generated method stub
		Criteria criteria = createEntityCriteria();
        return (List<Employee>) criteria.list();
	}

	@Override
	public Employee findEmployeeBySsn(String ssn) {
		// TODO Auto-generated method stub
		Criteria criteria = createEntityCriteria();
        criteria.add(Restrictions.eq("ssn", ssn));
        return (Employee) criteria.uniqueResult();
	}
}

