/*
county library system
by Mr Patriki
feb 2022
MIT License
C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu();
void execute_action(int action);

int main()
{
    char tittle[100] = "county library mamagement";
    char status[100] = "welcome Patriki";
    execute_action(menu());
    int action;
    
    printf("\n\n\n\t\t\t     **************\n\t\t\t%s\n \t\t\t      ****************", tittle, status);
    menu();
    return 0;
}
int menu()
{
    int action;
 printf("Select an action below\n");
    printf("1. Add new Patron\n");
    printf("2. view all patrons\n");
    printf("3. Add new resources\n");
    printf("4. View all resources\n");
    printf("Your actions: \n");
    scanf("%d", &action);
    if(action < 1 || action > 4)
       {
           printf("invalid action");
       }
return action;
}
void execute_action(int action)
{
    printf("choice is: %d\n");
    switch(action){
        case 1:
            printf("add a new patron\n");
            break;
        case 2:
            printf("view all patrons\n");
            break;
        case 3:
            printf("add new resources\n");
            break; 
        case 4:
            printf("view all resources");
            break; 
        default:
            printf("wrong entry");
}
}

