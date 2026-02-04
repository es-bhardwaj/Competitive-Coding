//Time Limit Exceeded
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool notIn(vector<int>& temp, int i){
    for(int j=0; j<temp.size(); j++){
        if(temp[j]==i) return false;
    }
    return true;
}

bool isComp(int n){
    if(n < 4) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return true; 
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if (n < 4) {
        if (n == 1) cout << 1 << "\n";
        else cout << -1 << "\n";
        continue;
    }
    vector<int> temp;
    temp.push_back(1);
    bool possible= true;
    for(int x=0; x<n-1; x++){
        bool found= false;
        for(int i=1; i<=n; i++) {
            if(notIn(temp, i)) {
                if(isComp(temp.back() + i)) {
                    temp.push_back(i);
                    found = true;
                    break;
                }
            }
        }
        if(!found) {
            possible = false;
            break;
        }
    }
    if(possible) {
        for(int x=0; x<n; x++){
            cout << temp[x] << " ";
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}
    return 0;
}