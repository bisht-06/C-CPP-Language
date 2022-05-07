#include<stdio.h>

void convert(char string[]);

void main() {

    char string[100];
    printf("Enter String - ");
    fgets(string,100,stdin);
    convert(string);
    puts(string);

}

void convert(char string[]) {
    int i;
    for(i=0;string[i];i++) {
        if(string[i]>='A' && string[i]<='Z') {
            string[i] = string[i]+32;
        }
        else {
            string[i] = string[i]-32;
        }
    }
    printf("\n");
}