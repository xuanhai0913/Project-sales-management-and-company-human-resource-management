#include "NhanVien.h"
#include <iostream>

NhanVien::NhanVien(const std::string& ten, int tuoi) : tenNhanVien(ten), tuoiNhanVien(tuoi) {
}

std::string NhanVien::getTen() const {
    return tenNhanVien;
}

int NhanVien::getTuoi() const {
    return tuoiNhanVien;
}

void NhanVien::hienThiThongTin() const {
    std::cout << "Ten nhan vien: " << tenNhanVien << std::endl;
    std::cout << "Tuoi nhan vien: " << tuoiNhanVien << std::endl;
}
