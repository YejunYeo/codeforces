#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n,k;
cin >> n >> k;

string s;
cin >> s;
vector<int> res;

int counter = 0;

int mini = 9999999;
vector <int> whites (n + 1);

for (int i = 0; i < n; i ++){
	whites[i + 1] = whites[i] + (s[i] == 'W'); 
}

for (int i = 0; i < n - k + 1; i++){
	mini = min (mini, (whites [i + k] - whites[i]));

}
cout <<  mini << endl;

}
return 0;
}
