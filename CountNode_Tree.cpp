
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<tgmath.h>
#include<string>
#include<algorithm>
using namespace std;

struct node{
    struct node *l;
    struct node *r;
    char a;
}tree;

node* insert(node *root,char a) {
	if(root->l->a == a){
	    root=root->l; //= insert(root->l,a);
	}
	else if(root->r->a == a){
	    root= root->r; //= insert(root->r,a);
	}
    if(root == NULL) {
		root = new node();
		root->a = a;
		root->l = root->r = NULL;
	}
	else if(a < root->a)
		root->l = insert(root->l,a);
	else 
		root->r = insert(root->r,a);

	return root;
}
int count(node *root){
    int c = 1;
    if (root->l != NULL) {
       c += count(root->l);
    }
    if (root->r != NULL) {
        c += count(root->r);
    }
    return c;
}
int main(){
    int n,i,len;
    cin>>n;
    node* root = NULL;
    while(n>0){
        // cout<<n<<endl;
        string ip;
        cin>>ip;
        cout<<"ip="<<ip<<endl;
        i=0;len = ip.length();
        while(i<len){
            root = insert(root,ip[i]);
            i++;
        }
        n--;
    }
    len = count(root);
    cout<<len<<endl;
    // delete root;
    return 0;
}