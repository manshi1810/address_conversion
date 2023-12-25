#include<stdio.h>
#include<conio.h>
#include<string.h>
void add(int);

void phy_add(int,int );
void log_to_phy(int,int);
int start_add;
char processes[100];
int blocks[100];
void add(int limit)
{
    int i;
    for(i=0;i<limit;i++)
    {
        printf("\nEnter process: ");
        scanf("%s",&processes[i]);

        printf("Enter process size: ");
        scanf("%d",&blocks[i]);

    }

}

void phy_add(int limit,int start_add)
{
    int i;
    int temp,sel;

        for(i=0;i<limit;i++)
        {

            temp=i+start_add;
            printf("\nlogical address: %d",i);
            printf("\nphysical addrss: %d\n\n",temp);

        }

}
void log_to_phy(int limit,int start_add)
{
    int sel,add;
    printf("Enter proccesse :");
    scanf("%d",&sel);
    if(sel<limit)
    {
        add=sel+start_add;
        printf("\nlogical address: %d",sel);
        printf("\nphysical addrss: %d\n\n",add);
    }
    else
    {
        printf("\nThe process is not present in ram");
        printf("\n------------- Error!!! -------------");
    }
}


void main()
{
    int ch;
    int limit,start_add;
    printf("\n\t\t\t\t  ------------------------------------------------------- ");
    printf("\n\t\t\t\t || ADDRESS CONVERSION USING PROTECTION AND RELOCATION || ");
    printf("\n\t\t\t\t  ------------------------------------------------------- \n\n");


    printf("\n************************************************************************************************************************\n\n");
    printf("\nEnter starting address of Ram: ");
    scanf("%d",&start_add);
    if(start_add <= 0)
    {
        printf("\nError....\n please enter valid starting address of ram");

         printf("\nEnter starting address of Ram: ");
    scanf("%d",&start_add);
    }

    while(1)
    {
        printf("\n==============================================");
        printf("\n1.add process\n2.get physical address of each process\n3.get physical address of a process\n4.exit");
        printf("\n==============================================\n\n");
        printf("\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
             printf("\nEnter number of process to be inserted:");
            scanf("%d",&limit);
            add(limit);
            break;

        case 2:

            phy_add(limit,start_add);
            break;

        case 3:

            log_to_phy(limit,start_add);
            break;


        case 4:
            printf("Exit out of terminal");
            exit(0);

        default:printf("\nEnter valid choice");
        }

    }



    getch();
}
