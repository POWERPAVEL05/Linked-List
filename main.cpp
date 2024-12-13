#include <cstdio>
#include "linklist.h"
//testfile
int main(){
    pav::LinkList t1;
    pav::LinkList t2;
    t1.appKnot(1);
    t1.printList();
    for(int i = 0; i < 10;i++){
        t2.appKnot(i);
    }
    t2.printList();
    return 0;
}
