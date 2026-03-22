#include <bits/stdc++.h>



using namespace std;

int main(){
	int t; 
	cin >> t;
	while (t--){
	
	int n;
	cin >> n;
	vector<int> a(n);
	int num;
	for (int i = 0; i < n; i++){
		cin >> num;
		a[i] = num;
	}

	cout << min(a[0], a[1]) + a[0] << endl;

	}

	return 0;

}
