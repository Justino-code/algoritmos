
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct list {
  struct node *start;
  struct node *end;
  int size;
};

int insert(int value, struct list *l);

int main(){
  struct list *l = malloc(sizeof(struct list));

  l->start = NULL;
  l->end = NULL;
  l->size = 0;

  insert(2, l);
  insert(3, l);
  insert(1, l);
  insert(5, l);
  insert(4, l);
  insert(0, l);
  insert(0, l);
  insert(-1, l);

  struct node *curr = l->start;
  int value;

  printf("size: %d\n\n", l->size);

  while(curr != NULL){
    value = curr->value;
    curr = curr->next;
    
    printf("\t%d \n", value);
  }
}

int insert(int value, struct list *l){
  struct node *n = malloc(sizeof(struct node));

  if(n == NULL) return -1;
  
  n->value = value;
  n->next = NULL;

  if(l->start == NULL){
    l->start = n;
    l->end = l->start;
    l->size = 0;
  }else{
    struct node *curr = l->start;
    struct node *aux = NULL;
    struct node *end = l->end;
    struct node *prev = NULL;
    
    while(curr != NULL){
      if(curr->value > value){

        if(prev == NULL){
          l->start = n;
          l->start->next = curr;
        }else{
          prev->next = n;
          n->next = curr;
        }

        aux = curr;
        break;
      }

      prev = curr;

      curr = curr->next;
    }

    if(aux == NULL){
      l->end = n;
      end->next = n;
    }
  }

  l->size++;

  return 1;
}
