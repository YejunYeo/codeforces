#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
	int counter = 0;
	int n;
	int maxim = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector <int> max(n);
	
	for (int i = 0; i < n ; i++){
		if (a[i] > maxim) {
			max[i] = a[i];
			maxim = a[i];}
		else max[i] = maxim;
	}

	for (int i = 1; i < n; i+=2){
		a[i] = max[i];
	}

	for (int i = 0; i < n - 1; i+=2){
		if (a[i] >= a[i+1]){
			int decrement = 0;
			decrement = a[i] - a[i+1] + 1;
			counter = counter + decrement;
			a[i] = a[i] - decrement;
		}
	}
	for (int i = 1; i < n - 1; i +=2){
		if(a[i] <= a[i+1] ){
			counter = counter + a[i + 1] - a[i] + 1;
		}

		}
	cout << counter << endl;

	}
	return 0;

}


