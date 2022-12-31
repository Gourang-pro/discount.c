#include<stdio.h>
#include<conio.h>

int main()
{ 
      int amt,dis;
        printf("Enter the amount  :  ");
        scanf("%d",&amt);

        if(amt<=1000)
        {
            dis=amt*0.02;
        }
        else if(amt>=1000&&amt<=3000)
        {
            dis=amt*0.05;
        }
        else if(amt>=3000&&amt<5000)
        {
            dis=amt*0.15;
        }
    
          printf("The discount is %d",dis);
        return 0;
}               
