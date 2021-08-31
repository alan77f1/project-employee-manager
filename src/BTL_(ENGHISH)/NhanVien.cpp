#include<string>
#include <iomanip>
#include"NhanVien.h"
#include"DoHoa.h"
#include"Menu.h"

// Hàm khởi tạo
NhanVien::NhanVien() 
{
    this->maNV = 0;
    this->ho = "";
    this->tendem = "";
    this->ten = "";
}
// Hàm Hủy
NhanVien::~NhanVien()
{

}
// Hàm trả về dữ liệu
bool NhanVien::get_check()
{
    return check;
}
// Hàm cập nhập dữ liệu
void NhanVien::set_check(bool check)
{
    this->check = check; 
}
// Hàm trả về họ tên
string NhanVien::get_Ten()
{
    return ten;
}
// Hàm trả về mã nhân viên
int NhanVien::get_MaNV()
{
    return maNV;
}
void NhanVien::Nhap()
{
    do {
        gotoxy(68, 10);
        cout << "Ma Nhan Vien: ";
        cin >> maNV;
        if (99999 > maNV || maNV >= 1000000 )
        {
            Frame_Error1();
        }
    } while (99999 >= maNV || maNV >= 1000000 );
    gotoxy(68, 12);
    cout << "Ho Va Ten: ";
    cin.ignore();
    gotoxy(79, 12);
   
    getline(cin, this->ho);  
    gotoxy(84, 12);
    
    getline(cin, this->tendem);
    gotoxy(89, 12);
   
    getline(cin, this->ten);
    gotoxy(68, 14);
    cout << "Ngay Sinh: "; this->ngaysinh.Nhap();
}
void NhanVien::Xuat()
{
    cout << " " << char(186) << "     " << maNV;
    cout << "     " << char(186) << "     " << ho << " " <<tendem << " " <<ten;
    cout << "      " << char(186) << "  "; ngaysinh.Xuat();

}

// class Nhân viên lập trình
NhanVienLapTrinh::NhanVienLapTrinh()
{
    this->luongcoban = 0;
    this->hesoluong = 0;
}
NhanVienLapTrinh::~NhanVienLapTrinh()
{

}
void NhanVienLapTrinh::Nhap()
{
    NhanVien::Nhap();
    do {
        gotoxy(68, 16);
        cout << "Luong Co Ban: ";
        cin >> luongcoban;
        if (luongcoban < 0) 
        {
            Frame_Error3();
        }
    } while (luongcoban < 0);
    do {
        gotoxy(68, 18);
        cout << "He So Luong: ";
        cin >> hesoluong;
        if (hesoluong < 0) 
        {
            Frame_Error4();
        }
    } while (hesoluong < 0);
}

int NhanVienLapTrinh::TinhLuong()
{
    return luongcoban * hesoluong;
}

// class Nhân viên thiết kế
NhanVienThietKe::NhanVienThietKe()
{
    this->sosanpham = 0;
}
NhanVienThietKe::~NhanVienThietKe()
{

}

void NhanVienThietKe::Nhap()
{
    NhanVien::Nhap();
    do {
        gotoxy(68, 16);
        cout << "So San Pham: ";
        cin >> sosanpham;
        if (sosanpham < 0) 
        {        
            Frame_Error3();
        }
    } while (sosanpham < 0);
}

int NhanVienThietKe::TinhLuong()
{
    return sosanpham * 50000;
}