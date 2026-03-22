#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,m,a;

	cin >> n >> m >> a ;

	long long result1 = ceil(double(n)/a);
	long long result2 = ceil (double(m)/a);

	cout << result1 * result2 ;
	return 0;
}



