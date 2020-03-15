#include<bits/stdc++.h> 
using namespace std; 

struct node {
    int n;
    int degree;
    struct node* parent;
    struct node* child;
    struct node* sibling;
};

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter number of nodes (in power of 2) :";
	cin>>n;
	int a[n];
	cout<<"\nEnter "<<n<<" elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];

	
	return 0;
}