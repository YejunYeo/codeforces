#include <bits/stdc++.h>

using namespace std;


bool is_prime(long long x){
	for (long long i = 2; i <= sqrt(x); i++){
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}


int main(){
int t;
cin >> t;
while(t--){
long long  d;
cin >> d;
long long  x = 1 + d;
while(!is_prime(x)){
	x++;
}

long long y = x + d;

while(!is_prime(y)){
	y++;
}
long long res = x * y;

cout << res << endl;



}
}
