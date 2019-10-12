// Hackerearth problem:
// Solved by Rohan Meena

#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
//const int maxn = 1e6 + 17;
int main(){
	//ios::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		bool done = 0;
		if(x == y)
			cout << "1\n";
		else{
			for(int i = 2; !done && i < 100; i++)
				if(pow(x / double(i), i) >= y){
					cout << i << endl;
					done = 1;
			}
			if(!done)
				cout << "-1 " << endl;
		}
	}
}