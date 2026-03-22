#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;

while (t--){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	long long sum = accumulate(a.begin(), a.end(), 0LL);
	int max = *max_element(a.begin(), a.end());
	int min = *min_element(a.begin(), a.end());

	int max_counter = count(a.begin(), a.end(), max);

	if (max_counter == 1 && max - min - 1 > k) cout << "Jerry" << endl;
	else if (max_counter > 1 && max - min > k) cout << "Jerry" << endl;
	else if ( sum % 2 == 1) cout << "Tom" << endl;
	else cout << "Jerry" << endl;
}	
}
