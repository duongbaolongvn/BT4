#include<iostream>
using namespace std;

int main(){
    int T; cin >> T;
    bool KT = false;
    for(int t=0;t<T;t++){
        int n;
        cin >> n;
        int a[100000];
        for(int i=0;i<n;i++) cin >> a[i];
        int VT=1;
        for(int i=0;i<n;i++){
            int sum1=0, sum2=0;
            for(int j=0;j<VT;j++){
                sum1+=a[j];
            }
            for(int j=VT-1;j<n;j++){
                sum2+=a[j];
            }
            VT++;
            if(sum1 == sum2){
                KT = true;
                break;
            }
        }
        if(KT){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}