#include <bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >> t;
while (t--){
int w,h;
cin >> w >> h;
int xb;
cin >> xb;
vector <int> horizontalb(xb);
for (int i = 0; i <xb ; i++){
	cin >> horizontalb[i];
}
int xt;
cin >> xt;
vector <int> horizontalt(xt);
for (int i = 0; i <xt ; i++){
	cin >> horizontalt[i];
}

int yl;
cin >> yl ;
vector <int> verticall(yl);
for (int i = 0; i <yl ; i++){
	cin >>verticall[i];
}
int yr;
cin >> yr;
vector <int> verticalr(yr);
for (int i = 0; i <yr; i++){
	cin >> verticalr[i];
}
int maxhb = ranges::max(horizontalb);
int maxht = ranges::max(horizontalt);
int maxvl = ranges::max(verticall);
int maxvr = ranges::max(verticalr);

int minhb = ranges::min(horizontalb);
int minht = ranges::min(horizontalt);
int minvl = ranges::min(verticall);
int minvr = ranges::min(verticalr);

int hblen = maxhb-minhb;
int htlen = maxht - minht;
int vllen = maxvl - minvl;
int vrlen = maxvr - minvr;

int longerh = max(hblen,htlen);
int longerv = max(vllen, vrlen);

long long  v1 = (long long) longerh * h;
long long  v2 =(long long) longerv * w;

cout << max(v1,v2) << endl;

}
return 0;
}
