#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){
	vector <vector <char>> v;
	vector <char> tempText;
	vector <int > key;
	string text;
	cout<<"Enter the plain text"<<endl;
	getline(cin,text);
	int ip, max = 0;
	int i = 0,j = 0;
	while(i < text.size()){
		if(text[i] != ' ')
			tempText.push_back(text[i]);
		i++;
	}
	cout<<endl<<"Enter the key ending with -1"<<endl;
	while(1){
		cin>>ip;
		if(ip == -1)
			break;
		key.push_back(ip);
		if(max<ip)
			max = ip;
	}
	int row;
	if ((tempText.size() % max) == 0){
		row = tempText.size() % max;
	}
	else{
		row = (tempText.size() % max) + 1;
	}
	ip = 0;
	i = 0;
	while(i < row){
		std::vector<char > t;
		j = 0;
		while(j < max){
			if(ip < tempText.size())
				t.push_back(tempText[ip++]);
			else
				t.push_back('#');
			j++;
		}
		v.push_back(t);
		i++;
	}
	i = 0;
	while(i < row){
		j = 0;
		while(j < max){
			cout<<v[i][j++];
		}
		i++;
		cout<<endl;
	}
	i = 0;
	cout<<endl;
	while(i < max){
		j = 0;
		while(j < row){
			cout<<v[j][key[i]-1];
			j++;
		}
		i++;
		cout<<" ";
	}
	cout<<endl;
	return 0;
}