#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while (t--){
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++){
	cin >> a[i];
}
bool flag = false;
for (int i = 0; i < n - 1; i++){
	for (int j = i + 1; j < n; j++){
		if( (a[j] % a[i]) % 2 == 0){
			cout << a[i] << " " << a[j] << endl;
			flag = true;
			break;
		}
		
	}
	
	if (flag) break;
}

if (!flag) cout << -1 << endl;

}
return 0;
}
