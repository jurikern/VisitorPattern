//
//  element.h
//  VisitorPattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#pragma once

#include "visitor.h"
#include <string>

class Element {
public:
    virtual ~Element();
    virtual void Accept(const Visitor&) = 0;
protected:
    Element();
};

class ElementA final : public Element {
public:
    ElementA();
    
    std::string GetAMessage();
    void Accept(const Visitor&);
};

class ElementB final: public Element {
public:
    ElementB();
    
    std::string GetBMessage();
    void Accept(const Visitor&);
};