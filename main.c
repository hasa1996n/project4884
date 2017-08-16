#include <stdio.h>
#include <stdlib.h>
void list();

int main()
{
    int N ,i=0;
    char clientname[50],clientsurname[50];
    int clientage,clientid,moneypaid ;
    char ch ,PWD[100];
    void list();
void list(){
    printf("--------------HOME ACOUNTING-----------\n");
    printf("inter password : ");
    scanf("%s",&PWD);

    if (PWD=="hasa1996n")
    {


    printf("hello doktor yousof :)\n");

    printf("1-enter new client\n");

    printf("2-show the list of client\n");

    printf("3-exit\n");
       }
   else {  void list();
   }
}
    scanf("%d",&N);
    if(N==1)
    {
    do{

    FILE *fpointer ;
     fpointer=fopen("client.txt","a+");

    printf("enter client name :");
    scanf("%s",&clientname[i]);

     printf("\nenter client surname  :");
    scanf("%s",&clientsurname);

     printf("\nenter client age :");
    scanf("%d",&clientage);

     printf("\nenter client ID :");
    scanf("%d",&clientid);

     printf("\nenter client money :");
    scanf("%d",&moneypaid);


    fprintf(fpointer,"%s\t%s\t%d\t%d\t%d\n",clientname,clientsurname,clientage,clientid,moneypaid);

    fclose(fpointer);
    printf("do you want to add nwe client Y/N ? \n");
     scanf("%c");
    scanf("%c",&ch);}

      while(ch=='Y'||ch=='y');}


    if(N==3)
    {
       system("exit");
    }



}

