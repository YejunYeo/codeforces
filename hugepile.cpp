#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){
double n,k;
cin >> n >> k;
bool flag = true;
int counter  = 1;

if (n == k){
       
flag = false;
cout << 0 << endl;
}
	while (flag){
	n  /= 2;
	double left = floor(n);
	double right = ceil(n);
	if (k > right) {
	       	flag = false;
		cout << -1 << endl;
		break;
	}
	else if (k == left || k == right){
		cout << counter << endl;
		flag = false;
	}
	else{
		counter += 1;
	}	
	}

}
return 0;

}
