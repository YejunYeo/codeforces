#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,p;
cin >> n >> p;
vector <long long> a(n);
for (int i = 0; i < n; i++){
cin >> a[i];
}
vector <long long> b(n);
for (int i = 0; i < n; i++){
cin >> b[i];
}
vector <pair<long long, long long>> v (n);
for (int i = 0; i < n; i++){
v[i] = {b[i], a[i]};
}
sort(v.begin(), v.end());
int counter = n - 1;

long long sum = 0LL;

for (int i = 0; i < n; i++){

	if (counter == 0){
		break;
	}
	else if (v[i].second <= counter && p > v[i].first) {
		sum += v[i].second * v[i].first;
		counter -= v[i].second;
	}

	else if (v[i].second <= counter && p <= v[i].first) {
		sum += (long long)counter * p;
		counter = 0;
	}
	else if (v[i].second > counter && p > v[i].first) {
		sum += v[i].first * counter;
		counter = 0;
	}
	
	else if (v[i].second > counter && p <= v[i].first) {
		sum +=(long long)p * counter;
		counter = 0;
	}

}
sum += p;

cout << sum << endl;


}
return 0;
}
