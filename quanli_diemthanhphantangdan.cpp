#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct sinhvien
{
    string ten;
    float diemA, diemB, diemC;
};
vector<sinhvien>sv(1000);
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    while(1){
        int n;
        cin>>n;
        if(n==1){
            int soluong;
            cin>>soluong;
            cin.ignore();
            //sv.resize(soluong);
            for(int i=1;i<=soluong;i++){
                getline(cin, sv[i].ten);
                cin.ignore();
                cin>>sv[i].diemA;
                cin>>sv[i].diemB;
                cin>>sv[i].diemC;
                cin.ignore();
            }
            cout<<soluong<<endl;
        }
        else if(n==2){
            int change;
            cin>>change;
            cin.ignore();
            getline(cin, sv[change].ten);
            cin.ignore();
            cin>>sv[change].diemA;
            cin>>sv[change].diemB;
            cin>>sv[change].diemC;
            cin.ignore();
            cout<<change<<endl;
        }
        else if(n==3){
            for(int i=0;i<sv.size();i++){
                if(sv[i].diemA<sv[i].diemB&&sv[i].diemB<sv[i].diemC){
                    cout<<i<<" "<<sv[i].ten<<" "<<sv[i].diemA<<" "<<sv[i].diemB<<" "<<sv[i].diemC<<endl;
                }
            }
        }
    }
    return 0;
}