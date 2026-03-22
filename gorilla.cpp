#include <bits/stdc++.h>

using namespace std;

int main(){

int t;
cin >> t;
while (t--){
int n,k;
cin >> n >> k;
vector<int> a(n);
for (int i = 0; i < n; i++){
	cin >> a[i];
}
sort(a.begin(), a.end());

vector <int> cnt = {1};
for (int j = 1; j < n; j++){
	if (a[j-1] == a[j]){
		cnt.back()++;
	}
	else {
		cnt.push_back(1);
	}
}

sort (cnt.begin(),cnt.end());
int len = cnt.size();
bool flag = false;
for (int i = 0; i < len; i++){
	if (cnt[i] <= k){
		k -= cnt[i];
	}
	else{
		cout << len - i << endl;
		flag = true;
		break;
	}

}

if (!flag) cout << "1" << endl;
}

return 0;
}
