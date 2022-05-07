/* Following program shows example of Call by Value and Call by Reference.

01. square() takes an integer value as input and prints it's square. The value 
    of original variable remains the same inside main().

02. _square is and example of call by reference as it takes value as a pointer 
    address of variable is passed in it through argument. After function execution
    it also changes the value of original variable inside main() because changes are
    done directly inside the address of that variable unlike call by value method which
    uses a copy of variable for changes inside function. */
    
#include<stdio.h>
#include<conio.h>

void square(int n);
void _square(int * n);

int main() {

    int n;
    printf("Enter the value to find Square - ");
    scanf("%d",&n);
    square(n);
    printf("Number = %d\n",n);
    _square(&n);
    printf("Number = %d\n",n);

    return 0;
}

void square(int n) {
    n = n*n;
    printf("Square = %d\n",n);
}

void _square(int * n) {
    *n = (*n) * (*n);
    printf("Square = %d\n",*n);
}