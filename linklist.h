#include <cstdio>

namespace pav{
    struct knot{
        int element;
        knot* next;
        
        knot(knot* knot, int nelement):
            next(knot),
            element(nelement)
        {}

        knot(int nelement):
            next(NULL),
            element(nelement)
        {}
        
        //very important --> nextknot is on heap!!!
        ~ knot(){
            delete(next);
        }

    };
    //add new knot to end of last knot 
    void addKnot(knot* head,int element);

    void insertKnot(knot* head,int element,int index);

    void deleteKnot(knot* head,int index);

    void printList(knot* head);

    long getLength(knot* head);
}
