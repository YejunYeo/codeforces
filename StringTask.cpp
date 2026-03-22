#include <bits/stdc++.h>


using namespace std;


int main (){
	string s;
	cin >> s;
	
	string result;

	int len = s.length();
	for (int i = 0 ; i < len ; i++){
		if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y'){
			continue;
		}
		else{
			result = result + '.';
			result += towlower(s[i]);
		}
	
	}


	
	cout << result;

	return 0;	
	
}






