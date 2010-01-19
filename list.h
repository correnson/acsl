struct list {
  int hd;
  struct list* next;
};

// reachability in linked lists
/*@ inductive reachable{L}(struct list *root, struct list *to) {
  @   case empty{L}: \forall struct list *l; reachable(l,l) ;
  @   case non_empty{L}: \forall struct list *l1,*l2;
  @      \valid(l1) && reachable(l1->next,l2) ==> reachable(l1,l2) ;
  @ }
*/
