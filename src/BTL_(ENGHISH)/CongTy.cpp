#pragma once
#include"CongTy.h"
#include"Menu.h"
#include"NhanVien.h"
#include"DoHoa.h"
#include<string>
#include<algorithm>
#include <iomanip>

// Hàm khởi tạo
CongTy::CongTy()
{

}
// Hàm Hủy
CongTy::~CongTy()
{

}
void CongTy::Nhap()
{
     // Khai báo con trỏ 
    int Set[] = { 7, 7, 7 };
    int counter = 1; // Bước Nhảy
    char key;

    for (int i = 0; ;)
    {

        gotoxy(35, 7);
        color(Set[0]);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(35, 8);
        cout << char(219);

        cout << "   Nhan Vien Lap Trinh  " << char(219) << endl << endl;
        gotoxy(35, 9);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(35, 10);
        color(Set[1]);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(35, 11);
        cout << char(219);
        cout << "   Nhan Vien Thiet Ke   " << char(219) << endl << endl;
        gotoxy(35, 12);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;


        gotoxy(35, 13);
        color(Set[2]);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(35, 14);
        cout << char(219);

        cout << "         Thoat          " << char(219) << endl << endl;
        gotoxy(35, 15);
        cout << char(219);
        for (int i = 0; i < 24; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;


        key = _getch();


        if (key == 72 && (counter >= 2 && counter <= 3))
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 2))
        {
            counter++;
        }


        if (key == '\r')
        {
            NhanVien* x;
            if (counter == 1)
            {            
                system("color 56");
                Frame_Height1();
                Frame_Input();
                Frame_Width1();
                FrameN1();
                x = new NhanVienLapTrinh; // Dùng con trỏ để trỏ đến mảng danh sách nhân viên lập trình
                x->Nhap(); 
                x->set_check(true);  // tự định nghĩa nó là nhân viên lập trình (true)
                ds_nhanvien.push_back(x); // thêm nhân viên Lập trình vào cuối danh sách
                system("cls");
                system("color 56");
                Frame1();
                Frame2();

            }
            if (counter == 2)
            {
                system("color 56");
                Frame_Height1();
                Frame_Input();
                Frame_Width1();
                FrameN2();
                x = new NhanVienThietKe;  // Dùng con trỏ để trỏ đến mảng danh sách nhân viên thiết kế đang cấp phát
                x->Nhap();
                x->set_check(false);   // tự định nghĩa nó là nhân viên thiết kế (false)
                ds_nhanvien.push_back(x); // thêm nhân viên Thiết kế vào cuối danh sách
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
            }
            if (counter == 3)
            {
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                break;
            }

        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        if (counter == 1)
        {
            Set[0] = 86;
        }
        if (counter == 2)
        {
            Set[1] = 86;
        }
        if (counter == 3)
        {
            Set[2] = 86;
        }
    }
}


// Hàm xuất danh sách nhân viên
void CongTy::XuatDanhSach()
{
    Frame_Height1();
    Frame_List();
    Frame_Width1();
    Frame_Table();
    // Xuất danh sách nhân viên
    for (int i = 0; i < ds_nhanvien.size(); i++) {

        system("color 56");
        if (ds_nhanvien[i]->get_check() == true) {
            cout << setw(66) << right << char(186) << "  ";
            cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
            ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
            cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
            cout << setw(66) << right << char(200);

            for (int i = 0; i < 102; i++)
            {
                cout << char(205);
            }
            cout << char(188) << endl;
        }
        if (ds_nhanvien[i]->get_check() == false) {
            cout << setw(66) << right << char(186) << "  ";
            cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
            ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
            cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
            cout << setw(66) << right << char(200);
            for (int i = 0; i < 102; i++)
            {
                cout << char(205);
            }
            cout << char(188) << endl;
        }
    }
}

// Hàm tính Tổng lương của tất cả nhân viên
int CongTy::TinhTongLuong()
{
    int sum = 0;
    for (int i = 0; i < ds_nhanvien.size(); i++) {
        sum = sum + ds_nhanvien[i]->TinhLuong();
    }
    return sum;
}
// Hàm tìm lương thấp nhất
void CongTy::Tim_Min_Luong()
{
    Frame_Table();
    int temp = 0; // biến tạm thời
    int min = ds_nhanvien[0]->TinhLuong();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        system("color 56");
        if (ds_nhanvien[i]->TinhLuong() < min)
        {
            min = ds_nhanvien[i]->TinhLuong();
            temp = i;
        }
    }
    if (ds_nhanvien[temp]->get_check() == true) {
            cout << setw(66) << right << char(186) << "  ";
            cout << temp + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
            ds_nhanvien[temp]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
            cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[temp]->TinhLuong() << "     " << char(186) << endl;

            cout << setw(66) << right << char(200);

            for (int i = 0; i < 102; i++)
            {
                cout << char(205);
            }
            cout << char(188) << endl;
        }
        if (ds_nhanvien[temp]->get_check() == false) {
            cout << setw(66) << right << char(186) << "  ";
            cout << temp + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
            ds_nhanvien[temp]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
            cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[temp]->TinhLuong() << "     " << char(186) << endl;
            cout << setw(66) << right << char(200);
            for (int i = 0; i < 102; i++)
            {
                cout << char(205);
            }
            cout << char(188) << endl;
        }
}
// Hàm tìm lương cao nhất
void CongTy::Tim_Max_Luong()
{
    Frame_Table();
    int temp = 0;
    int max = ds_nhanvien[0]->TinhLuong();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        system("color 56");
        if (ds_nhanvien[i]->TinhLuong() > max)
        {
            max = ds_nhanvien[i]->TinhLuong();
            temp = i;
        }
    }
    if (ds_nhanvien[temp]->get_check() == true) {
        cout << setw(66) << right << char(186) << "  ";
        cout << temp + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
        ds_nhanvien[temp]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
        cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[temp]->TinhLuong() << "     " << char(186) << endl;
        cout << setw(66) << right << char(200);

        for (int i = 0; i < 102; i++)
        {
            cout << char(205);
        }
        cout << char(188) << endl;
    }
    if (ds_nhanvien[temp]->get_check() == false) {
        cout << setw(66) << right << char(186) << "  ";
        cout << temp + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
        ds_nhanvien[temp]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
        cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[temp]->TinhLuong() << "     " << char(186) << endl;
        cout << setw(66) << right << char(200);
        for (int i = 0; i < 102; i++)
        {
            cout << char(205);
        }
        cout << char(188) << endl;
    }

}

// Hàm sắp xếp chọn trực tiếp theo mã
void CongTy::SelectionSort_Ma()
{
    int min;
    for (int i = 0; i < ds_nhanvien.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < ds_nhanvien.size(); j++) {
            if (ds_nhanvien[j]->get_MaNV() < ds_nhanvien[min]->get_MaNV())
            {
                min = j;
            }
        }
        NhanVien* tg = ds_nhanvien[i];
        ds_nhanvien[i] = ds_nhanvien[min];
        ds_nhanvien[min] = tg;

    }
}
// Hàm sắp xếp chọn trực tiếp theo tên
void CongTy::SelectionSort_Ten()
{
    int min;
    for (int i = 0; i < ds_nhanvien.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < ds_nhanvien.size(); j++)
        {
            if (ds_nhanvien[j]->get_Ten() < ds_nhanvien[min]->get_Ten())
            {
                min = j;
            }
        }
        NhanVien* tg = ds_nhanvien[i];
        ds_nhanvien[i] = ds_nhanvien[min];
        ds_nhanvien[min] = tg;

    }
}
// Hàm sắp xếp chọn trực tiếp theo năm sinh
void CongTy::SelectionSort_NamSinh()
{
    int min;
    for (int i = 0; i < ds_nhanvien.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < ds_nhanvien.size(); j++)
        {
            if (ds_nhanvien[j]->get_NamSinh() < ds_nhanvien[min]->get_NamSinh())
            {
                min = j;
            }
        }
        NhanVien* tg = ds_nhanvien[i];
        ds_nhanvien[i] = ds_nhanvien[min];
        ds_nhanvien[min] = tg;

    }
}
// Hàm sắp xếp chọn trực tiếp theo lương
void CongTy::SelectionSort_Luong()
{
    int min;
    for (int i = 0; i < ds_nhanvien.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < ds_nhanvien.size(); j++)
        {
            if (ds_nhanvien[j]->TinhLuong() < ds_nhanvien[min]->TinhLuong())
            {
                min = j;
            }
        }
        NhanVien* tg = ds_nhanvien[i];
        ds_nhanvien[i] = ds_nhanvien[min];
        ds_nhanvien[min] = tg;

    }
}
// Hàm sắp xếp nổi bột theo mã
void CongTy::BubbleSort_Ma()
{
    {
        NhanVien* temp;
        for (int i = 0; i < ds_nhanvien.size(); ++i)
        {
            for (int j = i + 1; j < ds_nhanvien.size(); ++j)
            {
                if (ds_nhanvien[i]->get_MaNV() > ds_nhanvien[j]->get_MaNV())
                {
                    temp = ds_nhanvien[i];
                    ds_nhanvien[i] = ds_nhanvien[j];
                    ds_nhanvien[j] = temp;
                }
            }
        }
    }
}
// Hàm sắp xếp nổi bột theo tên
void CongTy::BubbleSort_Ten()
{
    {
        for (int i = 0; i < ds_nhanvien.size(); ++i)
        {
            for (int j = i + 1; j < ds_nhanvien.size(); ++j)
            {
                if (ds_nhanvien[i]->get_Ten() > ds_nhanvien[j]->get_Ten())
                {
                    
                    NhanVien* temp = ds_nhanvien[i];
                    ds_nhanvien[i] = ds_nhanvien[j];
                    ds_nhanvien[j] = temp;
                }
            }
        }
    }
}
// Hàm sắp xếp nổi bột theo năm sinh
void CongTy::BubbleSort_NamSinh()
{
    {
        NhanVien* temp;
        for (int i = 0; i < ds_nhanvien.size(); ++i)
        {
            for (int j = i + 1; j < ds_nhanvien.size(); ++j)
            {
                if (ds_nhanvien[i]->get_NamSinh() > ds_nhanvien[j]->get_NamSinh())
                {
                    temp = ds_nhanvien[i];
                    ds_nhanvien[i] = ds_nhanvien[j];
                    ds_nhanvien[j] = temp;
                }
            }
        }
    }
}
// Hàm sắp xếp nổi bột theo lương
void CongTy::BubbleSort_Luong()
{
    {
        NhanVien* temp;
        for (int i = 0; i < ds_nhanvien.size(); ++i)
        {
            for (int j = i + 1; j < ds_nhanvien.size(); ++j)
            {
                if (ds_nhanvien[i]->TinhLuong() > ds_nhanvien[j]->TinhLuong())
                {
                    temp = ds_nhanvien[i];
                    ds_nhanvien[i] = ds_nhanvien[j];
                    ds_nhanvien[j] = temp;
                }
            }
        }
    }
}
// Hàm tìm kiếm  nhân viên dựa vào mã
void CongTy::Search_Ma()
{
    int manv;
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap vao ma nhan vien can tim: ";
    cin >> manv;
    Frame_Table();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {                        
        if (ds_nhanvien[i]->get_MaNV() == manv) 
        {
            if (ds_nhanvien[i]->get_check() == true) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;

                cout << setw(66) << right << char(200);

                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
            if (ds_nhanvien[i]->get_check() == false) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
                cout << setw(66) << right << char(200);
                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
        }
        else 
        {
            Frame_Error5();
        }
            
    }
}
// Hàm tìm kiếm  nhân viên dựa vào tên
void CongTy::Search_Ten()
{
    string Ten;
    system("color 56");
    gotoxy(68, 7);
    cin.ignore();
    cout << "Nhap vao Ho Ten nhan vien can tim: ";
    getline(cin, Ten);
    Frame_Table();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        if (ds_nhanvien[i]->get_Ten() == Ten)
        {
            if (ds_nhanvien[i]->get_check() == true) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;

                cout << setw(66) << right << char(200);

                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
            if (ds_nhanvien[i]->get_check() == false) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
                cout << setw(66) << right << char(200);
                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
        }
        else
        {
            Frame_Error5();
        }
    }
   
}
// Hàm tìm kiếm  nhân viên dựa vào năm sinh
void CongTy::Search_NamSinh()
{
    int namsinh;
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap vao Nam sinh nhan vien can tim: ";
    cin >> namsinh;
    Frame_Table();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        if (ds_nhanvien[i]->get_NamSinh() == namsinh)
        {
            if (ds_nhanvien[i]->get_check() == true) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;

                cout << setw(66) << right << char(200);

                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
            if (ds_nhanvien[i]->get_check() == false) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
                cout << setw(66) << right << char(200);
                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
        }
        else
        {
            Frame_Error5();
        }
    }
    

}
// Hàm tìm kiếm  nhân viên dựa vào lương
void CongTy::Search_Luong()
{
    float salary;
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap vao tien luong nhan vien can tim: ";
    cin >> salary;
    Frame_Table();
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        if (ds_nhanvien[i]->TinhLuong() == salary)
        {
            if (ds_nhanvien[i]->get_check() == true) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Lap Trinh";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Lập trình thứ i
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;

                cout << setw(66) << right << char(200);

                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
            if (ds_nhanvien[i]->get_check() == false) {
                cout << setw(66) << right << char(186) << "  ";
                cout << i + 1 << "  " << char(186) << "  " << "Nhan Vien Thiet Ke ";
                ds_nhanvien[i]->Xuat(); // Xuất ra thông tin nhân viên Thiết Kế thứ i    
                cout << "  " << char(186) << "     " << (size_t)ds_nhanvien[i]->TinhLuong() << "     " << char(186) << endl;
                cout << setw(66) << right << char(200);
                for (int i = 0; i < 102; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;
            }
        }
        else
        {
            Frame_Error5();
        }
       
    }
}
// Hàm thay đổi thông tin nhân viên dựa vào mã
void CongTy::Edit_Ma()
{
    int manv;
    int dem = 0; // khai báo dem = 0
    system("color 56");
    gotoxy(68, 7);
    cout << "Ma Nhan Vien can Edit: ";
    cin >> manv;

    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        if (manv == ds_nhanvien[i]->get_MaNV())
        {
            FrameN1();
            dem++; // dem = 1;
            ds_nhanvien[i]->Nhap();
           
        }
    }
    if (dem == 0)        
        Frame_Error5();

}
// Hàm thay đổi thông tin nhân viên dựa vào tên
void CongTy::Edit_Ten()
{
    string name;
    int dem = 0;
    cin.ignore();
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap vao ho ten can edit: ";
    getline(cin, name);
    for (int i = 0; i < ds_nhanvien.size(); i++)
    {
        if (name == ds_nhanvien[i]->get_Ten())
        {
            FrameN1();
            dem++;
            ds_nhanvien[i]->Nhap();
           
        }
    }
    if (dem == 0)
     
        Frame_Error5();
}

// Hàm Xóa thông tin nhân viên dựa vào mã
void CongTy::Delete_Ma()
{
    int manv;
    int dem = 0;
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap vao ma nv can xoa: ";
    cin >> manv;
    for (int i = 0; i < ds_nhanvien.size(); i++)
        if (manv == ds_nhanvien[i]->get_MaNV())
        {
            ds_nhanvien.erase(ds_nhanvien.begin() + i);
            dem++;
        }
    if (dem == 0)
        Frame_Error5();

}
// Hàm xóa thông tin nhân viên dựa vào tên
void CongTy::Delete_Ten()
{
    string name;
    int dem = 0;
    cin.ignore();
    system("color 56");
    gotoxy(68, 7);
    cout << "Nhap ho ten can xoa: " << endl;
    getline(cin, name);
    for (int i = 0; i < ds_nhanvien.size(); i++)
        if (name == ds_nhanvien[i]->get_Ten())
        {
            ds_nhanvien.erase(ds_nhanvien.begin() + i);
            dem++;
        }
    if (dem == 0)    
        Frame_Error5();   
}
