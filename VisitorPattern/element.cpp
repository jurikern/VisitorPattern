//
//  element.cpp
//  VisitorPattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#include "element.h"

Element::Element() {}
Element::~Element() {}

ElementA::ElementA() {}

std::string ElementA::GetAMessage() {
    return "ElementA message!";
}

void ElementA::Accept(const Visitor& visitor) {
    visitor.VisitElementA(this);
}

ElementB::ElementB() {}

std::string ElementB::GetBMessage() {
    return "ElementB message!";
}

void ElementB::Accept(const Visitor& visitor) {
    visitor.VisitElementB(this);
}


