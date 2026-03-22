#include <bits/stdc++.h>

using namespace std;
int main(){
int t;
cin >> t;
while(t--){
string s;
cin >> s;
int cnt1 = count(s.begin(), s.end(), '1');
int cnt0 = count(s.begin(), s.end(), '0');

int len = s.size();
int buff = 0;

if(cnt1 == cnt0){
	cout << 0 << endl;
}
if (cnt1 != cnt0){
for (int i = 0; i < len; i++){
	 if (s[i] == '1'){
		if (cnt0 == 0) cout << cnt1 << endl;
		cnt0--;
	}
	else if (s[i] == '0'){
		if (cnt1 == 0) cout << cnt0 << endl;
		cnt1--;
	}

}
}
}
return 0;
}
