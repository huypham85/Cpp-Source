#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int ktra(int i)
{
    if (i< 2)    
        return 0;
    for (int j = 2; j <= sqrt(i); j ++)
    {
        if ((i)%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
	int t,j,a,b,i;
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> a>>b;
		for(j=a;j<=b;j++){
			if(ktra(j)==1){
				cout << j<< " ";
			}
		}
		cout << endl;
	}	
	return 0;
}

