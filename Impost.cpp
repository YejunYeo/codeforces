#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
for (int i = 0; i < t ; i++){
	int counter = 0;
	string r;
	cin >> r;
	if (r[0] == 'u'){
		r[0] = 's';
		counter += 1;
	}

	for (int j = 0; j < r.size() - 1; j++ ){
		if (r[j] == 'u' && r[j+1] == 'u'){
			r[j+1] = 's';
			counter += 1;
		}
	}
	if (r [r.size() - 1] == 'u'){
		counter += 1;
	}

	cout << counter << endl;
}

return 0;

}
