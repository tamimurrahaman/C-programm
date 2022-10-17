#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f;
     printf("Enter the searching element:");
     scanf("%d",&f);

    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
        printf("%d Found %d number index ",f'i);
        return 0;
        }

    }
    printf("Element are not found");


}
