#pragma once
#ifndef SANPHAM_H
#define SANPHAM_H

#include <string>
#include <iostream>

class SanPham {
private:
    int maSanPham;
    std::string tenSanPham;
    double gia;
    int soLuongMua;
public:
    SanPham();
    SanPham(int ma, const std::string& ten, double gia);
    int getMaSanPham() const;
    std::string getTenSanPham() const;
    double getGia() const;
    int getSoLuong() const;
    void hienThiDanhSach() const;
    void setSoLuong(int sl);
    void setGia(double gia);
    double tinhTien() const;
    void hienThiThongTin() const;
    bool operator==(const SanPham& other) const;
    int timSanPham(int maSanPham) const;
    void setMaSanPham(int maSanPham);
    int getSoLuongMua() const { return soLuongMua; }
    void setSoLuongMua(int soLuong);
    void themSoLuong(int soLuongMua);
        // ...


};

#endif