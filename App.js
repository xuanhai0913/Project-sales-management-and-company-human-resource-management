import React from 'react';
import ProductList from './components/ProductList';
import EmployeeList from './components/EmployeeList';

const App = () => {
  return (
    <div>
      <h1>Company Management System</h1>
      <ProductList />
      <EmployeeList />
    </div>
  );
};

export default App;
