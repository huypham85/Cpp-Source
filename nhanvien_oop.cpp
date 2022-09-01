#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class SuaOngNuoc{
private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sogio;
public:
    void nhap();
    void xuat();
    float tinhtienluong();
    SuaOngNuoc();
    ~SuaOngNuoc();
};
void SuaOngNuoc::nhap(){
    //cin.ignore();
    getline(cin, hoten);
    cin>>tuoi;
    cin.ignore();
    getline(cin,gioitinh);
    getline(cin,diachi);
    getline(cin,sdt);
    cin>>chieucao;
    cin>>cannang;
    cin>>sogio;
}
void SuaOngNuoc::xuat(){
    cout<<hoten<<endl;
    cout<<tuoi<<endl;
    cout<<gioitinh<<endl;
    cout<<diachi<<endl;
    cout<<sdt<<endl;
    cout<<chieucao<<endl;
    cout<<cannang<<endl;
}
float SuaOngNuoc::tinhtienluong(){
    return sogio*50000;
}
SuaOngNuoc::SuaOngNuoc(){}
SuaOngNuoc::~SuaOngNuoc(){}

class GiaoHang{
private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sohang;
public:
    void nhap();
    void xuat();
    float tinhtienluong();
    GiaoHang();
    ~GiaoHang();
};
void GiaoHang::nhap(){
    cin.ignore();
    getline(cin, hoten);
    cin>>tuoi;
    cin.ignore();
    getline(cin,gioitinh);
    getline(cin,diachi);
    getline(cin,sdt);
    cin>>chieucao;
    cin>>cannang;
    cin>>sohang;
}
void GiaoHang::xuat(){
    cout<<hoten<<endl;
    cout<<tuoi<<endl;
    cout<<gioitinh<<endl;
    cout<<diachi<<endl;
    cout<<sdt<<endl;
    cout<<chieucao<<endl;
    cout<<cannang<<endl;
}
float GiaoHang::tinhtienluong(){
    return sohang*50000;
}
GiaoHang::GiaoHang(){}
GiaoHang::~GiaoHang(){}

class XeOm{
private:
    string hoten;
    int tuoi;
    string gioitinh;
    string diachi;
    string sdt;
    float chieucao;
    float cannang;
    float sokm;
public:
    void nhap();
    void xuat();
    float tinhtienluong();
    XeOm();
    ~XeOm();
};
void XeOm::nhap(){
    cin.ignore();
    getline(cin, hoten);
    cin>>tuoi;
    cin.ignore();
    getline(cin,gioitinh);
    getline(cin,diachi);
    getline(cin,sdt);
    cin>>chieucao;
    cin>>cannang;
    cin>>sokm;
}
void XeOm::xuat(){
    cout<<hoten<<endl;
    cout<<tuoi<<endl;
    cout<<gioitinh<<endl;
    cout<<diachi<<endl;
    cout<<sdt<<endl;
    cout<<chieucao<<endl;
    cout<<cannang<<endl;
}
float XeOm::tinhtienluong(){
    return sokm*50000;
}
XeOm::XeOm(){}
XeOm::~XeOm(){}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL); 
    SuaOngNuoc A;
    SuaOngNuoc nv_a;// doi tuong gia tri
    nv_a.nhap();
    SuaOngNuoc *nv_b=new SuaOngNuoc(); // doi tuong con tro
    nv_b->nhap();
    delete nv_b;
    XeOm C;
    A.nhap();
    B.nhap();
    C.nhap();
    cout<<endl;
    A.xuat();
    cout<<"Luong: ";
    cout<<A.tinhtienluong();
    cout<<endl<<endl;
    B.xuat();
    cout<<"Luong: ";
    cout<<B.tinhtienluong();
    cout<<endl<<endl;
    C.xuat();
    cout<<"Luong: ";
    cout<<C.tinhtienluong();
    cout<<endl<<endl;
    return 0;
}