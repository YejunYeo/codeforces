#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector<pair <int,int>> a(n);
for (int i = 0; i < n; i++){
       	cin >> a[i].first;
	a[i].second = i;
}
sort(a.begin(),a.end(), [](const auto& a, const auto& b ){
			return a.first > b.first;});

vector <int> v(n);
int counter = 1;
for (int i = 1; i < n + 1; i +=2){
	v[a[i-1].second] = counter * -1;
	if (i == n) break;
	v[a[i].second] = counter;
	counter++;
}
long long sum = 0LL;
for (int i = 0; i < n; i++){
	sum += (long long)a[i].first * abs(v[a[i].second]);
}
sum = sum * 2;

cout << sum << endl;
cout << 0 << " ";
for (auto x: v) cout << x << " ";
cout << endl;
}
return 0;
}
