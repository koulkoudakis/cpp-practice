#include <iostream>

struct Node {
  int data;
  Node* next;

};

// struct Node* head; 

// insert not at beginning
Node* Insert(Node* head, int x)
{
  Node* temp = new Node;
  temp->data = x;
  temp->next = head;
  
  head = temp;

  return head;
}


void Print(Node* head)
{
  Node* temp = head;

  printf("List is: ");

  while(temp != NULL)
    {
      printf(" %d", temp->data);
      temp = temp->next;
      
    }
  printf("\n");
  
}


int main() {
  Node *head = NULL; // empty list;
  printf("How many numbers? \n");

  int n, i, x;
  scanf("%d", &n);

  for (int i = 0; i<n; i++)
    {
      printf("Please enter a new number: ?\n");
      scanf("%d", &x);
      head = Insert(head, x);
      Print(head);
    }
 
}