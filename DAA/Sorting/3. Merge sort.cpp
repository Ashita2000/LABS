#include<iostream>
using namespace std;
#define ll long long

void merge(int *a,int s,int e){
	int mid=(s+e)/2;
	int i=s,k=0,j=mid+1;
	int *temp=new int[100];
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid){
		temp[k++]=a[i++];
	}


	while(j<=e){
		temp[k++]=a[j++];
	}

    k=0;
	for(int i=s;i<=e;i++)
		a[i]=temp[k++];

    delete []temp;
}

void mergeSort(int *a,int s,int e){
	//base case
	if(s>=e)
		return;
	//recursion
	//1. divide
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);

	//merge
	merge(a,s,e);

}

int main(int argc, char const *argv[])
{
	int a[]={0,1,6,83,6,4,8,3};
	int n=sizeof(a)/sizeof(int);

	mergeSort(a,0,n-1);

	for(int i=0;i<n;i++)
		cout<<a[i]<<",";

	return 0;
}
