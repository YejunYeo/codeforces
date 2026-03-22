#include <bits/stdc++.h>

using namespace std;


int main(){

int t;
cin >> t;

for (int i = 0; i < t; i++){
	int n;
	int a;
	cin >> n >>  a;
	vector<int> v(n);
	int l = 0, r = 0;
	for (int j = 0; j < n; j++){
		cin >> v[j]; 
		if (a > v[j]) ++l;
		if (a < v[j]) ++r;
	}

	cout << (l > r ? a - 1 : a + 1) << endl;
}
return 0;

}
