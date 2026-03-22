#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){
int n;
cin >>n;
vector <int> a(n);
for (int i = 0; i<n; i++){
	cin >> a[i];
}
vector<int> cnt(n+1);
for (auto i : a) cnt[i]++;

if (cnt[0] == 0) cout << "NO" << endl;
else if (cnt[1] > 0 ) cout << "YES" << endl;
else cout<< (cnt[0] == 1? "YES" : "NO") << endl;
}

}
