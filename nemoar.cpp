#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){
int n;
cin >> n;
vector <int> a(n);
for (int i = 0; i < n; i++){
	cin >> a[i];
}

int len = a.size();
int min = a[0];
for (int j = 1; j < n; j++){
	if (a[j] - 1 <= min) a[j] = 0;
	else min = a[j];
}

int zeros = count(a.begin(), a.end(), 0);

cout << n - zeros << endl;


}
return 0;
}
