#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,k;
cin >> n >> k;
vector <int> a(n);
vector<int> b(n);
for (int i = 0; i < n; i++){
cin >> a[i];
}
for (int i = 0; i < n; i++){
a[i] = a[i] % k;
}
for (int i = 0; i < n; i++){
b[i] = i;
}
vector <pair<int,int>> v(n);
for (int i = 0; i < n; i++){
v[i] = {a[i],b[i]};
}

vector<int> multiples;
for(int i = 0; i < n; i++){
	if(v[i].first == 0){
		multiples.push_back(v[i].second);
	}
}

sort(v.begin(),v.end(), [](const pair<int, int> a, const pair<int, int> b){
		if (a.first == b.first) return a.second < b.second;
		return a.first > b.first;
		});

vector<int> non_multiples;
for (int i = 0; i<n;i++){
	if(v[i].first == 0){
		continue;
	}
	else{
		non_multiples.push_back(v[i].second);
	}
	
}

multiples.insert(multiples.end(),non_multiples.begin(),non_multiples.end());
for (int i = 0; i < multiples.size(); i++){
cout << multiples[i] + 1 << " ";
}
cout << endl;

}
return 0;
}
