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
	vector <int> prefix;
	vector<int> suffix;
	unordered_set<char> st;
	for (int i = 0; i < n; i ++){
		st.insert(s[i]);
		prefix.push_back(st.size());
	}
	st.clear();

	for (int i = n - 1; i >= 0; i --){
		st.insert(s[i]);
		suffix.push_back(st.size());
	}

	reverse(suffix.begin(), suffix.end());
	int ans = -1;
	for (int i = 0; i < n - 1; i ++){
		ans = max (ans,prefix[i] + suffix[i + 1]);
	}

	cout << ans << endl;

	
}
return 0;
}
