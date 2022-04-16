//
// Created by zhaoyf on 2022/4/16.
//

#ifndef CPPDESIGNPATTERN_BRIDGEPATTERN_SHAREDPTR_H
#define CPPDESIGNPATTERN_BRIDGEPATTERN_SHAREDPTR_H

#include <memory>

namespace BridgePatternSharedPtr {
    // Implementor
    class Implementor {
    public:
        virtual ~Implementor() {}

        virtual void Action() = 0;
    };

    // ConcreteImplementorA
    class ConcreteImplementorA : public Implementor {
    public:
        virtual ~ConcreteImplementorA() {}

        virtual void Action();
    };

    // ConcreteImplementorB
    class ConcreteImplementorB : public Implementor {
    public:
        virtual ~ConcreteImplementorB() {}

        virtual void Action();
    };

    // Abstraction, 抽象
    class Abstraction {
    public:
        virtual ~Abstraction() {}

        virtual void operation() = 0;
    };

    // RefinedAbstraction
    class RefinedAbstraction : public Abstraction {
    public:
        RefinedAbstraction(std::unique_ptr<Implementor> p);

        virtual ~RefinedAbstraction() {}

        virtual void operation() override;

    private:
        std::unique_ptr<Implementor> pImpl;
    };

    void test();
}


#endif //CPPDESIGNPATTERN_BRIDGEPATTERN_SHAREDPTR_H
