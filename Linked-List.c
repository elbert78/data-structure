#include <stdio.h>
#include <stdlib.h>

struct Node{
  int value;

  struct Node* next; // Pointer to the next Node
}*head = NULL, *tail = NULL;

struct Node* createNewNode(int value){
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); //Allocate memory with the size of the node

  newNode -> value = value;
  newNode -> next = NULL;
  return newNode;
}

// Push Head
void pushHead(int value){
  struct Node* newNode = createNewNode(value);

  if(head ==  NULL){ //If linked list is empty
    head = tail = newNode;
  }else{
    newNode -> next = head;
    head = newNode;
  }
}
// Push Tail
void pushTail(int value){
  struct Node* newNode = createNewNode(value);

  if(head == NULL){ //If linked list is empty
    head = tail = newNode;
  }else{
    tail -> next = newNode;
    tail = newNode;
  }
}

// Push Mid
void pushMid(int value){ // Data will be sorted
  struct Node* newNode = createNewNode(value);

  if(head == NULL){ //If linked list is empty
    head = tail = newNode;
  }else if(newNode -> value < head -> value){ //Check if the value in head is smaller than inserted value
    newNode -> next = head;
    head = newNode;
  }else if(newNode -> value >= tail -> value){
    tail -> next = newNode;
    tail = newNode;
  }else{
    struct Node* currNode = head;

    while (currNode != NULL){
      if(currNode -> next -> value > newNode -> value){
        break;
      }

      currNode = currNode -> next;
    } 

    newNode -> next = currNode -> next;
    currNode -> next = newNode;
  }
}

// Pop Head
void popHead(){
  if(head == NULL) {
    printf("Linked list is Empty!\n");
    return;
  }
  
  struct Node* temp = head;

  if(head == tail){
    head = tail = NULL;
  }else{
    head = head -> next;
  }

  free(temp);
}

// Pop Tail
void popTail(){
  if(head == NULL) {
    printf("Linked list is Empty!\n");
    return;
  }

  struct Node* temp = tail;

  if(head == tail){
    head = tail = NULL;
  }else{
    struct Node* curr = head;
    while (curr -> next != tail){
      curr = curr -> next;
    }
    tail = curr;
    tail -> next = NULL;
  }

  free(temp);
}

// Pop Mid
void popMid(int value){
  if(head == NULL){
    printf("Linked list is Empty!\n");
    return;
  }


  struct Node* temp;
  struct Node* curr;

  if(head == tail && value == head -> value){
    temp = head;
    head = tail = NULL;
  }else if (value == head -> value){
    temp = head;
    head = head -> next;
  }else{
    curr = head;
    while (curr -> next != NULL)
    {
      if(curr -> next -> value == value){
        break;
      }
      curr = curr -> next;
    }

    if(curr -> next == NULL){
      printf("can't fine the value\n");
      return;
    }

    if(curr -> next == tail){
      tail = curr;
    }
    temp = curr -> next;
    curr -> next = temp -> next;
    
  }

  free(temp);
}

void printAll(){
  struct Node* currNode = head;

  if(head == NULL){
    printf("Linked List is Empty!\n");
    return;
  }

  while(currNode != NULL){
    printf("%d -> ", currNode -> value);
    
    currNode = currNode -> next;
  }
  printf("\n");
}

int main() {

  pushMid(15);
  pushMid(25);
  pushMid(20);
  pushMid(1);
  pushMid(2);

  printAll();
  
  popHead();
  popTail();
  popMid(15);

  printAll();

  return 0;
}