#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll n, k, temp;
	vector<ll> arr;
	cin >> n >> k;
	while(n--){
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	for(int i=0; i<k;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
