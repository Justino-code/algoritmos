
/*
 * Listas duplamente encadeada e nao oredenqda
 */
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
  struct node *before;
};

struct list {
  struct node *start;
  struct node *end;
  int size;
};

int insert(int value, struct list *l);
int insertBegin(int value, struct list *l);

int getValue(int index, struct list *l);
int getIndex(int value, struct list *l);
int getOptimized(int index, struct list *l);

int removeLast(struct list *l);
int removeFirst(struct list *l);
int remove(int index, struct list *l);

int main(){}

int insert(int value, struct list *l){
  struct node *n = malloc(sizeof(struct node));

  if(l == NULL || n == NULL) return -1;

  n->value = value;
  n->next =  NULL;
  n->before = NULL;

  if(l->start == NULL){
    l->start = n;
    l->end = n;
  }else{
    l->end->next = n;
    n->before = l->end;
    l->end = n;
  }

  l->size++;

  return 1;
}

int insertBegin(int value, struct list *l){
  struct node *n = malloc(sizeof(struct node));

  if(l == NULL || n == NULL) return -1;

  n->value = value;
  n->next = NULL;
  n->before = NULL;

  if(l->start == NULL){
    l->start = n;
    l->end = n;
  }else{
    l->start->before = n;
    n->next = l->start;
    l->start = n;
  }

  l->size++;

  return 1;
}

int getValue(int index, struct list *l){
  if(l == NULL || l->start == NULL) return -1;

  struct node *curr = l->start;
  int count = 0;

  while(curr != NULL){
    if(count == index)
      return curr->value;
    count++;
    curr = curr->next;
  }

  return -1;
}

int getIndex(int value, struct list *l){
  if(l == NULL || l->start == NULL) return -1;

  struct node *curr = l->start;
  int count = 0;

  while(curr != NULL){
    if(curr->value == value)
      return count;
    count++;
    curr = curr->next;
  }

  return -1;

}

int getOptimized(int index, struct list *l){
  if(l == NULL || l->start == NULL || index >= l->size || index < 0)
     return -1;

  struct node *curr = l->start;
  int count = 0;
  int middle = l->size/2;

   if(index > middle){
     curr = l->end;
     count = l->size -1;

     while (curr != NULL){
       if(index == count)
         return curr->value;
       count--;
       curr = curr->before;
     }
   }else{
     while(curr != NULL){
       if(index == count)
         return curr->value;
       count++;
       curr = curr->next;
     }
   }

   return -1;
 }

int remove(int index, struct list *l){
  if(l == NULL || l->start == NULL || index >= l->size || index < 0) return -1;

  struct node *curr = l->start;
  int count = 0;

  if(index == 0){
    if(l->size == 1){
      l->start = NULL;
      l->end = NULL;
    }else{
      l->start = curr->next;
      l->start->before = NULL;
    }

    free(curr);

    l->size--;
    return 1;
  }

  if(index == (l->size - 1)){
    struct node *end = l->end;

    if(l->size == 1){
      l->start = NULL;
      l->end = NULL;
    }else{
      l->end = end->before;
      l->end->next = NULL;
    }

    free(end);

    l->size--;
    return 1;
  }

  while(curr != NULL){

    if(count == index){
      struct node *r = curr->before;
      curr->before->next = curr->next;
      curr->next->before = curr->before;
      free(r->next);
      l->size--;
      return 1;
    }

    curr = curr->next;
    count++;
  }

  return -1;
}

int removeFirst(struct list *l){
  if(l == NULL || l->start == NULL) return -1;

  struct node *start = l->start;

  if(start->next == NULL){
    l->start = NULL;
    l->end = NULL;
  }else{
    l->start = start->next;
    l->start->before = NULL;
  }

  free(start);

  l->size--;

  return 1;
}

int removeLast(struct list *l){
  if(l == NULL || l->start == NULL) return -1;

  struct node *end = l->end;

  if(end->before == NULL){
    l->start = NULL;
    l->end = NULL;
  }else{
    l->end = end->before;
    l->end->next = NULL;
  }

  free(end);

  l->size--;

  return 1;
}
