// LOOPS IN C
// FOR LOOP

#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, j;
    for(i = 0/*, j =0*/; i < 5; i ++ /*, j++*/)                  //if i add in this line i=0 and j=o then 
    {
        printf("%d\n", i/*, j*/);
    }
                //%d = lagayenge uper wali line me agr hum expression 1  ya kisi me bhi koi value add kare toh
    
    return 0;
}
                 /*agar koi variable already initialize ho rakha hai to hume jabardasti expression 1 lagane
                  ki zarurat ni hai*/