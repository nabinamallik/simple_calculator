#include<stdio.h>
#include<conio.h>

void main()
{
    // HERE WE WE DECLARING OUR DATATYPE AND VARIABLE
    int num1, num2, ch;
    clrscr();// it is for clear the screen.

    printf("Enter the First Number : ");
    scanf("%d",&num1);// taking input
    printf("Enter the Second Number : ");
    scanf("%d",%num2);// taking input

    printf("1. Summetion\n2. Substraction\n3. Multiplication\n4. Division");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);
// HERE WE USING SWITCH FUNCTION TO DETERMINE OUR ANDWERS
    switch(ch)
    {
        case 1: printf("Answer is %d", num1+num2);
        break;

        case 2: printf("Answer is %d", num1-num2);
        break;

        case 3: printf("Answer is %d", num1*num2);
        break;

        case 4: printf("Answer is %f", num1/num2);
        break;

    }
    printf("Thank you! See you Soon.")
    getch();// its for holding the screen.
}