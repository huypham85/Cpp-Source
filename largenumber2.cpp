    #include<bits/stdc++.h>
    typedef long long ll;
    using namespace std;
    int t ;
    string add(string a, string b){
        string res= "";
        while(a.size()<b.size()){
            a= "0"+a;
        }
        while(b.size()<a.size()){
            b="0"+b;
        }
        int carry =0;
        for(int i=a.size()-1;i>=0;i--){
            int tmp = (a[i]-48)+(b[i]-48)+carry;
            if(tmp>=10){
                carry=tmp/10;
                tmp%=10;
            }
            else carry=0;
            res= (char)(tmp+48)+res;
        }
        if(carry>0) res ="1"+res;
        return res;
    }
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);cout.tie(NULL);
        cin>>t;
        cin.ignore();
        while(t--){
            string a, b;
            cin>>a>>b;
            cout<<add(a,b)<<endl;
        }
        return 0;
    }