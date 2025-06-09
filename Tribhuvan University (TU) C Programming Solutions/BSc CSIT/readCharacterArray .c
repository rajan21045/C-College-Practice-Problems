/*

Write a program to read a character array in input as “TRIBHUVAN UNIVERSITY” from the user and find out how 
many times a character “I” occurs in that array?

*/

#include<stdio.h>
#include<string.h>

int main(){
    
	char str[] = "TRIBHUVAN UNIVERSITY";
	int count=0;
	int i;
    
	 for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'I' || str[i]=='i') {
            count++;
        }
    }
    
    printf("The character 'I' occurs %d times in the string.\n", count);

}