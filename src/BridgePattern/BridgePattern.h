//
// Created by zhaoyf on 2022/4/16.
//

#ifndef CPPDESIGNPATTERN_BRIDGEPATTERN_H
#define CPPDESIGNPATTERN_BRIDGEPATTERN_H


namespace BridgePattern {
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
        RefinedAbstraction(Implementor *p);

        virtual ~RefinedAbstraction();

        virtual void operation() override;

    private:
        Implementor *pImpl;
    };

    void test();
}


#endif //CPPDESIGNPATTERN_BRIDGEPATTERN_H
