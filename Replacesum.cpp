#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int n = 0, q = 0;
		cin >> n >> q;
		vector<int> a(n);
		vector<int> b(n);
		for (int j = 0; j < n; j++){
			cin >> a[j];
		}

		for (int k = 0; k < n; k++){
			cin >> b[k];
		}

		for (int z = 0; z < n; z++){
			if (a[z] < b[z]){
				a[z] = b[z];

			}
		}

		for (int y = n - 2; y >= 0; y-- ){
			if (a[y] < a[y+1]){
				a[y] = a[y+1];
			}
		}

		vector<int> sum_arr(n + 1, 0);

		for (int j = 0; j < n; j++){
			sum_arr[j + 1] = a[j] + sum_arr[j];
		}

		for (int p = 0; p < q; p++){
			int result = 0;
			int l = 0, r = 0;
			cin >> l >> r;
			cout << sum_arr[r] - sum_arr[l - 1] << endl;
		}



	
	}
	return 0;
}
