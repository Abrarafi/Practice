#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        char  c[a][b];
        for(int i = 0;i<a;i++){
            for(int j = 0;j<b;j++){
                cin>>c[i][j];
            }
        }
        
        int cnt=0;
        for(int j = 0;j<b;j++){
            for(int i = 0;i<a;i++){
                if(c[j][i]=='v'&&cnt==0){
                    cnt++;
                    break;
                }
                if(c[j][i]=='i'&&cnt==1){
                    cnt++;
                    break;
                }
                if(c[j][i]=='k'&&cnt==2){
                    cnt++;
                    break;
                }
                if(c[j][i]=='a'&&cnt==3){
                    cnt++;
                    break;
                }
                
            }
        }
        cout<<cnt<<endl;
        if(cnt>=4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       

    }


}