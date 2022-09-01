#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct person{
	string name;
	int d,m,y;
};
int main(){
	int n,i;
	cin >> n;
	cin.ignore();
	vector<person> a(n);
	for(i=0;i<n;i++){
		cin>> a[i].name;
		cin.ignore();
		cin >>a[i].d >>a[i].m>>a[i].y;
	}
	person oldest=a[0], youngest=a[0];
	for(i=1;i<n;i++){
		if(a[i].y<oldest.y){
			oldest=a[i];
		}
		else if(a[i].y==oldest.y){
			if(a[i].m<oldest.m){
				oldest=a[i];	
			}
			else if(a[i].m==oldest.m){
				if(a[i].d<oldest.d){
					oldest=a[i];
				}
			}
		}
	}
	for(i=1;i<n;i++){
		if(a[i].y>oldest.y){
			youngest=a[i];
		}
		else if(a[i].y==oldest.y){
			if(a[i].m>oldest.m){
				youngest=a[i];	
			}
			else if(a[i].m==oldest.m){
				if(a[i].d>oldest.d){
					youngest=a[i];
				}
			}
		}
	}
	cout << youngest.name<< endl<<oldest.name;
	return 0;
}

