#include <iostream>

struct Node {
int data;
Node* next;
};

Node* Insert(Node* head, int data)
{
  Node* temp = new Node;
  temp->data = data;
  temp->next = NULL;
  if(head == NULL) head = temp;
  else
  {
    Node* temp1 = head;
    while(temp1->next != NULL)
      {
        temp1 = temp1->next;
      }
    temp1->next = temp;
  }
  return head;
}

void Print(Node* p)
{
  if(p == NULL) {
    printf("\n");
    return; // exit condition
    }
  printf("%d, ", p->data); // First print value in node
  Print(p->next); // Recursive call)
}

void PrintReverse(Node* p)
{
  if(p == NULL) {
    return; // exit condition
    }
  
  PrintReverse(p->next); // Recursive call)
  printf("%d, ", p->data); // First print value in node
  
}


int main() {
  Node* head = NULL;

  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 8);
  head = Insert(head, 10);
  head = Insert(head, 12);

  Print(head);
  PrintReverse(head);

  
  
}