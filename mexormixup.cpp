#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while (t--){
int a,b;
cin >> a >> b;

int xora = 0;

if (a % 4 ==  0){
	xora = 0;
}

else if (a % 4 ==  3){
	xora = a;
}

else if (a % 4 ==  2){
	xora = 1;
}

else if (a % 4 == 1 ){
	xora = a -1;
}

int res = 0;


if (xora == b){
	res= a;
}

else if ((b ^ xora) == a ){
	res = a + 2;
}

else res = a + 1;

cout << res << endl;
	
}
return 0;
}
