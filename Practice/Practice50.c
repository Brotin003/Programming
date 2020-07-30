//Exercise of unit conversions
// 1. kms to miles        2. inches to foot
// 3. cms to inches       4.inches to meters
//            5. Pounds to kgs3
#include <stdio.h>
int main()
{

    char input;
    float kmstomiles = 0.62137;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n    1. Kms To Miles\n    2. Inhes To Foot\n    3. Cms To Inches\n    4. Inches To Meters\n    5. Pound To Kgs\n");
        scanf(" %c", &input);
        //    printf("The character is '%c'", input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
            printf("Entry quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%.2f kms is equal to %.2f Miles\n\n\n", first, second);
            break;

        case '2':
            printf("Entry quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%.2f Inches is equal to %.2f Foot\n", first, second);
            break;

        case '3':
            printf("Entry quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%.2f Cms is equal to %.2f Inchs\n", first, second);
            break;

        case '4':
            printf("Entry quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%.2f inches is equal to %.2f Meters\n", first, second);
            break;

        case '5':
            printf("Entry quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%.2f pounds is equal to %.2f Kgs\n", first, second);
            break;

        default:
            printf("In default now");
            break;
        }
    }

end:
    return 0;
}