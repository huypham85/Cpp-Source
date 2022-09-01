#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10000];
void nhap(){
    for(int i=0;i<n;i++) cin>>a[i];
}
void xuat(){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
bool check(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}
void bubble(){
    for(int i=0; i<n; i++){
        if(check()==false){
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
		    }
            cout<<"Buoc "<<i+1<<": ";
            xuat();
        }
	}   
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    nhap();
    //cout<<endl;
    bubble();
    //xuat();
    return 0;
}