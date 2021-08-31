#pragma once
#include"Ngay.h"


// Khai báo lớp cơ sở
class NhanVien : public NgaySinh 
{
protected:
    int maNV;
    string ho, tendem, ten;
    NgaySinh ngaysinh;
    bool check;
public:
    friend class CongTy; // class bạn với class CongTy
    NhanVien();  // Hàm khởi tạo 
    ~NhanVien();  // Hàm hủy
    virtual void Nhap(); // Hàm ảo - Nhập thông tin Nhân Viên
    virtual void Xuat(); // Hàm ảo - Xuất thông tin Nhân Viên
    virtual int TinhLuong() = 0; // Khai báo hàm Thuần ảo - Các lớp dẫn xuất kế thừa sẽ đi định nghĩa
    bool get_check(); // Hàm trả về dữ liệu
    void set_check(bool check); // Hàm cập nhập dữ liệu
    string get_Ten();  // Hàm trả về tên
    int get_MaNV();  // Hàm trả về mã

};


// Khai báo lớp dẫn xuất kế thừa từ lớp cơ sở
class NhanVienLapTrinh : public NhanVien
{
private:
    float luongcoban;
    float hesoluong;
public:
    NhanVienLapTrinh();  // Hàm khởi tạo 
    ~NhanVienLapTrinh(); // Hàm hủy
    void Nhap();
    int TinhLuong();

};

// Khai báo lớp dẫn xuất kế thừa từ lớp cơ sở
class NhanVienThietKe : public NhanVien 
{
private:
    int sosanpham;
public:
    NhanVienThietKe(); // Hàm khởi tạo 
    ~NhanVienThietKe(); // Hàm hủy
    void Nhap();
    int TinhLuong();
};
