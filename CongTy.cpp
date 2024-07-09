#include "CongTy.h"
#include "NhanVien.h"
#include <iostream>

CongTy::CongTy(std::string tenCongTy) : tenCongTy(tenCongTy) {}

void CongTy::hienThiThongTin() const {
    std::cout << "Ten cong ty: " << tenCongTy << std::endl;
    std::cout << "So luong nhan vien: " << danhSachNhanVien.size() << std::endl;
}

void CongTy::themNhanVien(const NhanVien& nhanVien) {
    danhSachNhanVien.push_back(nhanVien);
}

void CongTy::hienThiDanhSachNhanVien() const {
    std::cout << "Danh sach nhan vien:\n";
    for (const NhanVien& nv : danhSachNhanVien) {
        std::cout << "Ten: " << nv.getTen() << ", Tuoi: " << nv.getTuoi() << std::endl;
    }
}
