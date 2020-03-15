#include<bits/stdc++.h>
using namespace std;

struct node
{
	int key;
	node *parent;
	node *left;
	node *right;
	int color; //0: black, 1: rednode
};

node * root=NULL;
node * nill=NULL;

node * nodeInsert(int data);
void fixInsert(node *x);
void leftRotate(node *x);
void rightRotate(node *x);
void printTree(node *x);


void printTree(node *x)
{
	if(x != nill){
		printTree(x->left);
		printf("%d\t", x->key);
		printTree(x->right);
	}

}

node * nodeInsert(int data){
	node *x,*y,*z;
	z=new node();
	z->key=data;
	z->left=z->right=nill;
	z->color=1;

	x=root;
	y=nill;

	/* 
	 * Go through the tree untill a leaf(NILL) is reached. y is used for keeping
	 * track of the last non-NILL node which will be z's parent.
	 */
	while(x != nill){
		y = x;
		if(z->key <= x->key){
			x = x->left;
		}
		else{
			x = x->right;
		}
	}

	if(y == nill){ // initially empty
		root = z;
	}
	else if(z->key <= y->key){
		y->left = z;
	}
	else{
		y->right = z;
	}

	z->parent = y;

	fixInsert(z);
}


void fixInsert(node *z){
	/*
 * Here is the psudocode for fixing violations.
 * 
 * while (z's parent is RED)
 *		if(z's parent is z's grand parent's left child) then
 *			if(z's right uncle or grand parent's right child is RED) then
 *				make z's parent and uncle BLACK
 *				make z's grand parent RED
 *				make z's grand parent new z as it may violate property 2 & 4
 *				(so while loop will contineue)
 *			
 *			else(z's right uncle is not RED)
 *				if(z is z's parents right child) then
 *					make z's parent z
 *					left rotate z
 *				make z's parent's color BLACK
 *				make z's grand parent's color RED
 *				right rotate z's grand parent
 *				( while loop won't pass next iteration as no violation)
 *
 *		else(z's parent is z's grand parent's right child)
 *			do exact same thing above just swap left with right and vice-varsa
 *
 * At this point only property 2 can be violated so make root BLACK
 */
	while(z->parent->color == 1){

		/* z's parent is left child of z's grand parent*/
		if(z->parent == z->parent->parent->left){

			/* z's grand parent's right child is RED */
			if(z->parent->parent->right->color == 1){
				(z->parent->color)= (z->parent->parent->right->color) = 0;
				z->parent->parent->color = 1;
				z = z->parent->parent;
			}

			/* z's grand parent's right child is not RED */
			else{
				
				/* z is z's parent's right child */
				if(z == z->parent->right){
					z = z->parent;
					leftRotate(z);
				}

				z->parent->color = 0;
				z->parent->parent->color = 1;
				rightRotate(z->parent->parent);
			}
		}

		/* z's parent is z's grand parent's right child */
		else{
			
			/* z's left uncle or z's grand parent's left child is also RED */
			if(z->parent->parent->left->color == 1){
				z->parent->color = 0;
				z->parent->parent->left->color = 0;
				z->parent->parent->color = 1;
				z = z->parent->parent;
			}

			/* z's left uncle is not RED */
			else{
				/* z is z's parents left child */
				if(z == z->parent->left){
					z = z->parent;
					rightRotate(z);
				}

				z->parent->color = 0;
				z->parent->parent->color = 1;
				leftRotate(z->parent->parent);
			}
		}
	}

	root->color = 0;
}

void leftRotate(node *x){
	node *y;
	
	/* Make y's left child x's right child */
	y = x->right;
	x->right = y->left;
	if(y->left != nill){
		y->left->parent = x;
	}

	/* Make x's parent y's parent and y, x's parent's child */
	y->parent = x->parent;
	if(y->parent == nill){
		root = y;
	}
	else if(x == x->parent->left){
		x->parent->left = y;
	}
	else{
		x->parent->right = y;
	}
	
	/* Make x, y's left child & y, x's parent */
	y->left = x;
	x->parent = y;
}

void rightRotate(node *x){
	struct node *y;

	/* Make y's right child x's left child */
	y = x->left;
	x->left = y->right;
	if(y->right != nill){
		y->right->parent = x;
	}

	/* Make x's parent y's parent and y, x's parent's child */
	y->parent = x->parent;
	if(y->parent == nill){
		root = y;
	}
	else if(x == x->parent->left){
		x->parent->left = y;	
	}
	else{
		x->parent->right = y;
	}

	/* Make y, x's parent and x, y's child */
	y->right = x;
	x->parent = y;
}

int main(int argc, char const *argv[])
{
	nill= new node();
	nill->color=0;

	root=nill;

	int n,input;

	cout<"\n*** RB Tree creation ***";
	cout<<"\n\nEnter number of nodes to insert :";
	cin>>n;

	while(n--){
		cin>>input;
		nodeInsert(input);
	}

	cout<<"\n\n*** Print Tree***\n\n";

	printTree(root);

	return 0;
}
