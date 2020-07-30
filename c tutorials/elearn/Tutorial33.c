/* CREATE A STRUCTURE IN WHICH 
You manage a travel agency and you want your N drivers to input their following details:
1. Name
2. Driving lisence number
3. Route 
4. Kms
Your program should be able to take N=3 as input and your drivers will start inputting their details one by one.

Your program should print details of drivers in a beautiful fashion. 
USE STRUCTURES
*/



#include <stdio.h>
struct Driver
//We can also use here typedef  for short writing
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
} main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of Driver NO.1\n");

    //FIRST DRIVER DETAILS
    printf("Enter the Name of first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the number of Kms of first driver\n");
    scanf("%s", &d1.kms);

    //SECOND DRIVER DETAILS
    printf("\nEnter the details of Driver NO.2\n");
    printf("Enter the Name of second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlNo of second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the number of Kms of second driver\n");
    scanf("%s", &d2.kms);

    //THIRD DRIVER DETAILS
    printf("\nEnter the details of Driver NO.3\n");
    printf("Enter the Name of third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlNo of third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the number of Kms of third driver\n");
    scanf("%s", &d3.kms);

    //All Information
    printf("****Printing Information of these drivers:****\n");

    //Driver 1
    printf("For Driver NO.1:\nName is %s\n", d1.name);
    printf("Dl no is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    //Driver 2
    printf("\nFor Driver NO.2:\nName is %s\n", d2.name);
    printf("Dl no is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);
 
    //Driver 3
    printf("\nFor Driver NO.3:\nName is %s\n", d3.name);
    printf("Dl no is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);
}