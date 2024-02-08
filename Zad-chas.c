#include <stdio.h>
#define DEBUG
int sort_sum(int n,int ARRAY[n]){
     for (int i = 0; i < n; i++)                  
    {                                               
        for (int j = 0; j < n - i - 1; j++)      
        {                                           
            if (ARRAY[j] < ARRAY[j + 1])      
            {                                       
                int temp;
                temp = ARRAY[j];
                ARRAY[j]=ARRAY[j + 1];
                ARRAY[j + 1]=temp; 
            }                                       
        }                                           
    }
    int sum;
printf("\n%d",ARRAY[0]);
for(int k=3;k<n;k=k+3){
sum=sum+ARRAY[k];
#ifdef DEBUG
printf("\n%d",ARRAY[k]);
#endif
}
#ifdef DEBUG
for(int m=0;m<n;m++){
    printf("\n%d\n",ARRAY[m]);
}
#endif
printf("Sumata na delimi na 3 e %d",sum);
}
