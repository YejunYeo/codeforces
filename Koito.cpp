#include <bits/stdc++.h>

using namespace std;

int main(){
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++){
		int t;
		cin >> t;
		
		vector<int> sombra;

		for (int j = 0; j < t;j++ ){
			int s; 
			cin >> s;
			sombra.push_back(s);
		}

		if (sombra[0] == -1 && sombra.back() == -1){
			sombra[0] = 0;
			sombra.back() = 0;
		}

		else if (sombra[0] == -1){
			sombra[0] = sombra.back();
		}

		else if (sombra.back() == -1){

			sombra.back() = sombra[0];
		}

		replace(sombra.begin(), sombra.end(), -1, 0);
		cout << abs(sombra[0] - sombra.back()) << "\n";
		for (int i = 0; i < sombra.size(); i++){
			cout << sombra[i] << " ";
		}
		cout << "\n";
	}


	return 0;
}


