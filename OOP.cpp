#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class sinhvien
{
    //thuoc tinh
private:
    string hoten;
    string maso;
    float diem_toan;
    float diem_ly;
    // phuong thuc
public:
    void nhap();
    void xuat();
    
    // co che dong goi getter va setter
    // getter ho ten
    string Getter_HoTen(){
        return hoten;//tra ve du lieu
    }
    //setter ho ten
    void Setter_HoTen(string HOTEN){
        hoten=HOTEN;// thay doi du lieu
    }
};
void sinhvien::nhap(){
    cout<<"\nnhap ho ten: ";
    getline(cin, hoten);
    cout<<"\nnhap ma sv: ";
    getline(cin, maso);
    cout<<"\nnhap diem toan: ";
    cin>>diem_toan;
    cout<<"\nnhap diem ly: ";
    cin>>diem_ly;
}
void sinhvien::xuat(){
    cout<<"\nho ten: "<<hoten;
    cout<<"\nma sv: "<<maso;
    cout<<"\ndiem toan: "<<diem_toan;
    cout<<"\ndiem ly: "<<diem_ly;
}
/*sinhvien::sinhvien(){

}
sinhvien::~sinhvien(){

}*/
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    sinhvien A;
    cout<<"\nnhap thong tin sinh vien: ";
    A.nhap();
    //A.Setter_HoTen("huy");
    cout<<"\n"<<A.Getter_HoTen()<<endl;
    cout<<"\nxuat thong tin sinh vien: ";
    A.xuat();

    return 0;
}