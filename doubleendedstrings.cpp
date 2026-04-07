#include <bits/stdc++.h>

using namespace std;
int main(){
int t;
cin >> t;

while(t--){
string a;
string b;
cin >> a >> b;

int lena = a.size();
int lenb = b.size();



int maxnum = 0;

for (int i = 0; i < lena; i++){
	string denom = "";
	denom += a[i];
	if (b.find(denom) == string::npos){
		continue;
	}
	else maxnum = max(maxnum, (int)denom.size());

	for (int j = i + 1; j < lena ; j++){
		denom += a[j];
		if (b.find(denom) == string::npos){
		break;
		}
		else{      
			maxnum = max(maxnum, (int)denom.size()); 
		}
		}
		
}

int del1 = lena - maxnum;
int del2 = lenb - maxnum;

cout << del1 + del2 << endl;

}

}
