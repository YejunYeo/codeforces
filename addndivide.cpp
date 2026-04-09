#include <bits/stdc++.h>

using namespace std;



int main(){
int t;
cin >> t;
while(t--){
int a,b;

cin >> a >> b;


long long operations = INT_MAX;

bool flag = true;

long long addition = 0LL;
long long divisions = 0LL;


for(int i = 0; i < 32; i++){
	if (b == 1) {
		b++;
		addition++;
		
	}

	long long cur = a, divisions = 0;
	while (cur > 0) { cur /= b; divisions++; }
	operations = min (operations,addition + divisions); 	
	addition++;
	b++;

}

cout << operations << endl;

}
return 0;
}
