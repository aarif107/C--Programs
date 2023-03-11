#include<bits/stdc++.h>

using namespace std;

int main(){

	int test;
	cin >> test;

	while(test--){
		int n;
		cin >> n;

		int speed, count=0, last=0;


		for (int i = 0; i < n; i++)
		{
			cin >> speed;

			if(i==0){
				last=speed;
			}
        	if(speed<=last){
        		count++;
        		last=speed;
        	}
		}

		cout << count << endl;
	}


	return 0;
}
