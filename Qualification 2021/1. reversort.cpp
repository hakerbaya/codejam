#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        int s; cin >> s;
        int count = 0;
        vector<int>vc(s,-1);
        for(int i=0;i<s;i++){
            cin >> vc[i];
        }
        for(int i=0;i<s-1;i++){
           int minIndex = i,res=vc[i],newI = i;;
            for (int p = i; p < s; p++){
                if(res < vc[p]){
                    res = res;
                } else{
                    res = vc[p];
                    minIndex = p;
                }
            }
           count+=(minIndex-newI)+1;
           if(newI!=minIndex){
                    while (newI < minIndex){
                        swap(vc[newI++], vc[minIndex--]);
                    }
             } 
        }

        cout << "Case #"<<tc<<": "<<count<<"\n";
        }
}
