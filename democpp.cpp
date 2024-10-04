#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,num;
    cin>>T;
    string S[T];
    for(int i=0;i<T;i++){
        int N,x=0;
        cin>>N;
        if(N==0){
            S[i]="Alice";
        }
        else if((N==1) || (N==4) || (N==10)){
            S[i]="Alice";
        }
        else if((N==2) || (N==3) || (N==5) || (N==6) || (N==7) || (N==8) || (N==9)){
            S[i]="Bob";
        }
        
}
for(int j=0;j<T;j++){
    cout<<S[j]<<"\n";
}
return 0;
}
