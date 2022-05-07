#include<stdio.h>

int alphabet(char string[],char c);

void main() {
    char string[100], c;
    printf("Enter String - ");
    fgets(string,100,stdin);

        printf("Enter an Alphabet you want to find - ");
        scanf("%c",&c);

        printf("%c has repeated %d times in the given string.\n",c,alphabet(string, c));

}

int alphabet(char string[],char c) {
    int count=0;
    for(int i=0; string[i]!='\0'; i++) {
        if(string[i]==c){
            count++;
        }
    }
return count;
}