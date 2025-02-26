// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class TreeN{

    public:
    int value;
    TreeN* left;
    TreeN* right;

    
    // TreeN(int value){
    //     this->value = value;
    //     this->left = NULL;
    //     this->right = NULL;
    // }
    
    TreeN(int value, TreeN* left, TreeN* right){
        this->value = value;
        this->left = left;
        this->right = right;
    }
};

TreeN* BST(TreeN* CurrRoot, TreeN* InsNode){
    if (CurrRoot == NULL){
        return InsNode; 
    }
    if (CurrRoot->value > InsNode->value){
        CurrRoot->left = BST(CurrRoot->left, InsNode);
    }
    if (CurrRoot->value < InsNode->value){
        CurrRoot->right = BST(CurrRoot->right, InsNode);
    }
    return CurrRoot;
}
void preorder(TreeN* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main() {

    TreeN* Root = NULL;
    
    for(int i=0; i<7; i++){
        int NodeValue;
        cin >> NodeValue;
        
        TreeN* X = new TreeN(NodeValue, NULL, NULL);
        Root = BST(Root, X);
    }
    preorder(Root);
    
    return 0;
}
