#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main(){
	vector <char> ip;
	vector <char> alpha;
	vector <char> encrypt;
	char mono;
	string text;
	cout<<"Enter the string"<<endl;
	cin>>text;
	mono='a';
	for (int i = 0; i < 26; ++i){
		ip.push_back(mono);
		mono++;
	}

	cout<<"Enter the character key\n";
	cin>>mono;
	for (int i = 0; i < 26; ++i){
		if(mono == 'z'){
			alpha.push_back(mono);
			mono = 'a';
			continue;
		}
		alpha.push_back(mono);
		mono++;
	}
	for (int i = 0; i < text.size(); ++i){
		for (int j = 0; j < 26; ++j){
			if (text[i]==ip[j]){
				encrypt.push_back(alpha[j]);
			}
		}
	}
	cout<<"Encrypted text: ";
	for (int i = 0; i < encrypt.size(); ++i){
		cout<<encrypt[i];
	}
	cout<<endl;
	for (int i = 0; i < encrypt.size(); ++i){
		for (int j = 0; j < 26; ++j){
			if (encrypt[i]==alpha[j]){
				text[i]=(ip[j]);
			}
		}
	}
	cout<<"Decrypted text: "<<text<<endl;
	return 0;
}