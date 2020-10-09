#include <stdio.h>
#include <math.h>

void main()
{
    long long int a;
    char* card;
    int sum = 0, count = 0, b;
    printf("Enter your credit card number: \n");
    scanf("%lld", &a);
    if (a / 10000000000000 == 34 || a / 10000000000000 == 37)
    {
            card = "AMEX";
    }
    else if (a / 100000000000000 == 51 || a / 100000000000000 == 52 || a / 100000000000000 == 53 || a / 100000000000000 == 54 || a / 100000000000000 == 55)
    {
            card = "MASTERCARD";
    }
    else if (a / 1000000000000 == 4 || a / 1000000000000000 == 4)
    {
        card = "VISA";
    }
    while(a)
    {
        b = a % 10;
        count ++;
        if (count % 2)
        {
            sum += b;
        }
        else 
        {
            b *= 2;
            if(b >= 10)
            {    
                sum += b / 10;
                sum += b % 10;
            }
            else
            {
                sum += b;
            }
        }
        a /= 10;
    }
    if(sum % 10 != 0)
        card = "INVALID";
    printf("%s",card);        
}