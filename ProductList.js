import React, { useState } from 'react';

const ProductList = () => {
  const [products, setProducts] = useState([]);
  const [product, setProduct] = useState({ id: '', name: '', price: 0, quantity: 0 });

  const addProduct = () => {
    setProducts([...products, product]);
    setProduct({ id: '', name: '', price: 0, quantity: 0 });
  };

  const handleChange = (e) => {
    const { name, value } = e.target;
    setProduct({ ...product, [name]: value });
  };

  return (
    <div>
      <h2>Product List</h2>
      <input type="text" name="id" placeholder="ID" value={product.id} onChange={handleChange} />
      <input type="text" name="name" placeholder="Name" value={product.name} onChange={handleChange} />
      <input type="number" name="price" placeholder="Price" value={product.price} onChange={handleChange} />
      <input type="number" name="quantity" placeholder="Quantity" value={product.quantity} onChange={handleChange} />
      <button onClick={addProduct}>Add Product</button>
      <ul>
        {products.map((p, index) => (
          <li key={index}>
            {p.id} - {p.name} - {p.price} VND - {p.quantity} units
          </li>
        ))}
      </ul>
    </div>
  );
};

export default ProductList;
