#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >>t;
    for(int tc=1;tc<=t;tc++){
        int s,c; cin >> s >> c;
        vector<int> vc;
        vector<int> vcc;
        for(int i=0;i<s;i++){
            vcc.push_back(i+1);
        }
        int j = c - (s-1);
        for(int i=s;i>1;--i){
            if(i-1<=j){
                vc.push_back(i);
                j-=i-1;
            }
            
        }
        if(j!=0){
            cout <<"Case #"<<tc<<": "<<"IMPOSSIBLE"<<"\n";
        } else{
            reverse(vc.begin(),vc.end());
            for(int d : vc){
                reverse((s - d) + vcc.begin(),vcc.end());
            }
            cout << "Case #"<<tc<<": ";
            for(auto d: vcc){
                cout << d <<" ";
            }
            cout <<"\n";
        }
    }
    
}
