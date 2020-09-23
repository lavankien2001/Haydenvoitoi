#include <iostream>
using namespace std;
#include <math.h>
 
int main(){
    long long  N;
    int t;
    cin>>t;
    while(t--)
    {
	cin >> N;
    
//    map<int, int> m;
    for(int i = 2; i <=N/2; i++){
        while(N % i == 0){
            N /= i;
            cout<<i<<" ";
        }
    }
    cout<<endl;

	}
	return 0;
}
