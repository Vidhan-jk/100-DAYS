
#include <stdio.h>

int main() {
    
    int num,k,ind;
    printf("Enter the array size:");
    scanf("%d",&num);
    int A[num+1];
    k=num;
    
    for(int i=0;i<num;++i)
    {
        printf("Enter the number in sorted manner :");
        scanf("%d",&A[i]);
    }
    printf("Enter the number to be inserted");
    scanf("%d",&ind);
    for(int j=0;j<num;++j)
    {
        if(ind<A[j])
        {
         k=j;
         break;
        }
    } 
    
    for(int a=num-1;a>=k;--a)
    {
        A[a+1]=A[a];
    }
    A[k]=ind;
     for(int i=0;i<=num;++i)
    {
        printf("%d",A[i]);
    }
    
    return 0;
}
