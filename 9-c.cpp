#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int n1;
   cin >> n1;
   int N=n1;
   int arr[N];
   for(int i=0;i<N;++i) arr[i]=-1;
   int KT=10000;
  while(n1--){
    int x, y;
    cin >> x >>y;
    if(arr[x]!=-1) KT=0;
    else arr[x]=y;
} 
if(KT==0) cout << "No"; // check trung x
else{
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    if((2*sum)!=(N*(N-1))) cout << "No" ; // check trung y
    else { // check duong cheo
        for(int i=0;i<N;i++){
            for(int j=N-1;j>i;j--){
                if((j-i)==abs(arr[j]-arr[i])) {
                    KT=-1;
                    break;
                    
                }
            }
        }
    }
    if(KT==-1) cout << "No";
    else cout << "yes";
}

}

