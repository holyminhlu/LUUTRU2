#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//hien thi list
void printList() {

   struct node *ptr = head;

   printf("\n[head] =>");
   //bat dau tu phan dau cua list
   while(ptr != NULL) {        
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

//chen link tai vi tri dau tien
void insert(int data) {
   //tao mot link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //tro link do toi first node cu
   link->next = head;

   //tro first toi first node moi
   head = link;
}

int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   return 0;
}