#include <bits/stdc++.h>


using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector <int> a(n);
vector<int> res;
for (int i = 0; i < n ; i++) cin >> a[i];

int counter = 1;
for (int i = 0; i < n - 1; i++) {
	if (a[i] == a[i+1]){
		counter++;
	}
	else if (a[i] != a[i+1]){
		res.push_back(counter);
		counter = 1;
	}
}
res.push_back(counter);

bool notfound = false;
for (int i = 0; i <= res.size() - 1; i++){
	if (res[i] == 1) notfound = true;	
}

vector<int> final;
int sum = 0;
if (!notfound){
for (int i = 0; i <= res.size() - 1; i++){
	final.push_back(res[i] + sum);
	for (int j = 1; j < res[i]; j++){
		final.push_back(j + sum);
	}
	sum += res[i];
}

}
if (notfound) cout << -1 << endl;
else{
for (int x : final){
	cout << x << " ";
}
cout << endl;
}
}

return 0;
}
