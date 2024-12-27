// build tree
#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
// Node *buildtree(Node *root)
// {
//     cout << "enter the data you want to insert" << endl;
//     int data;
//     cin >> data;
//     // create a new Node with class
//     root = new Node(data);
//     // base case
//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "if you want to insert in left" << endl;
//     root->left = buildtree(root->left);
//     // cout<<data<<endl;
//     cout << "if you wwant to insert in right" << endl;
//     // it will still execut if user enter -1
//     //     buildtree(root)
//     //   |
//     //   |-- buildtree(root->left)
//     //   |    |
//     //   |    |-- buildtree(root->left->left)
//     //   |    |    |
//     //   |    |    |-- User enters -1, returns NULL
//     //   |    |
//     //   |    |-- buildtree(root->left->right)  This is where we are now
//     // in this order
//     root->right = buildtree(root->right);
//     // cout<<data<<endl;
//     return root;
// }
// level by level treversal
void treetraversal(Node *root)
{
    // base case in recursion
    if (root == NULL)
    {
        return;
    }
    // it is used to store node pointer in queue
    queue<Node *> q;
    // we store root value in node
    q.push(root);
    // check if q is not empty
    while (!q.empty())
    {
        // store the first value of root  and process it with children
        Node *temp = q.front();
        // remove the element in q as we store its value in temp
        q.pop();
        // print the value
        cout << temp->data << " ";
        // check if temp left node value is not null we are processing the value
        if (temp->left != NULL)
        {
            // store the root left children in queue
            q.push(temp->left);
        }
        // store the root right children in queue
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}
// inorder traversal with Left node then prin node and then go to right
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// preorder traversal
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// postorder
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelordertreebuild(Node *root)
{

    queue<Node *> q;
    cout << "enter the data for root" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the data for left" << temp->data << endl;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the data for right" << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = NULL;
    // root = buildtree(root);
    // 1 3 7 11 5 17
    //  treetraversal(root);
    //  inorder(root);
    //  preorder(root);
    levelordertreebuild(root);
    postorder(root);

    return 0;
}