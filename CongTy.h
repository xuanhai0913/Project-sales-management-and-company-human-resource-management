#pragma once
#include <string>
#include <vector>
#include "NhanVien.h"

class CongTy {
private:
    std::string tenCongTy;
    std::vector<NhanVien> danhSachNhanVien;

public:
    CongTy(std::string tenCongTy);

    std::string getTenCongTy() const;

    void themNhanVien(const NhanVien& nhanVien);

    void hienThiThongTin() const;

    void hienThiDanhSachNhanVien() const;
};
