#include <utility.h>
#include <ansi_c.h>
struct node { //struct for nodes
	int data;	//Data inside node
	struct node *parent; //parent of node
	struct node *left; //left child of node
	struct node *right; //right child of node
};

struct node *new_node(int data) //Create a new node
{
	struct node *temp = (struct node *)malloc(sizeof(struct node)); //Allocate a temporary node 
	temp->data = data; //Insert new given data to node with name "temp"
	temp->parent = temp->left = temp->right = NULL; //set parent and children to NULL
	return (temp); //Return temp node
}


void print_tree(struct node *root) {
	    if (root != NULL) {
	        print_tree(root->left);
	        printf("Node: %d", root->data);
	        if(root->left != NULL) printf(" L: %d", root->left->data);
			if(root->right != NULL) printf(" R: %d", root->right->data);
				
			if (root->parent == NULL) {
	        	printf(" Parent: NULL \n");
				print_tree(root->right);
			}
	        else if (root->parent != NULL) {
	        	printf(" Parent: %d \n", root->parent->data);
	        	print_tree(root->right);
	    	}
	}
}
void deallocate_tree(struct node *root) {
   //do nothing if NULL NODE
    if (root==NULL) return;
    deallocate_tree(root->left);
    deallocate_tree(root->right);
    free(root);
}

int main() {
	struct node *root = new_node(1);
	root->parent = NULL;
	root->left = new_node(2);
	root->right = new_node(3);
	root->left->parent = root->right->parent = root;
	root->left->left = new_node(4);
	root->left->right = new_node(5);
	root->right->left = new_node(6);
	root->left->left->parent = root->left->right->parent = root->left;
	root->right->left->parent = root->right;
	
	print_tree(root);
	deallocate_tree(root);
	while(!KeyHit());
	return 0;
}