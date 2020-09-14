#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
#include<string>
using namespace std;

#define MAX 50

class numberStack{
	int top;
	int info[MAX];
	public:
		numberStack(){
			top = -1;
		}
		void push(int data){
			if(top == MAX-1){
				cout<<"number Stack is Overflow"<<endl;
			}else{
				info[++top]=data;
				// cout<<data<<" pushed to number stack"<<endl;
			}
		};
		bool isEmpty(){
			if(top == -1)
				return true;
			else
				return false; 	
		};
		void display(){
			if(!isEmpty()){
				for(int i=0; i <= top; i++)
					cout<<info[i]<<" ";
				cout<<endl;
			} else{
				cout<<"Number Stack is Empty"<<endl;
			}
			
		};
};



class alphaStack{
	char alpha[MAX];
	int top;
	public:
		alphaStack(){
			top = -1;
		}
		void push(char data){
			if(top == MAX-1){
				cout<<"Aplha Stack is Overflow"<<endl;
			}else{
				alpha[++top]=data;
				// cout<<data<<" pushed to alpha stack"<<endl;
			}
		};
		bool isEmpty(){
			if(top == -1)
				return true;
			else
				return false; 	
		};
		void display(){
			if(!isEmpty()){
				for(int i=0; i <= top; i++)
					cout<<alpha[i]<<" ";
				cout<<endl;
			} else{
				cout<<"Alpha Stack is Empty"<<endl;
			}
			
		};
};

int main(int argc, char const *argv[])
{
	class numberStack num;
	class alphaStack alpha;

	char str[MAX];

	cout<<"enter string"<<endl;
	cin>>str;

	cout<<str<<" entered string"<<endl;

	for(int i=0; str[i] != '\0'; i++){
		if(isalpha(str[i])){
			alpha.push(str[i]);
		} else {
			num.push(str[i]-'0');
		}
	}

	cout<<"number stack"<<endl;
	num.display();
	cout<<"alpha stack"<<endl;
	alpha.display();

	return 0;
}
