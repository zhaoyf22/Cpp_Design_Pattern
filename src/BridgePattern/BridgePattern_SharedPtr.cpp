//
// Created by zhaoyf on 2022/4/16.
//

#include "BridgePattern_SharedPtr.h"
#include "iostream"

namespace BridgePatternSharedPtr {
    // ConcreteImplementorA
    void ConcreteImplementorA::Action() {
        std::cout << "ConcreteImplementorA::Action" << std::endl;
    }

    // ConcreteImplementorB
    void ConcreteImplementorB::Action() {
        std::cout << "ConcreteImplementorB::Action" << std::endl;
    }

    // RefinedAbstraction
    RefinedAbstraction::RefinedAbstraction(std::unique_ptr<Implementor> p) : pImpl(std::move(p)) {
    }

    void RefinedAbstraction::operation() {
        pImpl->Action();
    }

    void test() {
        auto pImplA = std::make_unique<ConcreteImplementorA>();
        auto pa = std::make_unique<RefinedAbstraction>(std::move(pImplA));
        pa->operation();

        auto pb = std::make_unique<RefinedAbstraction>(std::make_unique<ConcreteImplementorB>());
        pb->operation();
    }
}