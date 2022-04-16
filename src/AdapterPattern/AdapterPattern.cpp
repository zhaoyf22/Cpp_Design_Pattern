//
// Created by zhaoyf on 2022/4/10.
//

#include "AdapterPattern.h"
#include <iostream>

namespace AdapterPattern {
    // Adaptee
    void Adaptee::SpecialRequest() {
        std::cout << "Adaptee SpecialRequest" << std::endl;
    }

    // Adapter
    Adapter::Adapter(Adaptee *p) : ptee(p) {}

    void Adapter::Request() {
        ptee->SpecialRequest();
    }

    void test() {
        Adaptee *ptee = new Adaptee();
        Target *p = new Adapter(ptee);
        p->Request();

        delete ptee;
        delete p;
    }

}