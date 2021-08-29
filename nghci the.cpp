#include<bits/stdc++.h>>
using namespace std;

int main(){
	int a;
	cin >> a;
	int dem=0;
	int arr[a];
	for(int i=0;i<a;i++){
		cin >> arr[i];
	}
	for(int i=0;i<a-1;i++){
		for(int j=i+1;j<a;j++){
			if(arr[i]>arr[j]) dem++;
		}
	}
	cout << dem;
}
