#include <cstdio>
#include "linklist.h"
using namespace pav;

//add new knot to end of last knot 
void pav::addKnot(knot* head,int element){
    if(!head->next){
        head->next = new knot(NULL,element);
    }else{
        knot* current = head->next;
        while(current->next != NULL){
             current = current->next;
        }
        current->next = new knot(NULL,element);  
    }
}

//insert knot at index starts at 0
void pav::insertKnot(knot* head,int element,int index){
    knot* current = head;
    for(int i = 0; i < index;i++){
        if(!current->next)break;//rethink!
        current = current->next;
    }
    knot* hold = current->next;
    current->next = new knot(hold,element);
}

//delete knot at index
void pav::deleteKnot(knot* head,int index){
    knot* current = head;
    for(int i = 0;i<index;i++){
        current = current->next;  
    }
    knot* hold = current->next->next;
    delete(current->next);
    current->next = hold;
}

//print list starting at current and downwards 
void pav::printList(knot* head){
    knot* current = head;
    while(true){
        std::printf("[%u]->",current->element);
        current = current->next;
        if(current == NULL)break;
    }
    std::printf("\n");
}

double pav::getLength(knot* head){
    knot* current = head;
    double length = 0;
    while(!current){
        length++;
        current = current->next;
    }
    return length;
}

