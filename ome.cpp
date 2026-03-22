#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;

while (t--){
int n,m;

long long h;
cin >> n >> m >> h;
vector <long long> a(n);
vector <long long> b(n);
vector <int> leu(n, -1);

int lc = -1;
for (int i = 0; i < n; i++){
	cin >> a[i];
}

b = a;

int ai;
long long ci;
for (int j = 0; j < m; j++){
	cin >> ai >> ci;
	ai--;
	if (leu[ai] < lc) a[ai] = b[ai];
		a[ai] +=  ci;
	
	if (a[ai] > h){
		lc = j;
		a[ai] = b[ai];
	}
	leu[ai] = j;
	
	}


for (int i = 0; i < n; i++){
	if (leu[i] < lc) a[i] = b[i];
	cout << a[i] << " ";
}
cout << "\n";
}

return 0;

}
