#include <iostream>
using namespace std;
struct node {
  int data;
  node* next;
};
node* create(int Arry[]) {
  node *p, *pre, *head;
  head = new node;
  head->next = NULL;
  pre = head;
  for (int i = 0; i < 5; i++) {
    p = new node;
    p->data = Arry[i];
    p->next = NULL;
    pre->next = p;
    pre = p;
  }
  return head;
}
int search(node* head, int x) {
  node* p = head->next;
  int count = 0;
  while (p) {
    if (p->data == x) count++;
    p = p->next;
  }
  return count;
}
void insert(node* head, int pos, int x) {
  node* p = head;
  for (int i = 0; i < pos - 1; i++) p = p->next;
  node* q = new node;
  q->data = x;
  q->next = p->next;
  p->next = q;
}
void del(node* head, int x) {
  node* p = head->next;
  node* pre = head;
  while (p != NULL) {
    if (p->data == x) {
      pre->next = p->next;
      delete (p);
      p = pre->next;
    } else {
      pre = p;
      p = p->next;
    }
  }
}
int main() {
    
  system("pause");
  return 0;
}