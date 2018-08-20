#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	vector <char> text;
	vector <char> key;
	vector <char> encrypt;
	string ip;
	cout<<"Enter the message"<<endl;
	cin>>ip;
	int i=0,len=ip.length();
	while(i<len){ //create vector
		text.push_back(ip[i]);
		i++;
	}
	cout<<"Enter the key"<<endl;
	cin>>ip;
	len = text.size();
	i = 0;
	while(len--){
		key.push_back(ip[i]);
		i++;
		if(ip[i]=='\0'){
			i = 0;
		}
	}
	len = text.size();
	i = 0;
	while(len--){
		int add=((int)key[i]+(int)text[i])%32+97;
		if(add <= 122)
			encrypt.push_back((char)add);
		else{
			add = add-26;
			encrypt.push_back((char)add);
		}
		i++;
	}
	cout<<endl<<"Encrypted Message"<<endl;
	for (int i = 0; i < encrypt.size(); ++i){ //print sms
		cout<<encrypt[i];
	}
	cout<<endl;
	return 0;
}