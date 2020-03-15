#include<iostream>
using namespace std;

void countSort(int *a,int n){
    int maximum=INT_MIN;
    for(int i=0;i<n;i++)
        maximum=max(maximum,a[i]);

    int temp[maximum+1]={0};

    for(int i=0;i<n;i++)
        temp[a[i]]++;

    int i=0,k=0;
    while(i<=maximum){
        if(temp[i]){
            a[k++]=i;
            temp[i]--;
        }
        else
            i++;
    }
}

int main(int argc, char const *argv[])
{
	int a[]={0,1,6,83,6,4,8,3};
	int n=sizeof(a)/sizeof(int);

	countSort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<", ";

	return 0;
}
