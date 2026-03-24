#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,x;
cin >> n >> x;
vector<int> a(n);
for (int i =0; i < n; i++) cin >> a[i];


int counter = 0;
long long smallest = 100000000000;
int biggest = -1;
for (int i = 0; i < n; i++){
if (a[i] < smallest){
	smallest = a[i];
}
if (a[i] > biggest){
	biggest = a[i];
}
if (biggest - smallest > 2 * x){
	counter++;
	biggest = a[i];
	smallest = a[i];
}


}

cout << counter << endl;


}
return 0;
}
