// finding sum and avarage value with user define number of variable and also user input value
#include <stdio.h>
int main(){
    int n;
    printf("how many number do you want to calculatr: ");
    scanf("%d",&n);
    int num[n]; // 'n' for user defuine arry size 
    printf("Enter calculating number: ");
        for (int i=0; i<n; i++)
        {
            scanf(" %d",&num[i]);
        }
        int sum=0;
        for(int i=0; i<n;i++)
        { 
            sum=sum+num[i];
        }  
        printf("Sum of your entered number: %d\n", sum);
        printf("avarage value of your entered number: %.2f",(float) sum/n);
    return 0;
}