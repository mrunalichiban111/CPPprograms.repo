#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,num;
    cin>>T;
    int N[T];
    vector<int> numbers;
    for(int i=0;i<T;i++){
        for(int k=0;k<3;k++){
            cin>>num;
            numbers.push_back(num);
        }
        if((numbers[1]-numbers[0])-(numbers[2]-numbers[1])){
            N[i]=0;
        }
        else{
            N[i]=1;
        }
    }
    for(int j=0;j<T;j++){
        cout<<N[j]<<"\n";
    }
}
