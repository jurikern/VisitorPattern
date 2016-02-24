//
//  visitor.cpp
//  VisitorPattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#include "visitor.h"
#include "element.h"
#include <iostream>

void Visitor::VisitElementA(ElementA* element) {
    std::cout << element->GetAMessage() << std::endl;
}

void Visitor::VisitElementB(ElementB* element) {
    std::cout << element->GetBMessage() << std::endl;
}