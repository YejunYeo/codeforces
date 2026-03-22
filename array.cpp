#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector< long long> a(n);
for (int i = 0; i < n; i++) cin >> a[i];
vector <long long> res(n);

for (int i = 0; i < n; i++){

int greater = 0;
int smaller = 0;

	for (int j = i; j < n; j++){
		if (a[j] > a[i]){
			greater +=1;
		}
		else if (a[j] < a[i]){
			smaller +=1;
		}
	}

res[i] = max(greater,smaller);
	
}

for (int i = 0; i < n; i++){
	cout << res[i] << " ";
}
cout << endl;

}
return 0;

}
