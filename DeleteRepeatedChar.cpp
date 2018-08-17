//Deleting Repeated Character of String and print length of String

#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    map <char, int> m;
    long int t; cin>>t;
    char ch;
    while((t--)+1){
        cin>>ch;
        if(m.find(ch) != m.end()){
            m.find(ch)->second += 1;
        }
        else{
            m.insert(pair<char,int>(ch,1));
        }
    }
    // cout<<m.size();
    map <char, int> ::iterator it;
    it = m.begin();
    long int sum = 0;
    int max =0;
     while(it != m.end()){
        if(it->second > max)
            sum += it->second;
        cout<<it->first<<" "<<it->second<<" "<<sum<<endl;
        it++;
    }
    cout<<sum<<endl;
    return 0;
}