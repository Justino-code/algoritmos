

#include <stdio.h>
#include <stdlib.h>

struct node{
  int value;
  struct node *next;
};

struct list{
  struct node *start;
  struct node *end;
  int size;
};

int insert(int value, struct list *l);
int insertBegin(int value, struct list *l);

void getAll(struct list *l);

int get(int index, struct list *l);

int delete(int index, struct list *l);

int reverse(struct list *l);


int main(){
  struct list *l = malloc(sizeof(struct list));

  if(l == NULL) return 1;

  insert(10, l);
  insert(20, l);
  insert(30, l);
  insert(40, l);
  insertBegin(5, l);

  printf("start: %d\n", l->start->value);
  printf("end: %d\n", l->end->value);

  printf("size: %d\n", l->size);

  getAll(l);

  int v = get(2, l);
  
  printf("\n\tvalor get: %d\n", v);

  int r = delete(1, l);
  r = delete(2, l);

  printf("\n\tindex removido: %d\n", r);

  printf("size apos remocao: %d\n", l->size);

  printf("\n\tvalores apos remover:\n");

  getAll(l);

  reverse(l);

  printf("\n\tvalores apos reverse:\n");

  getAll(l);
}

int insert(int value,struct list *l){
  struct node *n = malloc(sizeof(struct node));

  if(n == NULL){
    return 1;
  }
  
  n->value = value;
  n->next = NULL;

  if(l->start == NULL){
    l->start = n;
    l->end = n;
  }else{
    l->end->next = n;
    l->end = n;
  }

  l->size++;

  return 0;
}

int insertBegin(int value, struct list *l){
  struct node *n = malloc(sizeof(struct node));

  if(n == NULL) return -1;

  n->value = value;
  n->next = NULL;

  if(l->start == NULL){
    l->start = n;
    l->end = n;
  }else{
    n->next = l->start;
    l->start = n;
  }

  l->size++;
  
  return 0; 
}

int get(int index, struct list *l){
  int count = 0;
  int value;

  if(l == NULL) return -1;
  if(index < 0 || index >= l->size) return -1;

  struct node *n = l->start;

  while(n != NULL){
    value = n->value;
    if(index == count) return value;
   
    n = n->next;

    count++;
  }

  return -1;
}

void getAll(struct list *l){
  int value;

  if(l->size == 0) {
    printf("lista vazia\n");
    return;
  }

  struct node *n = l->start;

  while(n != NULL){
    value = n->value;

    n = n->next;

    printf("%d\n", value);
  }
}

int delete(int index, struct list *l){
  int count = 0;

  if(l == NULL) return -1;
  if(index < 0 || index >= l->size) return -1;

  struct node *n = l->start;
  struct node *prev = NULL;

  while(n != NULL){
    if(index == count){

      if(l->start == l->end){
        l->start = NULL;
        l->end = NULL;
      }

      else if(n == l->start){

        l->start = n->next;

      }

      else if(n == l->end){
        prev->next = NULL;
        l->end = prev;

      }else{
        prev->next = n->next;
      }

      free(n);

      l->size--;

      return count;
    }

    prev = n;
    n = n->next;

    count++;
  }

  return -1;

}

int reverse(struct list *l){

  if(l == NULL) return -1;
  if (l->size < 2) return 0;

  struct node *curr = l->start;
  struct node *old_start = l->start;
  struct node *next = NULL;
  struct node *prev = NULL;

  int count = 0;

  while(curr != NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  l->start = prev;
  l->end = old_start;

  return 0;
}
