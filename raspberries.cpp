#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
	bool div4 = false;
        int counter = 0;
	int counter2 = 0;
        for (int i = 0; i < n; i++){
        if (a[i] % 4 == 0) div4 = true;
 	if (a[i] % 2 == 0) counter++;
	if (a[i] % 4 == 3) counter2++;
	}

	if (k == 4 && div4) cout << 0 << endl;
	else if (k == 4 && !div4  && counter >= 2) cout << 0 << endl;
	else if (k == 4 && counter2 > 0) cout << 1 << endl;
	else if (k == 4 && counter == 1) cout << 1 << endl;
	else if (k == 4 && counter == 0) cout << 2 << endl;
        else {
            for (int j = 0; j < 5; j++){
                for (int i = 0; i < n; i++){
                    if ((a[i] + j) % k == 0){
                        cout << j << endl;
                        goto done;
                    }
                }
            }
            done:;
        }
    }
    return 0;
}
