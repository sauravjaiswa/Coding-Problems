//Printing nodes in level order traversal by changing lines
//Level order Traversal

#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	    int data;
	    Node *left, *right;
	    Node(int data)
		{
		    this->data = data;
		    this->left = this->right = NULL;
		}
};

void printLevelOrder(Node *root)
{
    if (root == NULL)
	return;

    queue<Node *> q;

    q.push(root);

    int nodeCount=0;
    while (q.empty() == false)
    {
        nodeCount=q.size();

        while(nodeCount>0){
            Node *node = q.front();
            cout << node->data << " ";
            q.pop();

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);

            nodeCount--;
        }
        cout<<"\n";
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}
