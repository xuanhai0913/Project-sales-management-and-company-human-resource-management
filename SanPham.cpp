#include "SanPham.h"
#include <iostream>

SanPham::SanPham(int id, const std::string& ten, double gia) : maSanPham(id), tenSanPham(ten), gia(gia) {}

SanPham::SanPham() : maSanPham(0), tenSanPham(""), gia(0.0), soLuongMua(0) {}

int SanPham::getMaSanPham() const {
    return maSanPham;
}

void SanPham::setMaSanPham(int maSanPham) {
    this->maSanPham = maSanPham;
}

double SanPham::getGia() const {
    return gia;
}

void SanPham::setGia(double gia) {
    this->gia = gia;
}

int SanPham::getSoLuong() const {
    return soLuongMua;
}

void SanPham::setSoLuong(int soLuong) {
    this->soLuongMua = soLuong;
}

double SanPham::tinhTien() const {
    return gia * soLuongMua;
}

void SanPham::hienThiThongTin() const {
    std::cout << "Ten san pham: " << tenSanPham << std::endl;
    std::cout << "Gia: " << gia << " VND" << std::endl;
}

bool SanPham::operator==(const SanPham& other) const {
    return this->maSanPham == other.maSanPham;
}

std::string SanPham::getTenSanPham() const {
    return tenSanPham;
}

void SanPham::setSoLuongMua(int soLuong) {
    this->soLuongMua = soLuong;
}
void SanPham::themSoLuong(int soLuongMua) {
    soLuongMua += soLuongMua;
}

