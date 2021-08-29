#include<bits/stdc++.h>>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		vector<char> v;
		for(int i=0;i<=a.length();i+=2){
			for(int j=0;j<a[i+1]-'0';j++)
			v.push_back(a[i]);
		}
		for(int i=0;i<v.size();i++){
			cout << v.at(i);
		}
		cout << endl;
	}
}
