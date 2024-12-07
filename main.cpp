#include <cstdio>
#include "linklist.h"
//testfile
int main(){
    pav::knot* head = new pav::knot(500);
    pav::addKnot(head,5);
    pav::addKnot(head,7);
    pav::insertKnot(head,10,2);
    pav::printList(head);
    std::printf("\tLength:%ld\n",pav::getLength(head));
    return 0;
}
