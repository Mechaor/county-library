/*
county library system
by Mr Patriki
feb 2022
MIT License
C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    int action;
printf("select an action below");
printf("1. add new patron\n");
printf("2. view all patrons\n");
printf("3. add new Resources\n");
printf("4. view all resources\n");
printf("Your action: \n");
scanf("%d",&action);
return action;
}
int main()
{
    int action;
    printf("COUNTY LIBRAY SYSTEM\n");
    printf("Welcome Mr. Patriki\n");
    action = menu();
    printf("you selected action %d\n", action);
    return 0;
}
