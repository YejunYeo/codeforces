#include <bits/stdc++.h>


using namespace std;

int main(){
	int problems;
	cin >> problems;

	int external_counter = 0;
	
	for (int i = 0; i < problems; i++){
		int counter = 0;

		for(int j = 0; j < 3; j ++){
			int binary;
			cin >> binary;
			
			if (binary == 1){
				counter = counter + 1;		
			}
	
			
		}

		if (counter >= 2){
			external_counter = external_counter + 1;
		}

		
	}

	cout << external_counter;
	

}

