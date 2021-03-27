#include <bits/stdc++.h>
using namespace std;

int findAns(string s, int cj ,int jc,int len){
    int ans = 0;
    for(int i=0;i<len-1;i++){
                if(s[i] == 'J' && s[i+1] == 'C'){
                    ans+=jc;
                }
                if(s[i] == 'C' && s[i+1] == 'J'){
                    ans+=cj;
                }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    for(int tc=1;tc<=t;tc++){
        int cj;cin >> cj;
        int jc; cin >> jc;
        string s; cin >> s;
        int len = s.length();
        char prev;
        int cnt = 0,ans=0;

        if(cj <0 || jc < 0){
            if(jc < 0){
                int pos = 0;
                int index;
                while((index = s.find("??", pos)) != string::npos) {
                    s[index] ='J';
                    s[index+1] ='C';
                    
                }
                 
            }
            if(cj < 0){
                int pos = 0;
                int index;
                while((index = s.find("??", pos)) != string::npos) {
                    s[index] ='C';
                    s[index+1] ='J';
                    
                }
               
            }
            if(len>1){
                if(s[0] == '?'){
                    s[0] = s[1];
                }
                for(int i=0;i<len-1;i++){
                    if(s[i] == '?'){
                        s[i] = s[i-1];
                    }

                }
                if(s[len-1] == '?'){
                    s[len-1] = s[len-2];
                }
            }
            

            ans+=findAns(s,cj,jc,len);
        } else{
            for(int i=0;i<len;i++){
            if(s[i] == '?'){
                cnt++;
            }
            if(s[i]!='?'){
                prev = s[i];
                
                for(int j=i;j>=0;j--){
                if(s[j] == '?'){
                     s[j] = prev;
                    }
               
                }
            }
            
            
        }
        for(int i=0;i<len-1;i++){
            
            if(s[i]=='?'){
                s[i] = s[i-1];
            }
        }
        if(len>1){
            if(s[len-1] == '?'){
                s[len-1] = s[len-2];
            }
        }
            if(cnt == len || cnt == len-1){
            ans = 0;
        } else{
            ans+=findAns(s,cj,jc,len);
        }
        }
    cout << "Case #"<<tc<<": "<<ans << "\n";
    }
}
