#include <bits/stdc++.h>


using namespace std;

int main(){
int t;
cin >> t;

while (t--){
int n;
char c;
string s;
cin >> n >> c >> s;

vector <int> r;
vector <int> g;
vector <int> y;

for (int i = 0; i < n; i++){
	if (s[i] == 'r'){
		r.push_back(i + 1);
	}

	else if (s[i] == 'g'){
		g.push_back(i + 1);
	}


	else if (s[i] == 'y'){
		y.push_back(i + 1);
	}
}

int res = -1;
if (c == 'g') res = 0; 

int counter = 0;

int glen = g.size();

if (c == 'r'){

bool flag = true;

int ic = 0;
while(flag){
	if (g[counter] < r[ic]){
		counter++;
	}
	if (glen == counter){
		res = max (n - r[ic] + g[0], res);
		break;
	}
	else if (g[counter] > r[ic]){
		res = max(res, g[counter] - r[ic]);
		ic++;
	}
	if (ic == r.size()){
		break;
	}
}

}

if (c == 'y'){

bool flag = true;
int counter2 = 0;
int ic = 0;

while(flag){
	if (g[counter2] < y[ic]){
		counter2++;
	}
	if (glen == counter2){
		res = max (n - y[ic] + g[0], res);
		break;
	}
	else if (g[counter2] > y[ic]){
		res = max(res, g[counter2] - y[ic]);
		ic++;
	}
	if (ic == y.size()){
		break;
	}
}

}


cout << res << endl;


}
return 0;
}
