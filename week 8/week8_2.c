#include<stdio.h>
#include<stdlib.h>


float sum = 0;
float avr = 0;

void average(float height[])
{
 for(int i = 0; i<=9 ; i++)
    {
        sum = sum + height[i];
    }
    avr = sum/10;
}

int main()
{
    float height[10];
    for(int i = 0 ; i<=9 ; i++)
    {
        printf("input height (cm) [%d] : ",i+1);
        scanf("%f",&height[i]);
        if(height[i]<=0)
        {
            printf("The Height is Positive Number!!!");
            exit (1);
        }
    }
    
    average(height);
   
    
    for(int i = 0; i<=9 ; i++)
    {
        printf("height [%d] = %.2f\n" ,i+1,height[i]);
    }
    printf("Average Height is %.2f",avr);

    

    return 0;
}