// Write a function sumvector which returns the sum of two vectors passed to it. 
// The vectors must be two-dimensional
#include <stdio.h>
typedef struct vector    // struct vector = vec 
{
    int x;
    int y;
}vec;
vec sumvector(vec v1, vec v2) {
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    vec v1, v2, sum;
    v1.x = 34;
    v1.y = 24;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 54;
    v2.y = 44;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("X dimension of result is %d and Y dimension is %d\n", sum.x, sum.y);

    return 0;
}