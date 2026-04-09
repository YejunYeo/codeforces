#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,m;
cin >> n >> m;
int a[n][m] = {};
int nc = 0;
vector <int> negativevals;
int sum = 0;
int smallestp = 101;
int smallestn = -101;
for (int i = 0; i < n; i++){
	for (int j = 0; j < m; j++){
		cin >> a[i][j];
		if (a[i][j] <= 0) {
			nc++;
			sum += abs(a[i][j]);
			smallestn = max(smallestn, a[i][j]);
		}
		else {
			sum+= a[i][j];	
			smallestp = min(smallestp, a[i][j]);	
		}
	}
}


if (nc % 2 == 1){
smallestn = abs(smallestn);

sum = sum - (2 * min(smallestn, smallestp));

}

cout << sum << endl;
}
}
