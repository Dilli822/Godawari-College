#include<stdio.h>
#include<stdbool.h>

int main() {
	char ch;
	bool isVowel = false;
	
	printf("Enter an Alphabet: ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='f'||ch=='F'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		isVowel=true;
	}
	
	if(isVowel==true)
	   printf("%c is a vowel",ch);
	else
	   printf("%c is a Consonant", ch);
	return 0;
}
