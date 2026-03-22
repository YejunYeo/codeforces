#include <bits/stdc++.h>

using namespace std;
long long helper (int big, int k){
	long long sum = 0;
	int diff = big - k + 1;
	for (int i = 1; i <= diff ; i++){
		sum += i;			
	}
	return sum;	
}

int main(){
int t;
cin >> t;
while(t--){
int n,k,q;
cin >> n >> k >> q;
vector <int> a(n);
for (int i = 0; i < n ; i++){
cin >> a[i];
}
vector <int> consecs;

int length = 0;
for (int i = 0; i < n ; i++){
	if(a[i] <= q){
		length +=1;	
	}
	else {
		consecs.push_back(length);
		length = 0;
	}
}
consecs.push_back(length);

long long  final_sum = 0;
for (int i = 0; i < consecs.size(); i++){
	final_sum += helper(consecs[i], k);
}
cout << final_sum << endl;
}

}
