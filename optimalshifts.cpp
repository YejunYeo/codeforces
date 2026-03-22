#include <bits/stdc++.h> 

using namespace std;


int main(){

	int t;
	cin >> t;
	while (t--){

		int n;
		string s;
		cin >> n >> s;
		int maxim;
		vector<int> ones;
		for (int i = 0; i < n; i++){
			if(s[i] =='1'){
				ones.push_back(i);
			}

		}

		int maxGap = 0;

		for (int j = 1; j < ones.size(); j ++){
			maxGap = max(maxGap, ones[j] - ones[j - 1] - 1);
		}

		
		int circl = ones[0] + (n - 1 - ones.back());



		maxim = max(circl, maxGap);


		cout << maxim << "\n";
	}

	return 0;

}
