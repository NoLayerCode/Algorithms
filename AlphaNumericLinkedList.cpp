#include<bits/stdc++.h>
using namespace std;

#define MAX 50

class Node {
	public:
		char key;
		Node* next;

	Node() {
		this->next = NULL;
	}
	Node(char data){
		this->key = data;
		this->next = NULL;
	}
};

void displayList(Node * head) {
	Node *temp = head->next;

	while(temp!= NULL){
		cout<<temp->key<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
void insertNode(Node ** head,char data){
	Node *temp = *head;

	while(temp->next!= NULL){
		temp = temp->next;
	}

	Node * newNode = new Node(data);
	temp->next = newNode;
}

int main(int argc, char const *argv[])
{
	Node *alpha = new Node();
	Node *Number = new Node();
	char str[MAX];

	cout<<"enter string"<<endl;
	cin>>str;

	for(int i=0; str[i] != '\0'; i++){
		if(isalpha(str[i])){
			insertNode(&alpha, str[i]);
		} else {
			insertNode(&Number, str[i]);
		}
	}

	displayList(alpha);
	displayList(Number);
	return 0;
}
