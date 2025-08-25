// for loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    for (i=b; ; i++)
    {
        if (i%a==0 && i%b==0 && i%c==0)
        {
            ans=i;
            break;
        }
    }
    printf ("The LCM of %d, %d and %d is: %d",a,b,c,ans);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    i=b;
    while (i!=0)
    {
        if (i%a==0 && i%b==0 && i%c==0)
        {
            ans=i;
            break;
        }
        i++;
    }
    printf ("The LCM of %d, %d and %d is: %d",a,b,c,ans);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,a,b,c,ans=0;
    printf ("Enter three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    i=b;
    do
    {
        if (i%a==0 && i%b==0 && i%c==0)
        {
            ans=i;
            break;
        }
        i++;
    }
    while (i!=0);
    printf ("The LCM of %d, %d and %d is: %d",a,b,c,ans);
    return 0;
}
