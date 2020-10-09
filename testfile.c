#include<stdio.h>
#include<math.h>

int main()
{   
    long long int b;
    scanf("%lld", &b);
    char* a;
    if (b / 1000000000000000 == 4)
        a = "AMEX";
    else
        a = "invalid";
    puts(a);
    printf("%lld \n", b);
}

