#include<stdio.h>

void vowel(char string[]);

void main() {
    char string[100];

        printf("Enter String - ");
        fgets(string,100,stdin);

        vowel(string);

}

void vowel(char string[]) {
    int i,j,count=0;
    char vowel[11] = {'a','e','i','o','u','A','E','I','O','U','\0'};
        for (i=0;string[i]!='\0';i++) {
            for(int j=0;vowel[j]!='\0';j++) {
                if (string[i] == vowel[j]) {
                    count++;
                }
            }
        }
    printf("Given String has %d vowels.\n",count);
}