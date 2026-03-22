#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	string s;
	cin >> s;
	s = '1'+ s + '1';
	vector <int> a;
	for (int i = 0; i < n + 2; i++){
		if (s[i] == '1') a.push_back(i);
	}
	int length;
	length = a.size();

	vector <int> a_diff;
	for (int j = 0; j < length - 1; j++){
		int difference = 0;
		difference = a[j+1] - a[j];
		a_diff.push_back(difference);
	}
	
	int length2;
	length2 = a_diff.size();
	int counter = 0;
	for (int k = 0; k < length2; k++){
		counter += (a_diff[k] - 1) /3;
	}

	int init1s = count(s.begin() + 1, s.end() - 1, '1');
	cout << counter + init1s << endl;
		
	}
	return 0;

}
