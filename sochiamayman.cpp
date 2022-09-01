#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int a[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int n,i,j,dem=0;
	cin>>n;
	for(i=0;i<14;i++){
		if(n%a[i]==0){
			dem=1;
			break;
		}
	}
	if(dem==1)	cout<<"YES";
	else	cout<<"NO";
	return 0;
}

