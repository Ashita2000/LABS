#include <bits/stdc++.h>
using namespace std;

struct node {
    int n;
    int degree;
    struct node* parent;
    struct node* child;
    struct node* sibling;
};

node* makeBinHeap();
node* minNode(node *x);
node* mergeBinHeap(node *x,node *y);
node* UnionBinHeap(node *x,node *y);


node* makeBinHeap(){
	return (node* np=Null);
}

node* minNode(node* x){
	node *y=NULL;
	int min=INT_MAX;

	if(x==NULL){
		cout<<"No node in Binomial Heap";
		return x;
	}

	node* p=x;
	while(p->sibling !=NULL){
		if((p->sibling)->n < min){
			min=p->sibling)->n;
			y=p;
		}
		p= (p->sibling);
	}
	return y;
}

node* mergeBinHeap(node* h1,node* h2){
	node *h=makeBinHeap();
	node* z=h2,*y=h1,*a=NULL;
	//y=h1;
	//z=h2;

	if(y==NULL)
		h=z;
	else{
			if(z!=NULL && y->degree <= z->degree)
				h=y;
			else if(z!=NULL && y->degree > z->degree)
				h=z;
			else
				h=y;
		}

	while(y!=NULL && z!=NULL){
		if(y->degree < z->degree)
			y=y->sibling;
		else if(y->degree == z->degree){
			a=y->sibling;
			y->sibling=z;
			y=a;
		}
		else{
			a=z->sibling;
			z->sibling=y;
			z=a;
		}
	}
	}
	return h;
}

node* UnionBinHeap(node *h1,node *h2){
	node *h=mergeBinHeap(h1,h2);
	if(h==NULL)
		return NULL;

	node * curr=h;
	node * prev=NULL;
	node *next=h->sibling;

	while(next!=NULL){
		
	}
	

}



int main(int argc, char const *argv[])
{
	//step 1: makeBinHeap : memeory allocation
		
	return 0;
}