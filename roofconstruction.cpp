#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
int lb = __lg(n-1);
lb = 1 << lb;

vector<int> res(n);
for (int i = 1; i <= lb - 1; i++){
	res[i-1] = i;
}
res[lb-1] = 0;
res[lb] = lb;

for (int i = lb + 1; i < n; i++){
res[i] = i;
}

for (int x:res){
	cout << x << " ";
}
cout << endl;

}
return 0;
}
