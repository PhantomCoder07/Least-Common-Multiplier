// for loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    for (i=b; ; i++)
    {
        if (i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
    }
    printf ("The LCM of %d and %d is: %d",a,b,ans);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    i=b;
    while (i!=0)
    {
        if (i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
        i++;
    }
    printf ("The LCM of %d and %d is: %d",a,b,ans);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,a,b,ans=0;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    i=b;
    do
    {
        if (i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
        i++;
    }
    while (i!=0);
    printf ("The LCM of %d and %d is: %d",a,b,ans);
    return 0;
}
