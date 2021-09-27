#include<iostream>
using namespace std;
struct node{
    int data;
    node *left, * right;
    node(int x) : data(x), left(NULL), right(NULL);
    };

void add(node *&root, int key){
    if( !root ){
        root = new node(key);
        return;
    }
    if(root->data == key){
        return;
    }
    if(root->data < key){
        add(root->right, key);
        }
    else{
        add(root->left, key);
    }
}
};

int main(){
    node *root = NULL;
    int rr;
    while(cin>>rr){
        if(rr == 0)
            break;
        add(root,rr);
    }

    return 0;
}