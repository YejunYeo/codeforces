#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;

while (t--){
long long  n,c,k;
cin >> n >> c >> k;
vector <long long> a(n);
for (int i = 0; i < n; i++) cin >> a[i];

long long sum = c;
long long counter = 0LL;

for (int i  = 0; i < n; i++){
	if (a[i] > c){
		continue;
	}
	else{
	sum += a[i];
	counter += (sum - a[i]);
	counter = min(k, counter);
	c = sum;
	}
}

cout << sum + counter << endl;

}
return 0;
}
