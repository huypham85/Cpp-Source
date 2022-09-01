#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class nhanvien{ //lop cha
private: 
    string hoten;
    string maso;
    string ngaysinh;
    string quequan;
public:
    void input();
    void output();
};

class nhanviensanxuat : public nhanvien  { //ke thua
private: 
    int sosanpham;
public:
    void input();
    void output();
};

class nhanviencongnhat : public nhanvien { // ke thua
private: 
    int songaylamcong;
public:
    void input();
    void output();
};

class nhanvienquanli : public nhanvien { // ke thua
private: 
    float hesoluong;
public:
    void input();
    void output();
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    
    return 0;
}