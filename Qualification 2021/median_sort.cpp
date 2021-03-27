#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int t,n,q;
    cin>>t>>n>>q;
    for(int tc=0;tc<t;tc++){
    vector<long long int> vc;
    cout<<"1 2 3"<<endl;
    
    long long int s=3,p;
    cin>>p;
    if(p==2){
        for(int i=0;i<3;i++){
            vc.push_back(i+1);
        }
        
    }
    else if(p==3){
        vc.push_back(1);
        vc.push_back(3);
        vc.push_back(2);
    }
    else{
        vc.push_back(2);
        vc.push_back(1);
        vc.push_back(3);
    }
    for(long long int i=4;i<=n;i++){
        long long int u=0,v=s-1;
        while(u<v){
            long long int mid=u+((v-u)/2);
            cout<<vc[mid]<<" "<<vc[mid+1]<<" "<<i<<endl;
            cin>>p;
            if(p==vc[mid]){
                v=mid;
            }
            else if(p==vc[mid+1]){
                u=mid+1;
            }
            else{
                vc.insert(vc.begin()+mid+1,i);
                s++;
                break;
            }
        }
        if(s!=i){
            if(u==0){
                vc.insert(vc.begin(),i);
            }
            else{
                vc.push_back(i);
            }
            s++;
        }
    }
    for(auto d: vc){
        cout<<d<<" ";
    }
    cout<<endl;
    cin>>p;
    if(p==-1){
        break;
    }
 }
}