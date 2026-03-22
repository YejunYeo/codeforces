#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){
int n;
cin >> n;
vector <int> a(n);
vector <int> b(n);
for (int i = 0; i < n ; i++){
	cin >> a[i];
}

for (int i = 0; i < n ; i++){
	cin >> b[i];
}

a.push_back(-1);
b.push_back(-1);
vector<int> sub_arr1 (n * 2 + 1);
vector<int> sub_arr2 (n * 2 + 1);

int mx1 = *max_element(a.begin(), a.end());
int mx2 = *max_element(b.begin(), b.end());

int counter = 1;

for (int i = 1; i < n + 1; i++){
	if (a[i-1] == a[i]){
		counter++;
	}
	else{
		sub_arr1[a[i-1]] = max(sub_arr1[a[i-1]], counter);
		counter = 1;
	}
}
int counter2 = 1;
for (int i = 1; i < n + 1; i++){
	if (b[i-1] == b[i]){
		counter2++;
	}
	else{
		sub_arr2[b[i-1]] = max (sub_arr2[b[i-1]],counter2);
		counter2 = 1;
	}
}

for (int i = 1; i < 2*n + 1; i++){
	sub_arr1[i] += sub_arr2[i];
}

int idx = *max_element(sub_arr1.begin(), sub_arr1.end());

cout << idx << endl;

}
return 0;
}
