#include <bits/stdc++.h>

using namespace std;

int main(){

int t;
cin >> t;
while(t--){
long long  n,k,b,s;
cin >> n >> k >> b >> s;

vector <long long> a(n);
bool notfound = false;

if (s/k < b){
	notfound = true;
}
else if(s/k == b){
a[n-1] = s;
}
else if (s <= n * (k -1) +(b*k)){
a[0] = k * b;
s -= k*b;
for (int i = 0; i < n; i++){
if (s < k-1){
a[i] += s;
break;
}
else{
a[i] += (k-1);
s -= k-1;
}
}
}

else {
	notfound = true;

}

if (notfound) cout << -1 << endl;
if (!notfound){
	for (long long x: a){
		cout << x << " ";
	}
	cout << endl;
}

}
return 0;
}
