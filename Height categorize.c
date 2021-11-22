#include<stdio.h>
int main()
{
    float perheight;
    printf("Enter your height (incentimetres):");
    scanf("%f",&perheight);
    if(perheight<150.0)
        printf("The person is dwaf\n");
    else if(perheight>=150.0 && perheight<165.0)
        printf("The person is average heighted\n");
   else  if(perheight>=165.0 && perheight<=195.0)
        printf("The person is taller\n");
    else
        printf("Abnormal person");
    getch();
}
