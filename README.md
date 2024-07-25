# Project Overview

This repository contains two main components: a Personnel Management System and a Sales Management System, implemented in C++.

## Components

### Personnel Management System

CongTy Class (congty.cpp and CongTy.h): Represents a company and manages employees.

CongTy::hienThiThongTin(): Displays company information.

CongTy::themNhanVien(): Adds an employee to the company.

CongTy::hienThiDanhSachNhanVien(): Displays the list of employees.

NhanVien Class (NhanVien.h): Represents an employee.

NhanVien::getTen(): Retrieves the employee's name.

NhanVien::getTuoi(): Retrieves the employee's age.

NhanVien::hienThiThongTin(): Displays employee information.

### Sales Management System

SanPham Class (sanpham.cpp and SanPham.h): Represents a product and manages sales-related functionalities.

SanPham::getMaSanPham(), SanPham::setMaSanPham(): Retrieves and sets product ID.

SanPham::getGia(), SanPham::setGia(): Retrieves and sets product price.

SanPham::getSoLuong(), SanPham::setSoLuong(): Retrieves and sets quantity purchased.

SanPham::tinhTien(): Calculates total cost based on price and quantity.

SanPham::hienThiThongTin(): Displays product information.

SanPham::operator==(): Compares products based on ID.

SanPham::getTenSanPham(): Retrieves product name.

SanPham::setSoLuongMua(), SanPham::themSoLuong(): Manages quantity operations.

## Usage
### To use the Personnel Management System:
        // Example usage
            #include "CongTy.h"
            #include "NhanVien.h"
            #include <iostream>
            
            int main() {
                CongTy congTy("ABC Company");
            
                NhanVien nv1("John Doe", 30);
                NhanVien nv2("Jane Smith", 25);
            
                congTy.themNhanVien(nv1);
                congTy.themNhanVien(nv2);
            
                congTy.hienThiThongTin();
                congTy.hienThiDanhSachNhanVien();
            
                return 0;
            }
### To use the Sales Management System:

        // Example usage
        #include "SanPham.h"
        #include <iostream>
        
        int main() {
            SanPham sp1(1, "Laptop", 15000000);
            sp1.setSoLuong(2);
        
            std::cout << "Total cost: " << sp1.tinhTien() << " VND" << std::endl;
        
            return 0;
        }
# Notes
Ensure all necessary headers (CongTy.h, NhanVien.h, SanPham.h) are included in your project.
Modify and expand classes/functions as needed to suit specific requirements.
