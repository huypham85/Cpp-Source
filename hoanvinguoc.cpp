#include<bits/stdc++.h>
using namespace std;
void init(int *a, int n){
	for(int i=1;i<=n;i++)
		a[i]=i;
}
void xuat(int *a, int n){
	for(int i=1;i<=n;i++){
		cout<<i;
	}
    cout<<" ";
}
vector< vector<int> > res;
/*duyet tu cuoi ve dau, tim phan tu dau tien lam mat tinh giam.
 duyet tu cuoi ve dau tim phan tu dau tien nho hon phan tu vua tim dc, doi cho, sort lai phan dang sau*/
int main(){
	int n,t;
    cin>>t;
    while (t--)
    {
        res.clear();
        cin>>n;
        int a[n+1];
        init(a, n);
        //xuat(a,n);
		for(int j=n;j>=1;j--){
			if(j==1) break;
			if(a[j-1]<a[j]){
				for(int i=n; i>=1;i--){
					if(a[i]>a[j-1]){
						swap(a[i], a[j-1]);
						sort(a+j, a+n+1);
                        //xuat(a,n);
                        vector<int>tmp;
                        for(int x=1;x<=n;x++){
                            tmp.push_back(a[x]);
                            //cout<<"A"<<endl;
                        }
                        res.push_back(tmp);
                        //cout<<"B"<<endl;
                        tmp.clear();
						break;
					}	
				}
			j=n+1;
			}
		}
        for(int i=res.size()-1;i>=0;i--){
            for(int j=0;j<res[i].size();j++)
                cout<<res[i][j];
            cout<<" ";
            
        }
        xuat(a,n);
        cout<<endl;
    }
    

	return 0;
}

