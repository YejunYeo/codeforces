#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){

int n,k;
cin >> n >> k;

vector <int> a(n);
for (int i = 0; i < n; i ++){
	int ai;
	cin >> ai;
	a[i] = ai;
}
sort(a.begin(), a.end());

vector <int> b(k);
for (int j = 0; j < k; j++){
	int bi;
	cin >> bi;
	b[j] = bi;
}
sort(b.begin(), b.end());

long long total = accumulate(a.begin(), a.end(), 0LL);

for(int i = 0; i < k; i++){
	if((int)a.size() - b[i] >= 0){
	total -= a[a.size() - b[i]];
	a.resize(a.size() - b[i]);
	}

	else break;
}

cout << total << endl;
}
return 0;
}
