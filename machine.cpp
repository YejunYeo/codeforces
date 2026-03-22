#include <bits/stdc++.h>


using namespace std;


int helper (long long a, string m){
	int len = m.size();
	bool hasB = false;
	for (int i = 0; i < len; i++){
		if(m[i] == 'B') hasB = true;
	}
	if (!hasB){
		return a;
	}

	int counter = 0;
	while (a>0){
	for (int i = 0; i < len ; i++) {
		if (a == 0) break;
		if (m[i] == 'A') a -= 1;
		if (m[i] == 'B') a /= 2;
		counter += 1;
	}
}
	return counter;

}
int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
        int n,q;
	cin >> n >> q;
	string m = "";
	cin >> m;
	for (int j = 0; j < q; j++){
	long long a;
	cin >> a;
	int res = helper (a, m);
	cout << res << " ";
	}
	}

	return 0;
}

