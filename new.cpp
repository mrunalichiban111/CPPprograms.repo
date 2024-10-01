#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num;
    int n;
    int c=0;
    int k=5;
    for(int m=0;m<k;m++)
    {
        cin>>n;
        num.push_back(n);
    }
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<"\n";
    }
    return 0;
    
}