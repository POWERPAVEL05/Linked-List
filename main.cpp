#include "linklist.h"
int main(){
    pav::knot* head = new pav::knot(500);
    pav::addKnot(head,5);
    pav::addKnot(head,7);
    pav::printList(head);
    return 0;
}
