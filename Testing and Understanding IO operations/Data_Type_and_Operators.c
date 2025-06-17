#include <stdio.h>

//Data type, printf, scanf
/*
int main()
{
    int a;
    float b;
    char c;
    printf("input one int, one float, one char\n");
    scanf("%d%f",&a,&b);
    getchar();//enter key press
    scanf("%c",&c);
    printf("The inputs are: %d, %f, %c\n", a, b, c);
    return 0;
}
*/


//ASCII code
/*
int main()
{
    char chr;
    printf("Input a character\n");
    scanf("%c",&chr);
    printf("You entered %c.\n",chr);
    printf("ASCII value of %c is %d\n\n", chr, chr);

    int intr;
    printf("Input an integer\n");
    scanf("%d",&intr);
    printf("Character having ASCII value %d is %c\n",intr,intr);
    return 0;
}
*/


//Arithmetic operators -> +, -, *, /, %
/*
int main()
{
    int a = 9,b = 4;
    float c;

    c = a+b;
    printf("a+b = %f \n",c);

    c = a-b;
    printf("a-b = %f \n",c);

    c = a*b;
    printf("a*b = %f \n",c);

    c=a/b;
    printf("a/b = %f in integer division \n",c);
    c=(float)a/b;
    printf("a/b = %f in floating point division \n",c);

    c=a%b;
    printf("Remainder when a divided by b = %f \n",c);

    return 0;
}
*/

//Increment and Decrement Operators
/*
int main()
{
    int a = 10, b = 100;
    int c;

    printf("++a = %d \n", ++a);
    printf("a = %d \n\n", a);

    printf("--b = %d \n", --b);
    printf("b = %d \n\n", b);

    printf("a++ = %d \n", a++);
    printf("a = %d \n\n", a);

    printf("b++ = %d \n", b++);
    printf("b = %d \n\n", b);

    c = ++b;
    printf("c = %d, b = %d\n", c, b);

    c = b++;
    printf("c = %d, b = %d\n", c, b);

    return 0;
}
*/


//Assignment operators
/*
int main()
{
    int a = 5, c;

    c = a;
    printf("c = %d \n", c);

    c += a; // c = c+a
    printf("c = %d \n", c);

    c -= a; // c = c-a
    printf("c = %d \n", c);

    c *= a; // c = c*a
    printf("c = %d \n", c);

    c /= a; // c = c/a
    printf("c = %d \n", c);

    c %= a; // c = c%a
    printf("c = %d \n", c);

    return 0;
}
*/

//Relational operators
/*
int main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d = %d \n", a, b, a == b); // true
    printf("%d == %d = %d \n", a, c, a == c); // false

    printf("%d > %d = %d \n", a, b, a > b); //false
    printf("%d > %d = %d \n", a, c, a > c); //false


    printf("%d < %d = %d \n", a, b, a < b); //false
    printf("%d < %d = %d \n", a, c, a < c); //true


    printf("%d != %d = %d \n", a, b, a != b); //false
    printf("%d != %d = %d \n", a, c, a != c); //true


    printf("%d >= %d = %d \n", a, b, a >= b); //true
    printf("%d >= %d = %d \n", a, c, a >= c); //false


    printf("%d <= %d = %d \n", a, b, a <= b); //true
    printf("%d <= %d = %d \n", a, c, a <= c); //true

    return 0;
}
*/

//sizeof operator
/*
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Size of int=%lu bytes\n",sizeof(a));
    printf("Size of float=%lu bytes\n",sizeof(b));
    printf("Size of double=%lu bytes\n",sizeof(c));
    printf("Size of char=%lu byte\n",sizeof(d));
    return 0;
}
*/

//Logical operators
/*
int main()
{

    int a = 5, b = 5, c = 10, result;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) equals to %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) equals to %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) equals to %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) equals to %d \n", result);

    result = !(a != b);
    printf("!(a == b) equals to %d \n", result);

    result = !(a == b);
    printf("!(a == b) equals to %d \n", result);

    return 0;
}
*/

// We shall learn bitwise operator in a separate class hopefully in detail


//math.h library includes exp, log, pow, sine, cos etc functions
/*
#include <math.h>

int main ()
{
   printf("Value 8.0 ^ 3 = %lf\n", pow(8.0, 3));

   printf("Value 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));

   return(0);
}
*/



