#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	while (t--){
		int counter = 0;
		int n = 0, s = 0;
		cin >> n >> s;
		for (int i = 0; i < n ; i++){
			int dx, dy, x , y;
			cin >> dx >> dy >> x >> y;
			if ( x == y && dy == dx) counter += 1;
			else if (x + y == s) counter += 1;
		}
	cout << counter << endl;
	}

	return 0;


}
