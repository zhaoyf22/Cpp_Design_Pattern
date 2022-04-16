//
// Created by zhaoyf on 2022/4/10.
//

#ifndef CPPDESIGNPATTERN_DECORATORPATTERN_H
#define CPPDESIGNPATTERN_DECORATORPATTERN_H

namespace DecoratorPattern {
    // Component
    class Component {
    public:
        virtual ~Component() {};

        virtual void Operation() = 0;
    };

    // ConcreteComponent
    class ConcreteComponent : public Component {
    public:
        virtual ~ConcreteComponent() {}

        virtual void Operation() override;
    };

    // Decorator
    class Decorator : public Component {
    public:
        Decorator(Component *c);

        virtual ~Decorator() {}

        virtual void Operation() override;

    private:
        Component *pCom;
    };

    // ConcreteDecoratorA
    class ConcreteDecoratorA : public Decorator {
    public:
        ConcreteDecoratorA(Component *c);
        // virtual ~ConcreteDecoratorA(); // 要声明就要实现, 否则报错

        virtual void Operation() override;

        void AddBehavior(); // 模拟添加的特殊功能
    };

    // ConcreteDecoratorB
    class ConcreteDecoratorB : public Decorator {
    public:
        ConcreteDecoratorB(Component *c);
        // virtual ~ConcreteDecoratorB(){};

        virtual void Operation() override;

        void AddBehavior(); // // 模拟添加的特殊功能
    };

    void test();
}
#endif //CPPDESIGNPATTERN_DECORATORPATTERN_H
