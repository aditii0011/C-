#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    int i = 2;
    struct node *ptr, *first, *cpt;
    char choice;
    printf("Enter first data:");
    ptr = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &ptr->data);
    first = ptr;

    do
    {
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d data", i);
        scanf("%d", &cpt->data);
        i++;
        ptr->next = cpt;
        ptr = cpt;
        printf("Enter Y if you want to enter more data:");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    cpt->next = NULL;

    ptr = first;
    while (ptr->next != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    cpt = (struct node *)malloc(sizeof(struct node));
    printf("Enter the new values to be inserted at the beginning: ");
    scanf("%d", &cpt->data);
    cpt->next = first;
    first = cpt; // taki ab jo first cpt ki value h vo first pr aajaye
    ptr = first;
    while (ptr->next != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}
