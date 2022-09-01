#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
int ktra(int i)
{
    if (i< 2)    
        return 0;
    for (int j = 2; j <= sqrt(i); j ++)
    {
        if (i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
	int n,m, i,dem=0,u=1;
	cin>> n >> m;
	int a[m-n+1];
	for(i=n;i<=m; i++){
		ktra(i);
		if(ktra(i)==1){
			dem++;
			a[u]=i;
			u++;
		}
	}
	cout << dem  << "\n";
	for(int x=1;x<u;x++)
		cout <<a[x]<< " ";
	return 0;
}

