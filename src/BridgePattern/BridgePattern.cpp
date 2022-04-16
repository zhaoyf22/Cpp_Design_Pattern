//
// Created by zhaoyf on 2022/4/16.
//

#include "BridgePattern.h"
#include "iostream"

namespace BridgePattern {
    // ConcreteImplementorA
    void ConcreteImplementorA::Action() {
        std::cout << "ConcreteImplementorA::Action" << std::endl;
    }

    // ConcreteImplementorB
    void ConcreteImplementorB::Action() {
        std::cout << "ConcreteImplementorB::Action" << std::endl;
    }

    // RefinedAbstraction
    RefinedAbstraction::RefinedAbstraction(Implementor *p) : pImpl(p) {
    }

    RefinedAbstraction::~RefinedAbstraction() {
        if (pImpl) {
            delete pImpl;
            pImpl = nullptr;
        }
    }

    void RefinedAbstraction::operation() {
        pImpl->Action();
    }

    void test() {
        Implementor *pImplA = new ConcreteImplementorA();
        Abstraction *pa = new RefinedAbstraction(pImplA);
        pa->operation();

        Implementor *pImplB = new ConcreteImplementorB();
        Abstraction *pb = new RefinedAbstraction(pImplB);
        pb->operation();

        delete pa;
        delete pb;
    }
}