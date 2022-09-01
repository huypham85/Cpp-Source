#include<bits/stdc++.h>

using namespace std;
int a[100001];
void printArray(int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
    cout<<endl;
}
void insertionSort( int n){
	int index, value;
	for (int i = 1; i < n; i++){
		index = i;
		value = a[i];
		while (index > 0 && a[index - 1] > value){
			a[index] = a[index - 1];
			index --;
		}
		a[index] = value;
        cout<<"Buoc "<<i<<": ";
        printArray(i+1);
	}
} 

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){ 
		cin >> a[i];
	}
    cout<<"Buoc "<<0<<": "<<a[0]<<endl;
	insertionSort(n);
	//printArray(n);
	
	return 0;
}