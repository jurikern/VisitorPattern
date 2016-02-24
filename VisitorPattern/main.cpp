//
//  main.cpp
//  VisitorPattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#include <iostream>
#include "visitor.h"
#include "element.h"

int main(int argc, const char * argv[]) {
    Visitor v;
    
    Element* elementA = new ElementA();
    Element* elementB = new ElementB();
    
    elementA->Accept(v);
    elementB->Accept(v);
    
    delete elementA;
    delete elementB;
    
    return 0;
}
