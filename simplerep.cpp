#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x){
	for (int i = 2; i * i <= x; i++){
		if ( x % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, k;
		cin >> x >> k;
		if (k > 1 && x > 1){
			cout << "NO" << endl;
			
		}
		
		else if (k ==  1 && x > 1){
			cout << (is_prime(x) ? "YES" : "NO") << endl;
				}
		else {
		cout << (k == 2 ? "YES" : "NO") << endl;

		}
		}

	return 0;
		
}
