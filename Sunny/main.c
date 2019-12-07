#include <stdio.h>
#include "singlelinklist.c"


int menu()
{
    int ch;
    printf("\n 1.Create a list ");
    printf("\n--------------------------");
    printf("\n 2.Insert a node at beginning ");
    printf("\n 3.Insert a node at end");
    printf("\n 4.Insert a node at middle");
    printf("\n--------------------------");
    printf("\n 5.Delete a node from beginning");
    printf("\n 6.Delete a node from Last");
    printf("\n 7.Delete a node from Middle");
    printf("\n--------------------------");
    printf("\n 8.Traverse the list (Left to Right)");
    printf("\n 9.Traverse the list (Right to Left)");
    printf("\n--------------------------");
    printf("\n 10. Count nodes ");
    printf("\n 11. Exit ");
    printf("\n\n Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}

//Driver function for the single link list operations
int main()
{
    node* start = NULL;
    int ch, n, data;
    while(1)
    {
        ch = menu();
        switch(ch)
        {
            case 1:
                if(start == NULL)
                {
                    printf("\n Number of nodes you want to create: ");
                    scanf("%d", &n);
                    createlist(&start,n);
                    printf("\n List created..");
                }
                else
                    printf("\n List is already created..");
                break;

            case 2:
                printf("\n Enter data: ");
                scanf("%d", &data);
                insert_at_beg(&start, data);
                break;
            
            case 3:
                printf("\n Enter data: ");
                scanf("%d", &data);
                insert_at_end(&start, data);
                break;

            case 4:
                printf("\n Enter data: ");
                scanf("%d", &data);
                insert_at_mid(&start, data);
                break;

            case 5:
                delete_at_beg(&start);
                break;

            case 6:
                delete_at_last(&start);
                break;

            case 7:
                delete_at_mid(&start);
                break;
            
            case 8:
                traverse(&start);
                break;

            case 9:
                printf("\n The contents of List (Right to Left): \n");
                rev_traverse(start);
                printf(" X ");
                break;

            case 10:
                printf("\n No of nodes : %d ", countnode(start));
                break;

            case 11 :
                deleteList(&start);
                exit(0);
                break;
                
            default:
                printf("Wrong Choice\n");
                break;
        }
    }
    return 0;
}
