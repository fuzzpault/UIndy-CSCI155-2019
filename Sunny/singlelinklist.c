/*
    Name: MD Haque <haquem@uindy.edu>
    Date: Sept, 2019
    Desc: Singly-linked-list implementation in C.
*/

# include <stdio.h>
# include <stdlib.h>

struct slinklist
{
    int data;
    struct slinklist *next;
};

typedef struct slinklist node;


//and create a node for the link list
node* getnode(int data)
{
    node* newnode;
    newnode = (node*) malloc(sizeof(node));
    /*printf("\n Enter data: ");
    scanf("%d", &newnode -> data);
    */
    newnode -> data = data;
    newnode -> next = NULL;
    return newnode;
}

//Count the number of node in the link list
int countnode(node *ptr)
{
    int count=0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr -> next;
    }
    return (count);
}

//Create a link list with n nodes
void createlist(node** start, int n)
{
    int i;
    node *newnode;
    node *temp;
    for(i = 0; i < n; i++)
    {
        newnode = getnode(0);
        if(*start == NULL)
        {
            *start = newnode;
        }
        else
        {
            temp = *start;
            while(temp -> next != NULL)
                temp = temp -> next;
            temp -> next = newnode;
        }
    }
    return;
}

//Print the data value of each node in the link list
void traverse(node** start)
{
    node *temp;
    temp = *start;
    printf("\n The contents of List (Left to Right): \n");
    if(start == NULL)
    {
        printf("\n Empty List");
        return;
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d-->", temp -> data);
            temp = temp -> next;
        }
    }
    printf(" X ");
    return;
}

//Print the data value of each node in the link list in reverse order using recursion
void rev_traverse(node* start)
{
    if(start == NULL)
    {
        return;
    }
    else
    {
        rev_traverse(start -> next);
        printf("%d -->", start -> data);
    }
    return;
}

//Insert a node at the beginning of the link list
void insert_at_beg(node** start, int data)
{
    node *newnode;
    newnode = getnode(data);
    if(*start == NULL)
    {
        *start = newnode;
    }
    else
    {
        newnode -> next = *start;
        *start = newnode;
    }
    return;
}

//Insert a node at the end of the link list
void insert_at_end(node** start, int data)
{
    node *newnode, *temp;
    newnode = getnode(data);
    if(*start == NULL)
    {
        *start = newnode;
    }
    else
    {
        temp = *start;
        while(temp -> next != NULL)
        temp = temp -> next;
        temp -> next = newnode;
    }
    return;
}

//Insert a node at the intermediate position of the link list
void insert_at_mid(node** start, int data)
{
    node *newnode, *temp, *prev;
    int pos, nodectr, ctr = 1;
    newnode = getnode(data);
    printf("\n Enter the position: ");
    scanf("%d", &pos);
    nodectr = countnode(*start);
    if(pos > 1 && pos < nodectr)
    {
        //version 1 with two pointers temp and prev
        /*
        temp = prev = start;
        while(ctr < pos)
        {
            prev = temp;
            temp = temp -> next;
            ctr++;
        }
        prev -> next = newnode;
        newnode -> next = temp;
        */
        //version 2 with one pointer temp
        temp=*start;
        while(ctr<pos-1)
        {
            temp = temp->next;
            ctr++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    else
        printf("position %d is not a middle position", pos);
    return;
}

//Delete a node at the beginning of the link list
void delete_at_beg(node** start)
{
    node *temp;
    if(*start == NULL)
    {
        printf("\n No nodes are exist..");
        return ;
    }
    else
    {
        temp = *start;
        (*start) = temp -> next;
        free(temp);
        printf("\n Node deleted ");
    }
    return;
}

//Delete a node at the end of the link list
void delete_at_last(node** start)
{
    node *temp, *prev;
    if(*start == NULL)
    {
        printf("\n Empty List..");
        return ;
    }
    else
    {
        temp = *start;
        prev = *start;
        while(temp -> next != NULL)
        {
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = NULL;
        free(temp);
        printf("\n Node deleted ");
    }
    return;
}

//Delete a node at the intermediate position of the link list
void delete_at_mid(node** start)
{
    int ctr = 1, pos, nodectr;
    node *temp, *prev;
    if(*start == NULL)
    {
        printf("\n Empty List..");
        return ;
    }
    else
    {
        printf("\n Enter position of node to delete: ");
        scanf("%d", &pos);
        nodectr = countnode(*start);
        if(pos > nodectr)
        {
            printf("\nThisnode doesnot exist");
        }
        if(pos > 1 && pos < nodectr)
        {
            temp = prev = *start;
            while(ctr < pos)
            {
                prev = temp;
                temp = temp -> next;
                ctr ++;
            }
            prev -> next = temp -> next;
            free(temp);
            printf("\n Node deleted..");
        }
        else
        {
            printf("\n Invalid position..");
            //getch();
        }
    }
    return;
}

//free the entire link list
void deleteList(node** start)  
{  
    node *next,*current;  
    if(start == NULL)
    {
        printf("\n Empty List..");
        return ;
    }
    else
    {
        current=*start;
        while (current != NULL)  
        {  
            next=current->next;
            free(current);
            current=next;
        }  
        start = NULL;
    }
    
    return;
}

/***************************************************************************** */
//Get the data value of each node in the link list, or -1 if an error
int getLoc(node* start, unsigned loc)
{
    node *temp;
    temp = start;
    //printf("\n The contents of List (Left to Right): \n");
    if(start == NULL)
    {
        //printf("\n Empty List");
        return -1;
    }
    else
    {
        while(temp != NULL)
        {
            if(loc == 0)return temp -> data;
            //printf("%d-->", temp -> data);
            temp = temp -> next;
            loc--;
        }
    }
    //printf(" X ");
    return -1;
}

