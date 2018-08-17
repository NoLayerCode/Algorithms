
// Name :- Vishwajeet Yelhekar
// Roll No :- A18
// Reg No :- 2015BIT019


#include<stdio.h>
#include <stdlib.h>
void main(){
	char str[100];
	int key,temp;
	printf("Enter the message\n");
	gets(str);
	printf("Enter the key\n");
	scanf("%d",&key);
	printf("%s\n", str);
	for (int i = 0; str[i]!= '\0'; ++i){
			if (str[i]!= ' '){
				temp = (str[i] + key);
				if (str[i]>='a' && str[i]<='z'){
					if(temp <= 122)
						str[i] = temp;
					else{
						str[i] = temp-26;
					}
				}
				else if (str[i]>='A' && str[i]<='Z'){
					if(temp <= 90)
						str[i] = temp;
					else{
						temp = temp-26;
						str[i] = temp;
					}
				}
			}
		}
	printf("Encrypted message: %s\n", str);
	for (int i = 0; str[i]!= '\0'; ++i){
			if (str[i]!= ' '){
				temp = (str[i] - key);
				if (str[i]>='a' && str[i]<='z'){
					if(temp >= 97)
						str[i] = temp;
					else{
						temp = temp+26;
						str[i] = temp;
					}
				}
				else if (str[i]>='A' && str[i]<='Z'){
					if(temp >= 65)
						str[i] = temp;
					else{
						temp = temp+26;
						str[i] = temp;
					}
				}
			}
		}
	printf("Decrypted message: %s\n", str);	
}


