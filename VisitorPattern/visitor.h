//
//  visitor.h
//  VisitorPattern
//
//  Created by Juri Kern on 24/02/16.
//  Copyright © 2016 Juri Kern. All rights reserved.
//

#pragma once

class ElementA;
class ElementB;

class Visitor final {
public:
    void VisitElementA(ElementA*);
    void VisitElementB(ElementB*);
};
