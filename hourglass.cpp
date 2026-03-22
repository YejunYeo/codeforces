#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while(t--){
int s,k,m;
cin >> s >> k >> m;

int rem = m % k;
int nc =  m / k;

if ( s < k){
	cout << max ( 0, s - rem) << endl;
}
else if (nc % 2 == 1){
	cout <<max(k - rem, 0) << endl; 
}
else {
	cout <<max(0, s - rem) << endl;
}
}
return 0;
}
