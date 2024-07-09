#pragma once
#include <string>

class NhanVien {
public:
    NhanVien(const std::string& ten, int tuoi);

    std::string getTen() const;
    int getTuoi() const;

    void hienThiThongTin() const;

private:
    std::string tenNhanVien;
    int tuoiNhanVien;
};
