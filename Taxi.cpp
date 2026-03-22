#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> s(n);
	int counter_1 = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	int counter_4 = 0;
	int flag = 0;
	int ans = 0;
	for (int i = 0; i < n; i++){
		cin >> s[i];
	}

	for (int i = 0; i < n; i++){
		if (s[i] == 4) counter_4 += 1;
	}

	for (int i = 0; i < n; i++){
		if (s[i] == 3) counter_3 += 1;
	}


	for (int i = 0; i < n; i++){
		if (s[i] == 2) counter_2 += 1;
	}


	for (int i = 0; i < n; i++){
		if (s[i] == 1) counter_1 += 1;
	}
	counter_1 = max (0,  counter_1 - counter_3);
	if (counter_2 % 2 == 1) flag = 1 ;
	
	if (flag == 0) ans = counter_4 + counter_3 + (counter_2 / 2)
	       	+ (counter_1 + 3) / 4;
	else ans = counter_4 + counter_3 + (counter_2 + 1) / 2 +
	       	(counter_1 - 2 + 3) / 4;

cout << ans;

return 0;

}
