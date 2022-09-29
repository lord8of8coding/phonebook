#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

struct contact
{
    char name[50],adress[50];
    char sex[50];
    int phone,citizen;
};
void add_new()
{
   int choice;
    struct contact contact;
    FILE *fpointer=fopen("record","a");

    printf("\n\n\t\tEnter name:");
    scanf("%s",contact.name);
    printf("\n\n\t\tEnter adress:");
    scanf("%s",contact.adress);
    printf("\n\n\t\tEnter sex:");
    scanf("%s",contact.sex);
    printf("\n\n\t\tEnter phone:");
    scanf("%d",&contact.phone);
    printf("\n\n\t\tEnter citizen number:");
    scanf("%d",&contact.citizen);

    fprintf(fpointer,"%s %s %s %d %d\n",contact.name,contact.adress,contact.sex,contact.phone,contact.citizen);
    fclose(fpointer);

    printf("\n\n\t\tContact added successfully!");
    printf("\n\n\t\tEnter 1 to go to menu or 0 to exit:");
    scanf("%d",&choice);
    if(choice==0)
        exit(EXIT_SUCCESS);
    else
    {
        system("cls");
        main();
    }

}
void list()
{
  int choice;
    struct contact contact;

    FILE *fpointer=fopen("record","r");
    while(fgets(contact.name,50,fpointer)!= NULL)
    {
        fgets(contact.name,10000000,fpointer);
        printf("%s\n",contact.name);
    }
    fclose(fpointer);

    printf("\n\n\t\tEnter 1 to go to menu or 0 to exit:");
    scanf("%d",&choice);
    if(choice==0)
        exit(EXIT_SUCCESS);
    else
    {
        system("cls");
        main();
    }

}
void modify()
{
    char name[50];
    int choice ;
        printf("Enter name of the contact you want to modify:");
        scanf("%s",name);

}


int main()
{
   int choice;
    printf("\n\n\n\t\t***WELCOME TO PHONE BOOK***\n");
    printf("\t\t\t    MENU\n");
    printf("\t1.Add new\t 2. List\t 3.Exit\n");
    printf("\t4.Modify \t 5.Search\t6.Delete ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {   system("cls");
            add_new();
            break;}
    case 2:
        {   system("cls");
            list();
            break;}
    case 3:
        {   exit(EXIT_SUCCESS);
            break;}
    case 4:
        {   system("cls");
            modify();
            break;}
    return 0;
    }
}
