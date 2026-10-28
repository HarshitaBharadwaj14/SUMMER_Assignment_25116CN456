#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* createnode(int key)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = key;
    new->next = NULL;
    return new;
};
struct node* head = NULL;
struct node* new;
struct node* temp;
void createlist()
{
  int choice;
  int data;
  do
  {
    printf("Enter the data for the node: ");
    scanf("%d", &data);
    struct node* new = createnode(data);
    if (head == NULL)
    {
      head = new;
      temp = new;
    }
    else
    {
      temp->next = new;
      temp = temp->next;
    }
      printf(" to add more nodes press 1");
      scanf("%d", &choice); 
    }
  
  while (choice == 1);
}
int countnodes(struct node* head)
{
    int count = 0;
    struct node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void traverselist(struct node* head)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void countnode(struct node* head)
{
    int count = 0, countpos = 0, countneg = 0, zero = 0;
    struct node* temp = head;
    while (temp != NULL)
    {
        count++;
        if (temp->data == 0){
          zero++;
        }
        else if(temp->data <0){
          countneg++;
        }
        else{
          countpos++;
        }
        temp = temp->next;
    }
    printf("Number of positive nodes in the linked list: %d\n", countpos);
    printf("Number of negative nodes in the linked list: %d\n", countneg);
    printf("Number of zero nodes in the linked list: %d\n", zero);
    printf("total number of nodes in the linked list: %d\n", count);
}
void search(struct node* head)
{
  int found=0, key;
  struct node* temp = head;
  if (head == NULL){
    printf("The linked list is empty\n");
    return;
  }
  else{
  printf("Enter the data of the node to be searched: ");
  scanf("%d", &key);
}
  while (temp != NULL){
   if( temp->data ==key){
    found++;
    break;
   }
  else{
    temp = temp->next;
  }
  }
  if (found !=0){
    printf("the data %d is found in the list ", key);
  }
  else
  printf(" data is not found in the list");
}

int main()
{
    createlist();
    printf("Number of nodes in the linked list: %d\n", countnodes(head));
    printf("the data of the linked list is: ");
    traverselist(head);
    printf("the number of nodes of positive, negative and zero are:\n");
    countnode(head);
    printf("searching for a node in the list:");
    search(head);

}
