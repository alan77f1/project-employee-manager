#pragma once
#include"DoHoa.h"
#include"NhanVien.h"
#include"CongTy.h"
#include"Menu.h"
#include <iomanip>

void Menu() {

    vector<NhanVien*>ds_nhanvien;
    CongTy x;
    int Set[] = { 7, 7, 7, 7 , 7, 7, 7, 7 , 7, 7 };
    int counter = 1; // Bước Nhảy
    char key;

    for (int i = 0; ;)
    {

        gotoxy(3, 7);
        color(Set[0]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 8);
        cout << char(219);
        cout << "    THEM MOI NHAN VIEN   " << char(219) << endl << endl;
        gotoxy(3, 9);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 10);
        color(Set[1]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 11);
        cout << char(219);

        cout << "      XUAT DANH SACH     " << char(219) << endl << endl;
        gotoxy(3, 12);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;


        gotoxy(3, 13);
        color(Set[2]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 14);
        cout << char(219);

        cout << "      XUAT LUONG MIN     " << char(219) << endl << endl;
        gotoxy(3, 15);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 16);
        color(Set[3]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 17);
        cout << char(219);

        cout << "      XUAT LUONG MAX     " << char(219) << endl << endl;
        gotoxy(3, 18);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 19);
        color(Set[4]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 20);
        cout << char(219);

        cout << "        TONG LUONG       " << char(219) << endl << endl;
        gotoxy(3, 21);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 22);
        color(Set[5]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 23);
        cout << char(219);

        cout << "         SAP XEP         " << char(219) << endl << endl;
        gotoxy(3, 24);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 25);
        color(Set[6]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 26);
        cout << char(219);

        cout << "         TIM KIEM        " << char(219) << endl << endl;
        gotoxy(3, 27);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 28);
        color(Set[7]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 29);
        cout << char(219);
        cout << "    THAY DOI THONG TIN   " << char(219) << endl << endl;
        gotoxy(3, 30);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 31);
        color(Set[8]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 32);
        cout << char(219);

        cout << "           XOA           " << char(219) << endl << endl;
        gotoxy(3, 33);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;

        gotoxy(3, 34);
        color(Set[9]);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;
        gotoxy(3, 35);
        cout << char(219);

        cout << "          THOAT          " << char(219) << endl << endl;
        gotoxy(3, 36);
        cout << char(219);
        for (int i = 0; i < 25; i++)
        {
            cout << char(219);
        }
        cout << char(219) << endl;


        key = _getch();


        if (key == 72 && (counter >= 9 && counter <= 10))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;
        }
        if (key == 80 && (counter >= 8 && counter <= 9))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;
        }
        if (key == 72 && (counter >= 8 && counter <= 9))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;
        }
        if (key == 80 && (counter >= 7 && counter <= 8))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;
        }
        if (key == 72 && (counter >= 7 && counter <= 8))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;
        }
        if (key == 80 && (counter >= 6 && counter <= 7))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;
        }
        if (key == 72 && (counter >= 6 && counter <= 7))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;
        }
        if (key == 80 && (counter >= 5 && counter <= 6))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;
        }

        if (key == 72 && (counter >= 5 && counter <= 6))
        {
            system("cls");
            system("color 56");
            counter--;
        }
        if (key == 80 && (counter >= 4 && counter <= 5))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;
        }

        if (key == 72 && (counter >= 4 && counter <= 5))
        {
            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;

        }
        if (key == 80 && (counter >= 3 && counter <= 4))
        {

            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;

        }

        if (key == 72 && (counter >= 3 && counter <= 4))
        {

            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;



        }
        if (key == 80 && (counter >= 2 && counter <= 3))
        {

            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;

        }
        if (key == 80 && (counter >= 3 && counter <= 2))
        {

            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;

        }
        if (key == 72 && (counter >= 2 && counter <= 3))
        {


            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter--;

        }
        if (key == 80 && (counter >= 1 && counter <= 2))
        {

            system("cls");
            system("color 56");
            Frame1();
            Frame2();
            counter++;


        }


        if (key == '\r')
        {
            if (counter == 1)
            {
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                Frame_Height1();
                Frame_Input();
                Frame_Width1();
                x.Nhap();
            }
            if (counter == 2)
            {
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                Frame_List();
                x.XuatDanhSach();
            }
            if (counter == 3)
            {
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                Frame_Height1();
                Frame_Min();
                Frame_Width1();
                x.Tim_Min_Luong();

            }
            if (counter == 4)
            {

                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                Frame_Height1();
                Frame_Max();
                Frame_Width1();
                x.Tim_Max_Luong();

            }
            if (counter == 5)
            {
                system("cls");
                system("color 56");
                Frame1();
                Frame2();
                cout << "\n\n\n" << setw(44) << right << char(201);
                for (int i = 0; i < 65; i++)
                {
                    cout << char(205);
                }
                cout << char(187) << endl;
                cout << setw(44) << right << char(186) << "        Tong Tien Luong       " << char(186) << "             " << x.TinhTongLuong() << "             " << char(186) << endl;
                cout << setw(44) << right << char(200);
                for (int i = 0; i < 65; i++)
                {
                    cout << char(205);
                }
                cout << char(188) << endl;

            }
            if (counter == 6)
            {
                int Set[] = { 7, 7, 7, 7, 7, 7, 7, 7, 7 };
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
                    
                    cout << "     Selection Ma       " << char(219) << endl << endl;

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
               
                    cout << "     Selection Ten      " << char(219) << endl << endl;
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
           
                    cout << "     Selection Nam Sinh " << char(219) << endl << endl;
                    gotoxy(35, 15);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 16);
                    color(Set[3]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 17);
                    cout << char(219);
               
                    cout << "    Selection Luong     " << char(219) << endl << endl;
                    gotoxy(35, 18);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 19);
                    color(Set[4]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 20);
                    cout << char(219);
                 
                    cout << "       Bubble Ma        " << char(219) << endl << endl;
                    gotoxy(35, 21);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    gotoxy(35, 22);
                    color(Set[5]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 23);
                    cout << char(219);

                    cout << "       Bubble Ten       " << char(219) << endl << endl;
                    gotoxy(35, 24);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 25);
                    color(Set[6]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 26);
                    cout << char(219);
                    cout << "     Selection Code     " << char(219) << endl << endl;
                    cout << "     Bubble Nam Sinh    " << char(219) << endl << endl;
                    gotoxy(35, 27);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 28);
                    color(Set[7]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 29);
                    cout << char(219);

                    cout << "     Bubble Salary      " << char(219) << endl << endl;
                    gotoxy(35, 30);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 31);
                    color(Set[8]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 32);
                    cout << char(219);
            
                    cout << "         THOAT          " << char(219) << endl << endl;
                    gotoxy(35, 33);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    key = _getch();





                    if (key == 72 && (counter >= 8 && counter <= 9))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 7 && counter <= 8))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 72 && (counter >= 7 && counter <= 8))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 6 && counter <= 7))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 72 && (counter >= 6 && counter <= 7))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 5 && counter <= 6))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }

                    if (key == 72 && (counter >= 5 && counter <= 6))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 4 && counter <= 5))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }

                    if (key == 72 && (counter >= 4 && counter <= 5))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 3 && counter <= 4))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }

                    if (key == 72 && (counter >= 3 && counter <= 4))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 80 && (counter >= 3 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 72 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 1 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }


                    if (key == '\r')
                    {
                        if (counter == 1)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.SelectionSort_Ma();
                            x.XuatDanhSach();
                        }
                        if (counter == 2)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.SelectionSort_Ten();
                            x.XuatDanhSach();


                        }
                        if (counter == 3)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.SelectionSort_NamSinh();
                            x.XuatDanhSach();

                        }
                        if (counter == 4)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.SelectionSort_Luong();
                            x.XuatDanhSach();

                        }
                        if (counter == 5)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.BubbleSort_Ma();
                            x.XuatDanhSach();

                        }
                        if (counter == 6)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.BubbleSort_Ten();
                            x.XuatDanhSach();

                        }
                        if (counter == 7)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.BubbleSort_NamSinh();
                            x.XuatDanhSach();

                        }
                        if (counter == 8)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Sort();
                            Frame_Width1();
                            x.BubbleSort_Luong();
                            x.XuatDanhSach();

                        }
                        if (counter == 9)
                        {
                            break;
                        }

                    }
                    Set[0] = 7;
                    Set[1] = 7;
                    Set[2] = 7;
                    Set[3] = 7;
                    Set[4] = 7;
                    Set[5] = 7;
                    Set[6] = 7;
                    Set[7] = 7;
                    Set[8] = 7;


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
                    if (counter == 4)
                    {
                        Set[3] = 86;
                    }
                    if (counter == 5)
                    {
                        Set[4] = 86;
                    }
                    if (counter == 6)
                    {
                        Set[5] = 86;
                    }
                    if (counter == 7)
                    {
                        Set[6] = 86;
                    }
                    if (counter == 8)
                    {
                        Set[7] = 86;
                    }
                    if (counter == 9)
                    {
                        Set[8] = 86;
                    }


                }
            }
            if (counter == 7)
            {
                int Set[] = { 7, 7, 7, 7, 7 };
                int counter = 1; // Bước Nhảy
                char key;

                for (int i = 0; ;)
                {
                    gotoxy(35, 16);
                    color(Set[0]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 17);
                    cout << char(219);
                   
                    cout << "      Ma Nhan Vien      " << char(219) << endl << endl;

                    gotoxy(35, 18);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    gotoxy(35, 19);
                    color(Set[1]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 20);
                    cout << char(219);
                   
                    cout << "      Ten Nhan Vien     " << char(219) << endl << endl;
                    gotoxy(35, 21);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 22);
                    color(Set[2]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 23);
                    cout << char(219);
 
                    cout << "        Nam Sinh        " << char(219) << endl << endl;

                    gotoxy(35, 24);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 25);
                    color(Set[3]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 26);
                    cout << char(219);
                   
                    cout << "         Luong          " << char(219) << endl << endl;
                    gotoxy(35, 27);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 28);
                    color(Set[4]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 29);
                    cout << char(219);
                   
                    cout << "         THOAT          " << char(219) << endl << endl;
                    gotoxy(35, 30);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    key = _getch();


                    if (key == 72 && (counter >= 4 && counter <= 5))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 3 && counter <= 4))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }

                    if (key == 72 && (counter >= 3 && counter <= 4))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 80 && (counter >= 3 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }
                    if (key == 72 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 1 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }


                    if (key == '\r')
                    {
                        if (counter == 1)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Search();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Search_Ma();
                        }
                        if (counter == 2)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Search();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Search_Ten();
                        }
                        if (counter == 3)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Search();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Search_NamSinh();

                        }
                        if (counter == 4)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Search();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Search_Luong();

                        }
                        if (counter == 5)
                        {
                            break;

                        }

                    }
                    Set[0] = 7;
                    Set[1] = 7;
                    Set[2] = 7;
                    Set[3] = 7;
                    Set[4] = 7;

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
                    if (counter == 4)
                    {
                        Set[3] = 86;
                    }
                    if (counter == 5)
                    {
                        Set[4] = 86;
                    }

                }
            }
            if (counter == 8)
            {
                int Set[] = { 7, 7, 7 };
                int counter = 1; // Bước Nhảy
                char key;

                for (int i = 0; ;)
                {
                    gotoxy(35, 20);
                    color(Set[0]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 21);
                    cout << char(219);
               
                    cout << "      Ma Nhan Vien      " << char(219) << endl << endl;

                    gotoxy(35, 22);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 23);
                    color(Set[1]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 24);
                    cout << char(219);
    
                    cout << "      Ten Nhan Vien     " << char(219) << endl << endl;
                     
                    gotoxy(35, 25);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 26);
                    color(Set[2]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 27);
                    cout << char(219);
                
                    cout << "         THOAT          " << char(219) << endl << endl;
                    gotoxy(35, 28);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    key = _getch();

                    if (key == 72 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 1 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }


                    if (key == '\r')
                    {
                        if (counter == 1)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();                          
                            Frame_Height1();
                            Frame_Edit();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Edit_Ma();
                           

                        }
                        if (counter == 2)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Edit();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Edit_Ten();
                        }
                        if (counter == 3)
                        {

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
            if (counter == 9)
            {
                int Set[] = { 7, 7, 7 };
                int counter = 1; // Bước Nhảy
                char key;

                for (int i = 0; ;)
                {
                    gotoxy(35, 22);
                    color(Set[0]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 23);
                    cout << char(219);
                 
                    cout << "      Ma Nhan Vien      " << char(219) << endl << endl;


                    gotoxy(35, 24);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 25);
                    color(Set[1]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 26);
                    cout << char(219);

                    cout << "      Ten Nhan Vien     " << char(219) << endl << endl;
                    gotoxy(35, 27);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;

                    gotoxy(35, 28);
                    color(Set[2]);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;
                    gotoxy(35, 29);
                    cout << char(219);
        
                    cout << "          THOAT         " << char(219) << endl << endl;
                    gotoxy(35, 30);
                    cout << char(219);
                    for (int i = 0; i < 24; i++)
                    {
                        cout << char(219);
                    }
                    cout << char(219) << endl;


                    key = _getch();


                    if (key == 72 && (counter >= 2 && counter <= 3))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter--;
                    }
                    if (key == 80 && (counter >= 1 && counter <= 2))
                    {
                        system("cls");
                        system("color 56");
                        Frame1();
                        Frame2();
                        counter++;
                    }


                    if (key == '\r')
                    {
                        if (counter == 1)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Delete();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Delete_Ma();
                        }
                        if (counter == 2)
                        {
                            system("cls");
                            system("color 56");
                            Frame1();
                            Frame2();
                            Frame_Height1();
                            Frame_Delete();
                            Frame_Width1();
                            Frame_Error5a();
                            x.Delete_Ten();
                        }
                        if (counter == 3)
                        {

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
            if (counter == 10)
            {
                exit(0);
            }

        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        Set[4] = 7;
        Set[5] = 7;
        Set[6] = 7;
        Set[7] = 7;
        Set[8] = 7;
        Set[9] = 7;
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
            Set[2] = 86;;
        }
        if (counter == 4)
        {
            Set[3] = 86;
        }
        if (counter == 5)
        {
            Set[4] = 86;
        }
        if (counter == 6)
        {
            Set[5] = 86;
        }
        if (counter == 7)
        {
            Set[6] = 86;
        }
        if (counter == 8)
        {
            Set[7] = 86;
        }
        if (counter == 9)
        {
            Set[8] = 86;
        }
        if (counter == 10)
        {
            Set[9] = 86;
        }
    }

}


void Frame1()
{
    cout << char(220);
    for (int i = 0; i < 170; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    for (int i = 0; i < 43; i++)
    {
        cout << char(219) << setw(32) << right << char(219) << setw(139) << right << char(219) << endl;

    }

    gotoxy(0, 43);
    cout << char(219);
    for (int i = 0; i < 170; i++)
    {
        cout << char(219);
    }
    cout << char(219);




}

void Frame2()
{
    gotoxy(2, 2);
    cout << char(220);
    for (int i = 0; i < 27; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(2, 3);

    cout << char(219) << "    QUAN LY NHAN VIEN      " << char(219) << endl;

    gotoxy(2, 4);
    cout << char(219);
    for (int i = 0; i < 27; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}
void Frame3()
{
    cout << char(220);
    for (int i = 0; i < 155; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    for (int i = 0; i < 35; i++)
    {
        cout << char(219) << setw(37) << right << char(219) << setw(119) << right << char(219) << endl;

    }

    gotoxy(0, 35);
    cout << char(219);
    for (int i = 0; i < 155; i++)
    {
        cout << char(219);
    }
    cout << char(219);


}


void Frame_Height1()
{
    cout << char(219) << endl;
    for (int i = 1; i < 43; i++)
    {
        gotoxy(63, i);
        cout << char(219) << endl;

    }
}

void Frame_Width1()
{

    gotoxy(63, 4);
    cout << char(219);
    for (int i = 0; i < 106; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

}

void Frame_Input()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "   NHAP THONG TIN NHAN VIEN     " << char(219) << endl;

    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}

void Frame_Edit()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "  NHAP THONG TIN CAN THAY DOI   " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}



void Frame_Delete()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "    NHAP THONG TIN CAN XOA      " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}


void Frame_Search()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "      TIM KIEM NHAN VIEN        " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}

void Frame_Sort()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "       SAP XEP NHAN VIEN        " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}


void Frame_List()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "      DANH SACH NHAN VIEN       " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}


void Frame_Min()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);
    cout << char(219) << "        LUONG THAP NHAT         " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}



void Frame_Max()
{
    gotoxy(103, 1);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(103, 2);

    cout << char(219) << "         LUONG CAO NHAT         " << char(219) << endl;
    gotoxy(103, 3);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(219);
    }
    cout << char(219) << endl;
}


void FrameN1()
{
    gotoxy(66, 9);
    cout << char(220);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(66, 11);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

    gotoxy(66, 13);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    gotoxy(66, 15);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    gotoxy(66, 17);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    gotoxy(66, 19);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

    cout << char(219) << endl;
    for (int i = 10; i < 19; i++)
    {
        gotoxy(66, i);
        cout << char(219) << endl;

    }


    cout << char(219) << endl;
    for (int i = 10; i < 20; i++)
    {
        gotoxy(111, i);
        cout << char(219) << endl;

    }
}


void FrameN2()
{
    gotoxy(66, 9);
    cout << char(220);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(66, 11);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

    gotoxy(66, 13);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    gotoxy(66, 15);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    gotoxy(66, 17);
    cout << char(219);
    for (int i = 0; i < 44; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;


    cout << char(219) << endl;
    for (int i = 10; i < 18; i++)
    {
        gotoxy(66, i);
        cout << char(219) << endl;

    }


    cout << char(219) << endl;
    for (int i = 10; i < 18; i++)
    {
        gotoxy(111, i);
        cout << char(219) << endl;

    }
}


void Frame_Error1()
{
    gotoxy(113, 9);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(113, 10);

    cout << char(219) << "     Error! Nhap Du 6 So        " << char(219) << endl;

    gotoxy(113, 11);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;
}

void Frame_Error2()
{
    gotoxy(113, 13);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(113, 14);
    cout << char(219) << "    Error! Xin Kiem Tra Lai!    " << char(219) << endl;

    gotoxy(113, 15);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

}

void Frame_Error3()
{
    gotoxy(113, 15);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(113, 16);
    cout << char(219) << "    Error! Xin Kiem Tra Lai!    " << char(219) << endl;

    gotoxy(113, 17);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

}

void Frame_Error4()
{
    gotoxy(113, 17);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(113, 18);
    cout << char(219) << "    Error! Xin Kiem Tra Lai!    " << char(219) << endl;

    gotoxy(113, 19);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

}


void Frame_Error5()
{
    gotoxy(123, 6);
    cout << char(220);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;

    gotoxy(123, 7);
    cout << char(219) << " Error!Khong tim thay Nhan Vien " << char(219) << endl;

    gotoxy(123, 8);
    cout << char(219);
    for (int i = 0; i < 32; i++)
    {
        cout << char(220);
    }
    cout << char(219) << endl;

}

void Frame_Error5a()
{
    gotoxy(66, 6);
    cout << char(220);
    for (int i = 0; i < 54; i++)
    {
        cout << char(220);
    }
    cout << char(220) << endl;
   

    gotoxy(66, 8);
    cout << char(219);
    for (int i = 0; i < 54; i++)
    {
        cout << char(220);
    }
    cout << char(219);


    for (int i = 7; i < 8; i++)
    {
        gotoxy(66, i);
        cout << char(219) << endl;

    }

   
    for (int i = 7; i < 8; i++)
    {
        gotoxy(121, i);
        cout << char(219) << endl;

    }

}


void Frame_Table()
{
    cout << "\n\n\n" << setw(66) << right << char(201);
    for (int i = 0; i < 102; i++)
    {
        cout << char(205);
    }
    cout << char(187) << endl;
    cout << setw(66) << right << char(186) << " STT " << char(186) << "       Chuc Vu        " << char(186) << "  Ma Nhan Vien  " << char(186) << "       Ho Va Ten        " << char(186) << "  Ngay Sinh  " << char(186) << "      Luong      " << char(186) << endl;
    cout << setw(66) << right << char(200);
    for (int i = 0; i < 102; i++)
    {
        cout << char(205);
    }
    cout << char(188) << endl;
}

