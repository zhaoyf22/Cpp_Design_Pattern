//
// Created by zhaoyf on 2022/4/16.
//

#include "AdapterPattern_SharedPtr.h"
#include <iostream>

namespace AdapterPattern_SharedPtr {
    // Adaptee
    void Adaptee::SpecialRequest() {
        std::cout << "Adaptee SpecialRequest" << std::endl;
    }

    // Adapter
    Adapter::Adapter(std::unique_ptr<Adaptee> p) : ptee(std::move(p)) {}

    void Adapter::Request() {
        ptee->SpecialRequest();
    }

    void test() {
        std::unique_ptr<Target> pTarget = std::make_unique<Adapter>(std::make_unique<Adaptee>());
        pTarget->Request();
    }
}