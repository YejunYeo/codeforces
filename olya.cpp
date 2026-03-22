#include <bits/stdc++.h>

using namespace std;

int main(){

int t;
cin >> t;
while(t--){
int n;
cin >>n;
vector <long long> second_els(n);
long long  min_1st = 25524410399;
for (int i = 0; i < n; i++){
	int m;
	cin >> m;
	vector <int> a(m);
	for (int j = 0; j < m; j++){
		cin >> a[j];
	}
	sort(a.begin(), a.end());
	second_els[i] = a[1];
	min_1st = min(min_1st,(long long)a[0]);
}

sort(second_els.begin(), second_els.end());
long long sum = accumulate(second_els.begin() + 1, second_els.end(), 0LL);
sum += min_1st;

cout << sum << endl;

}
	return 0;
}
