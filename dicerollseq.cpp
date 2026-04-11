#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector <int> a(n);
for (int i = 0; i < n; i++){
	cin >> a[i];
}


vector<int> dups;
int counter = 0;
int dup_counter = 1;

for (int i = 0; i < n - 1 ; i++){
	if ((a[i] + a[i+1]) == 7){
		counter ++;
		a[i+1] = a[i]+10;
	}

	else if (a[i] == a[i+1]){
		counter++;
		a[i+1] += 10;
	}
}
	


cout << counter << endl;
}


}
