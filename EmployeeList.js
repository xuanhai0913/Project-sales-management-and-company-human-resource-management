import React, { useState } from 'react';

const EmployeeList = () => {
  const [employees, setEmployees] = useState([]);
  const [employee, setEmployee] = useState({ name: '', age: '' });

  const addEmployee = () => {
    setEmployees([...employees, employee]);
    setEmployee({ name: '', age: '' });
  };

  const handleChange = (e) => {
    const { name, value } = e.target;
    setEmployee({ ...employee, [name]: value });
  };

  return (
    <div>
      <h2>Employee List</h2>
      <input type="text" name="name" placeholder="Name" value={employee.name} onChange={handleChange} />
      <input type="number" name="age" placeholder="Age" value={employee.age} onChange={handleChange} />
      <button onClick={addEmployee}>Add Employee</button>
      <ul>
        {employees.map((e, index) => (
          <li key={index}>
            {e.name} - {e.age} years old
          </li>
        ))}
      </ul>
    </div>
  );
};

export default EmployeeList;
