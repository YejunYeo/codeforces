#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;

int a = 0;
int b = 0;


for (int i = 2; i <= sqrt(n); i++){
	if (n % i == 0){
		a = n/i;
		b = n - a;
		break;
	}	
}


if (a == 0 && b == 0){
 	a = 1;
	b = n - 1;
}

cout << a << " " << b<< endl;


}
return 0;
}
