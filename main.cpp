#include <iostream>

#include "node.h"
#include "llist.h"

int main(){
     //node* tail = new node(1.0);
        //node* second = new node(2.0, tail);
        //node* third = new node(3.0, second);
        nodespace::node A(2);
        A = 5;
        std::cout<<A.data()<<std::endl;
        
        nodespace::LList mylist;
        mylist.append(4);
        mylist.functionIMadeForPrinting();
        mylist.clear();
        mylist.functionIMadeForPrinting();
        mylist.append(4);
        mylist.append(4);
        mylist.remove(4);
        mylist.functionIMadeForPrinting();
        //mylist.insert(999, 2);
        // Frequency left to implement

        return 0;
}