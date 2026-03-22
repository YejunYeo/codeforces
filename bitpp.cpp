#include <bits/stdc++.h>

using namespace std;


int main (){

	int x = 0;

	int inputs = 0;
	cin >> inputs;
	
	int counter = 0;

	for (int i = inputs; i > 0 ; i--){
		string s;
		cin >> s;
		for (int j = 0; j <2; j++){
			if (s[j] == '+' && s[j+1] == '+'){
				counter = counter + 1;
			}
			if (s[j] == '-' && s[j+1] == '-'){
				counter = counter - 1;
			}


			
	}			
	}

	cout << counter;
	return 0;
}



