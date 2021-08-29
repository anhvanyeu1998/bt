#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string m;
		cin >> m;
		bool check = true;
		for(int i=1;i<m.length();i++){
			if(m[i]<m[i-1]){
				check = false;
				break;
			}
		}
		if(check){
			cout << "YES" << endl;
 		}
 		else{
 			cout << "NO" << endl;
		 }
	}
}
