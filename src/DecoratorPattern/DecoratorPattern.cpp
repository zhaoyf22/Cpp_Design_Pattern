//
// Created by zhaoyf on 2022/4/10.
//

#include "DecoratorPattern.h"
#include <iostream>

namespace DecoratorPattern {
    // ConcreteComponent
    void ConcreteComponent::Operation() {
        std::cout << "Concrete Component operation" << std::endl;
    }

    // Decorator
    Decorator::Decorator(Component *c) : pCom(c) {}

    void Decorator::Operation() {
        pCom->Operation();
    }

    // ConcreteDecoratorA
    ConcreteDecoratorA::ConcreteDecoratorA(Component *c) : Decorator(c) {}

    void ConcreteDecoratorA::Operation() {
        Decorator::Operation();
        AddBehavior();
    }

    void ConcreteDecoratorA::AddBehavior() {
        std::cout << "ConcreteDecoratorA AddBehavior AAAA" << std::endl;
    }

    // ConcreteDecoratorA
    ConcreteDecoratorB::ConcreteDecoratorB(Component *c) : Decorator(c) {}

    void ConcreteDecoratorB::Operation() {
        Decorator::Operation();
        AddBehavior();
    }

    void ConcreteDecoratorB::AddBehavior() {
        std::cout << "ConcreteDecoratorB AddBehavior BBBB" << std::endl;
    }


    void test() {
        auto pc = new ConcreteComponent();
        auto pa = new ConcreteDecoratorA(pc);
        Component *p = pa;
        p->Operation();

        auto pb = new ConcreteDecoratorB(pa);
        p = pb;
        p->Operation();

        delete pc;
        delete pa;
        delete pb;
    }
}
