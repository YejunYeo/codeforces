#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,r,b;
cin >> n >> r >> b;

string s = "";
int remainder = r % (b+1);
int r_num = r / (b+1);

for ( int i = 0; i < b + 1; i++){
	for (int j = 0; j < r_num; j++){
		s+='R';
	}
	if (remainder > 0) s+='R';
	remainder--;
	if (i != b){
	s +='B';
	}
}
cout << s << endl;
}
}
