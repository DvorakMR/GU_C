#include <utility.h>
#include <ansi_c.h>
struct node { //struct for nodes
	int data;	//Data inside node
	struct node *parent; //parent of node
	struct node *left; //left child of node
	struct node *right; //right child of node
};

struct node *new_node(int data) { //Create a new node
	struct node *temp = (struct node *)malloc(sizeof(struct node)); //Allocate a temporary node 
	temp->data = data; //Insert new given data to node with name "temp"
	temp->parent = temp->left = temp->right = NULL; //set parent and children to NULL
	return temp; //Return temp node
}

struct node* insert(struct node* node, int data) { //Inserting Nodes into tree
	if (node == NULL) return new_node(data); //If first node we call create node and return temp

	if (data < node->data) { //if new data is less than parent node
		struct node* left_child = insert(node->left, data); //create left_child node recursivly
		node->left = left_child; //make left point at left_child node
		left_child->parent = node; //make left_child parent variable point to parent (which is node)
	}
	else if (data > node->data) { //if data is higher than parent node: Same procedure as "left" but with "right" changes
		struct node *right_child = insert(node->right, data);
		node->right = right_child;
		right_child->parent = node;
	}
	return node;
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
	struct node *root = NULL;
	root = insert(root, 5);
 	insert(root, 2);
	insert(root, 3);
    insert(root, 4);
    insert(root, 7);
    insert(root, 6);
    insert(root, 8);
	print_tree(root);
	deallocate_tree(root);
	while(!KeyHit());
	return 0;
}
