#include <bits/stdc++.h>
using namespace std;


int main(){
long long n,d;
cin >> n >> d;
vector<long long> p(n);
for (int i = 0; i < n ; i++){
	cin >> p[i];
}

sort(p.begin(), p.end(), [](int a, int b){
	return a > b;
});

int i = 0;
int counter = 0;
bool flag = true;
int initn = n;

while(flag){

if (i == initn) break;
int reference = (d/p[i]) + 1;
if (p[i] > d){
	counter++;
	n--;
	i++;
	continue;
}
else if (p[i] * n <= d){
	break;
}
else{
i++;
counter++;
n -= reference;
}

}

cout << counter << endl;
return 0;
}
