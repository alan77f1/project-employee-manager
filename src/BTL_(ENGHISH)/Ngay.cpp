#pragma once
#include"Ngay.h"
#include"DoHoa.h"
#include"Menu.h"
NgaySinh::NgaySinh() // Hàm khởi tạo
{
    this->Ngay = 25;
    this->Thang = 8;
    this->Nam = 2001;
}
NgaySinh::~NgaySinh()  // Hàm hủy
{

}
int NgaySinh::get_NamSinh()  // Hàm trả về năm sinh
{
    return Nam;
}
void NgaySinh::Nhap()
{

    do {
        gotoxy(79, 14);
        cout << "";
        cin >> Ngay;
        gotoxy(81, 14);
        cout << "/";
        if (Ngay > 31)
        {
            Frame_Error2();            
        }
    } while (Ngay > 31);

    do {
        gotoxy(82, 14);
        cout << "";
        cin >> Thang;
        gotoxy(84, 14);
        cout << "/";
        if (Thang > 12)
        {
            Frame_Error2();           
        }
    } while (Thang > 12);

    do {
        gotoxy(85, 14);
        cout << "";
        cin >> Nam;
        if (Nam > 2020)
        {
            Frame_Error2();           
        }
    } while (Nam > 2020);

}
void NgaySinh::Xuat()
{
    cout << Ngay << "/" << Thang << "/" << Nam;
}