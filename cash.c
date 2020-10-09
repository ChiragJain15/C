#include<stdio.h>
#include<math.h>
int getamount();

int getamount()
{
    printf("Enter balance: \n");
    float moneyOwed;
    scanf("%f", &moneyOwed);
    int m = round(moneyOwed * 100);
    return m; 
}

int main(void)
{
    int money = getamount();
    int a = 0;
    while(money)
    {
        if (money >= 25)
        {
            a++;
            money -= 25;
        }
        else if (money >= 10)
        {
            a++;
            money -= 10;
        }
        else if (money >= 5)
        {
            a++;
            money -= 5;
        }
        else if (money >= 1)
        {
            a++;
            money -= 1;
        }
    }
    printf("%d", a);
}