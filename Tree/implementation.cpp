// imolementing basic tree
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// creating node for a tree
template <typename T>
class treeNode
{
public:
    T data;
    vector<treeNode<T> *> children;
    // constructor
    treeNode(int data)
    {
        this->data = data;
    }
};
// printing recursiverly the node and the children of the tree
// like 1:2,3
// 2:9,0
void print(treeNode<int> *r)
{
    // this is edge case not base case
    // base case tells recursion where to stop
    if (!r)
        return;
    // printing the root node
    cout << r->data << " : ";
    // iterating over the child if exist
    for (int i = 0; i < r->children.size(); i++)
    {
        cout << r->children[i]->data << ", ";
    }
    cout << "\n";
    // go to all childrens of the root and call recursion
    for (int i = 0; i < r->children.size(); i++)
    {
        print(r->children[i]);
    }
}
// function for dynamically taking the input from the user
treeNode<int> *takeinput()
{
    int x;
    cout << "Enter the data\n";
    cin >> x;
    treeNode<int> *r = new treeNode<int>(x);
    int n;
    cout << "Enter the number of childrens of " << x << "\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        treeNode<int> *child = takeinput();
        r->children.push_back(child);
    }
    return r;
}
// LEVELWISE INPUT
treeNode<int> *levelWiseInp()
{
    int rootData;
    cout << "Enter the rootData\n";
    cin >> rootData;
    treeNode<int> *root = new treeNode<int>(rootData);
    queue<treeNode<int> *> q;
    q.push(root);
    // Now iterating over the queue for checking if it has some nodes with childreb left
    while (!q.empty())
    {
        treeNode<int> *f = q.front();
        q.pop();
        cout << "Enter number of childrens of " << f->data << "\n";
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter " << i << "th child of " << f->data << "\n";
            int childData;
            cin >> childData;
            treeNode<int> *child = new treeNode<int>(childData);
            // inserting the node into queue
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

// level order print
void levelOrderPrint(treeNode<int> *root)
{
    if (!root)
        return;
    queue<treeNode<int> *> q;
    q.push(root);
    cout << "Printing the Tree\n";
    while (!q.empty())
    {
        treeNode<int> *f = q.front();
        q.pop();
        cout << "children of " << f->data << ": ";

        for (int i = 0; i < f->children.size(); i++)
        {
            treeNode<int> *child = f->children[i];
            q.push(child);
            cout << child->data << ", ";
        }
        cout << "\n";
    }
}

// function for counting nodes of the tree using recursion
int countNodes(treeNode<int> *r)
{
    if (!r)
        return 0;

    int ans = 1;
    for (int i = 0; i < r->children.size(); i++)
    {
        ans += countNodes(r->children[i]);
    }
    return ans;
}
// height of the tree
int heightofTree(treeNode<int> *r)
{
    if (!r)
        return 0;
    int mx = 0;
    for (int i = 0; i < r->children.size(); i++)
    {
        int childHeight = heightofTree(r->children[i]);
        mx = max(mx, childHeight);
    }
    return mx + 1;
}
// printing at depth k
void printAtDepthK(treeNode<int> *r, int k)
{
    if (!r)
        return;
    if (k == 0)
    {
        cout << r->data << " ";
    }

    // searching for depth in childrens
    for (int i = 0; i < r->children.size(); i++)
    {
        // recursive call
        printAtDepthK(r->children[i], k - 1);
    }
}
// coutning the leaf nodes of the tree
int countLeaf(treeNode<int> *r)
{
    if (!r)
        return 0;
        if(r->children.size()==0) return 1;
        // recursion on childrens
        int ans = 0;
        for(int i =0;i<r->children.size();i++)
        {
            ans += countLeaf(r->children[i]);
        }
        return ans;
}
// preorder traversal
void preorder(treeNode<int>* r)
{
    if(!r) return;
    cout<<r->data<<" ";
    for(int i =0;i<r->children.size();i++){
        preorder(r->children[i]);
    }

}
// post order
void postorder(treeNode<int>* r)
{
    if(!r) return;
    for(int i =0;i<r->children.size();i++){
        preorder(r->children[i]);
    }
    cout<<r->data<<" ";

}
// delete the tree
void deletetree(treeNode<int>* r)
{
    if(!r) return;

    for(int i =0;i<r->children.size();i++){
        deletetree(r->children[i]);
    }
    delete r;

}
int main()
{
    // creating root node;
    //     treeNode<int> *r = new treeNode<int>(1);
    //     treeNode<int> *c1 = new treeNode<int>(2);
    //     treeNode<int> *c3 = new treeNode<int>(3);
    //     treeNode<int> *c2 = new treeNode<int>(4);
    //     treeNode<int> *c4 = new treeNode<int>(5);
    // // assembling
    // r->children.push_back(c1);
    // r->children.push_back(c2);
    // r->children.push_back(c3);
    // r->children.push_back(c4);
    // cout<<"printing the tree\n";
    // print(r);
    // treeNode<int> *root = takeinput();
    treeNode<int> *root = levelWiseInp();
    cout << "\nPrinting the complete tree\n";

    // print(root);
    levelOrderPrint(root);
    int n = countNodes(root);
    cout << "number of nodes of this tree is " << n;
    cout << "height of the tree is " << heightofTree(root) << "\n";
    // cout << "Enter the depth of tree";
    // int k;
    // cin >> k;
    // cout << "elements at depth k are \n";
    // cout<<"Number of Leaf nodes are "<<countLeaf(root)<<"\n";
    // 5 3 1 2 3 2 4 9 1 8 0 1 99 1 19 1 55 0 1 20 0 0
    cout<<"preorder Traversal \n";
    preorder(root);
}