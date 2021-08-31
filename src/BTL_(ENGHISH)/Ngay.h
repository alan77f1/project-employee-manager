#pragma once
#include<iostream>
using namespace std;
class NgaySinh
{
private:
    int Ngay, Thang, Nam;
public:
    NgaySinh(); // Hàm khởi tạo
    ~NgaySinh();  // Hàm hủy
    void Nhap();  
    void Xuat();
    int get_NamSinh(); // Hàm trả về năm sinh

};


