//2
for(i=1; i<=100; i++)
    print(i)

//4
num=1;
for(i=1; i<=N; i++)
{
    printf(num);
    num = num+2;
}


//5
for(i=1; i<=N; i++)
{
    if(i%2==0)
        printf(0)
    else
        printf(1)
}


//6
float sum = 0
for(i=1; i<N; i++)
{
    scanf(num)
    sum = sum + num;
}
sum = (float)sum/N


//7
result = 1
for(i=1; i<=y; i++)
{
    result = result * x;
}

//8
flag=0
for(i=2; i<=num/2; i++)
{
    if(num%i==0)
    {
        flag = 1;
        break;
    }
}
if(flag==0 && num!=1)
    printf(prime)
else
    printf(not prime);


//9
result=1;
for(i=num; i>=1; i--)
{
    result = result * i;
}

//10
num1=1, num2=3;
sum=0;
for(i=1; i<=N; i++)
{
    sum = sum + num1*num2;
    num1 = num1 + 2;
    num2 = num2 + 3;
}

//11
num1=1, num2=2, num3=3;
sum=0;
for(i=1; i<=N; i++)
{
    if(i%2!=0)
        sum = sum + num1*num2*num3;
    else
       sum = sum - num1*num2*num3;
    num1 = num1 + 2;
    num2 = num2 + 4;
    num3++;
}

//12
sum=0, count=0;
while(num!=0)
{
    digit= num%10;
    sum = sum + digit;
    num = num/10;
    count++;
}


//13
rev=0
mult=1
while(num!=0)
{
    digit= num%10;
    rev = rev + digit*mult;
    mult=mult*10;
    num = num/10;
}


//15
while(num!=0)
{
    digit= num%10;
    num = num/10;
}
printf(digit)

//17
while(1)
{
    scanf(chr)
    if(chr=='A')
        break
    printf(chr)
}

//18
num1=0, num2=1
if(N>=1)
    printf(0 \n)
else if(N>=2) //we have to use here "if" condition instead of "else if" 
    printf(1 \n)
for(i=3; i<=N; i++)
{
    temp = num1+num2;
    printf(temp \n)
    num1=num2
    num2=temp
}

//20
num1=0, num2=1, num3=2
if(N>=1)
    printf(0 \n)
else if(N>=2)
    printf(1 \n)
else if(N>=3)
    printf(2 \n)
for(i=4; i<=N; i++)
{
    temp = num1+num2+num3;
    printf(temp \n)
    num1=num2
    num2=num3
    num3=temp;
}

//21
decimal=0
power=1
while(binary!=0)
{
    digit = binary%10
    decimal = decimal + digit*pow(2, power)
    power++;
    binary = binary/10
}
print(binary)

//22
binary=0
mult=1
while(decimal!=0)
{
    digit = decimal%2
    binary = binary + digit*mult
    decimal = decimal/2
    mult = mult*10
}
print(binary)

//23
if(num1<num2)
    small=num1
else
    small=num2
for(i=small; i>=1; i--)
{
    if(num1%i==0 && num2%i==0)
    {
        GCD = i;
        break;
    }
}
print(GCD)

//24
if(num1>num2)
    large=num1
else
    large=num2
for(i=large; i<=num1*num2; i++)
{
    if(i%num1==0 && i%num2==0)
    {
        LCM = i;
        break;
    }
}
printf(LCM)

//25
sum=0
num=0
for(i=1; i<=N; i++)
{
    num = num*10+i
    sum = sum+num
}
print(sum)


