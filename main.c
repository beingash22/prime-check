#include <stdio.h>

void main()
{
    int num, count=0, i;
    scanf ("%d", &num);
    
    if (num>0 && num<=1000)
    {
        for (i=1; i<=num; i++)
        {
            if (num%i==0)
                count++;
        }
        
        if (count==2)
            printf ("yes");
            
        else
            printf ("no");
    }
    else
        printf ("no");
}
