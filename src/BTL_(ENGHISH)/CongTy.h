#pragma once
#include"Ngay.h"
#include"NhanVien.h"
#include<vector>


// class Công Ty
class CongTy {
private:
    vector<NhanVien*>ds_nhanvien;  // Khai báo 1 vector chứa lớp cơ sở - Vì lớp cơ sở có Virtual nên nó sẽ đa hình sang từng lớp dẫn xuất tương ứng
public:
    CongTy(); // Hàm khởi tạo
    ~CongTy(); // Hàm hủy
    void Nhap();   // Hàm nhập thông tin nhân viên
    void XuatDanhSach();   // Hàm xuất danh sách nhân viên
    int TinhTongLuong();  // // Hàm tính Tổng lương của tất cả nhân viên
    void Tim_Min_Luong();  // Hàm tìm lương thấp nhất
    void Tim_Max_Luong();  // Hàm tìm lương cao nhất


    void SelectionSort_Ma();  // Hàm sắp xếp chọn trực tiếp theo mã 
    void SelectionSort_Ten();   // Hàm sắp xếp chọn trực tiếp theo tên
    void SelectionSort_NamSinh();   // Hàm sắp xếp chọn trực tiếp theo năm sinh
    void SelectionSort_Luong();    // Hàm sắp xếp chọn trực tiếp theo lươn


    void BubbleSort_Ma();  //  Hàm sắp xếp nổi bọt theo mã
    void BubbleSort_Ten();   // Hàm sắp xếp nổi bọt theo tên 
    void BubbleSort_NamSinh(); // Hàm sắp xếp nổi bọt theo năm sinh
    void BubbleSort_Luong();   // Hàm sắp xếp nổi bọt theo lương


    void Search_Ma();  // Hàm tìm kiếm theo mã
    void Search_Ten();   // Hàm tìm kiếm theo tên
    void Search_NamSinh();  // Hàm tìm kiếm theo năm sinh
    void Search_Luong();   // Hàm tìm kiếm theo lương


    void Edit_Ma();   // Hàm thay đổi thông tin nhân viên dựa vào mã
    void Edit_Ten();   // Hàm thay đổi thông tin nhân viên dựa vào tên


    void Delete_Ma();  // Hàm xóa thông tin nhân viên dựa vào mã
    void Delete_Ten();   // Hàm xóa đổi thông tin nhân viên dựa vào tên




};

