#include <iostream>
#include<algorithm>
using namespace std;

bool binary(int *a,int l,int h,int key){
	if(l>h)
		return false;
	int mid=(l+h)/2;
	if(a[mid]==key)
		return true;
	else if(a[mid]>key)
		binary(a,l,mid-1,key);
	else
		binary(a,mid+1,h,key);
}

int main(int argc, char const *argv[])
{
	int n,a[]={0,1,6,83,6,4,8,3},key;

	n=sizeof(a)/sizeof(int);
	cin>>key;

	sort(a,a+n);
	if(binary(a,0,n-1,key))
		cout<<"Present";
	else
		cout<<"Not present";
	return 0;
}
