#include <exception>
#include <cstdio>
#include "linklist.h"
using namespace pav;
using namespace std;

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

//insert knot at index, starts at 0
void pav::insertKnot(knot* head,int element,int index){
    if((getLength(head))<index){
        //printf("Out of Range");
        throw 10;
    }
    knot* current = head;
    if(getLength(head) ==index){
        addKnot(head,element);
    }else{
        for(int i = 0; i < index;i++){
            if(!current->next)break;//rethink!
            current = current->next;
        }
        knot* hold = current->next;
        current->next = new knot(hold,element);
    }
}

//delete knot at index, starts at 0
void pav::deleteKnot(knot* head,int index){
    if((getLength(head)-1)<index){
        //printf("Out of Range");
        throw 10;
    }
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
    while(current != NULL){
        printf("[%u]->",current->element);
        current = current->next;
    }
    printf("NULL\n");//end of list
}

//get length of linklist returns double
long pav::getLength(knot* head){
    knot* current = head->next;
    long length = 0;
    while(current != NULL){
        length++;
        current = current->next;
    }
    return length;
}

