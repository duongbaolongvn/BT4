
#include<iostream>

using namespace std;

bool check(const string &s, const string &z){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=z[s.size()-i-1]) return false;
    }
    return true;
}

 int main(){
    int n; cin >> n;
    string arr[100];
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(check(arr[i], arr[j])){
                int length=arr[i].size();
                cout << arr[i].size() << " " <<arr[i][length/2];
            }
        }
    }
    return 0;
}
