#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0,maxi=INT_MAX;
	cout<<"Enter number of elements :";
	cin>>n;
	int *a=new int [n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}

	vector<int> arr[n+1];

	for(int i=0;i<maxi;i++)
		cout<<arr[i];


	return 0;
}
