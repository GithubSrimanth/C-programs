/*How to create memory using  realloc () function */

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr,i,n1,n2;
        printf("Enter size of array: ");
        scanf("%d",&n1);
        ptr=(int*)malloc(n1*sizeof(int));
        printf("Addresses of previously allocated memory");
        for(i=0;i<n1;++i)
                printf("%u\n",ptr+i);
        printf("\n Enter new size of array: ");
        scanf("%d",&n2);
        ptr=realloc(ptr,n2*sizeof(int));
        printf("Adrresses of newly allocated memory: ");
        for(i=0;i<n2;++i)
                printf("%u\n",ptr+i);
        return 0;

}




/* 
OUTPUT IS: Enter size of array: 5
Addresses of previously allocated memory2050161344
2050161348
2050161352
2050161356
2050161360

 Enter new size of array: 10
Adrresses of newly allocated memory: 2050161344
2050161348
2050161352
2050161356
2050161360
2050161364
2050161368
2050161372
2050161376
2050161380

*/
