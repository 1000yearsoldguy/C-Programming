#include <stdio.h>
//if statement
// Program to display a number if user enters negative number

/*
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Test expression is true if number is less than 0
    if (number < 0)
    {
        printf("You entered %d.\n", number);
    }

    return 0;
}
*/

// if else statement
// Program to check whether an integer entered by the user is odd or even
/*
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);

    // True if remainder is 0
    if( number%2 == 0 )
        printf("%d is an even integer.",number);
    else
        printf("%d is an odd integer.",number);
    return 0;
}
*/

// if...else ladder
// Program to relate two integers using =, > or <
/*
int main()
{
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    //checks if two integers are equal.
    if(number1 == number2)
    {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }

    // if both test expression is false
    else
    {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
*/

//Nested if...else
//Program to relate two integers using =, > or < -> same thing in a different way
/*
int main()
{
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 >= number2)
    {
      if (number1 == number2)
      {
        printf("Result: %d = %d",number1,number2);
      }
      else
      {
        printf("Result: %d > %d", number1, number2);
      }
    }
    else
    {
        printf("Result: %d < %d",number1, number2);
    }

    return 0;
}
*/


//Switch case statement
// Program to create a simple calculator
/*
int main() {

    char operator;
    float firstNumber,secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%f + %f = %f",firstNumber, secondNumber, firstNumber+secondNumber);
            break; //significance of break

        case '-':
            printf("%f - %f = %f",firstNumber, secondNumber, firstNumber-secondNumber);
            break;

        case '*':
            printf("%f * %f = %f",firstNumber, secondNumber, firstNumber*secondNumber);
            break;

        case '/':
            printf("%f / %f = %f",firstNumber, secondNumber, firstNumber/secondNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
*/


///// So far, we were learning only syntax. Now, let us deal with some problems
// Program to find if a year is a leap year or not
/* Leap year characters -> *divisible by 4; if divisible by 100 then not leap year
 unless it is divisible by 400 also */
/*
int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);

    return 0;
}
*/

// Changing case of an input letter
/*
int main()
{
    char chr;
    printf("Input any letter between A-Z or a-z\n");
    scanf("%c",&chr);
    if(chr>='a' && chr<='z')
    {
        chr = chr - 32;
        printf("Capital version is %c", chr);
    }
    else if(chr>='A' && chr<='Z')
    {
        chr = chr + 32;
        printf("Small version is %c\n", chr);
    }
    else
    {
        printf("Not a letter\n");
    }
    return 0;
}
*/

//grading policy making -> we shall learn a new use of return statement
/* A: 90 - 100, B: 80 - 89, C: 70 - 79, F: 0 - 69 */
/*
int main()
{
    float marks;
    char grade;
    printf("input marks\n");
    scanf("%f",&marks);
    if(marks>=90 && marks<=100)
        grade = 'A';
    else if(marks>= 80 && marks<=89)
        grade = 'B';
    else if(marks>= 70 && marks<=79)
        grade = 'C';
    else if(marks>= 0 && marks<=69)
        grade = 'F';
    else
    {
        printf("Invalid marks\n");
        return 0;
    }
    printf("student grade = %c\n", grade);
    return 0;
}
*/

//Electricity bill calculation
/* Write a program to take the electricity unit spent by a user as input (int). Suppose, each unit costs 1.50 tk and
the meter charge is 100 tk. There is also a 15% vat if the bill is greater than 300 tk. Now calculate the electricity bill
of a user. */
/*
int main()
{
    int unit;
    float cost;
    printf("Input electricity unit spent by user\n");
    scanf("%d",&unit);
    cost = unit * 1.50 + 100;
    if(cost>300)
    {
        cost = cost + cost * 0.15;
    }
    printf("Bill is %f\n",cost);
    return 0;
}
*/

// odd even number problem solve using switch case
/*
int main()
{
    int num;
    printf("Input an integer\n");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
            printf("Even\n");
            break;

        case 1:
            printf("Odd\n");
    }
    return 0;
}
*/

// choice problem using switch case
/* Write a program where you have to do some specific tasks depending on the user choice. Take a choice and a number
as input (both are integer). Depending on the user choice, do the following tasks:
# For choice 1, find whether the number is divisible by 5.
# For choice 2, find whether the number is negative.
# For choice 3, find whether it is greater than 100 and divisible by 4.
# For other choice inputs, print "invalid choice" as output.
*/

/*
int main()
{
    int choice, number;
    printf("input a choice from 1 to 3\n");
    scanf("%d",&choice);
    printf("input an integer\n");
    scanf("%d",&number);
    switch(choice)
    {
        case 1:
            if(number%5 == 0)
                printf("Divisible by 5\n");
            else
                printf("Not divisible by 5\n");
            break;

        case 2:
            if(number<0)
                printf("Negative\n");
            else
                printf("Not negative\n");
            break;
        case 3:
            if(number>100 && number%4==0)
                printf("Greater than 100 and divisible by 4\n");
            else
                printf("Not greater than 100 and divisible by 4\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
*/

//ternary operator ?
/*
int main()
{
    int a,b;
    printf("Input two numbers\n");
    scanf("%d%d",&a,&b);
    a<b ? printf("a is less") : printf("a is greater");
    return 0;
}
*/

// Largest number among 3 input numbers using ternary operator, without using && operator
/*
int main()
{
    int a, b, c;
    int largest;
    printf("Input 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    //(a>b) ? ((a>c) ? largest=a : largest=c) : ((b>c) ? largest=b : largest=c); //wrong syntax
    largest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    printf("Largest number is %d\n", largest);
    return 0;
}
*/

//Exercise problems
// Problem 1
/*
Input: Two times.
Time 1: Hour1, Minute1, Second1
Time 2: Hour2, Minute2, Second2

Output: Addition of these two times
Time 3: Hour3, Minute3, Second3
*/

// Problem 2
/*
Same problem as Problem 1.
The output will be subtraction of these two times.
You can assume that the first time is greater than the second
*/

// Problem 3
/*
Given two times (in the same format as Problem 1), find which time
is greater of the two
*/

// Problem 4 -> a tougher problem
/*
Input: 3 integers
Output: Find the 2nd largest integer among the 3 inputs using if else
*/