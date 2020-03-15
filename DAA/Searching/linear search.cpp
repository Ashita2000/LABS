#include <iostream>
using namespace std;

bool linear(int *a,int n,int key){
	for(int i=0;i<n;i++)
		if(key==a[i])
			return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int n,a[]={0,1,6,83,6,4,8,3},key;
	
	n=sizeof(a)/sizeof(int);
	cin>>key;

	if(linear(a,n,key))
		cout<<"Present";
	else
		cout<<"Not present";
	return 0;
}