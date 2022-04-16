//
// Created by zhaoyf on 2022/4/16.
//

#ifndef CPPDESIGNPATTERN_ADAPTERPATTERN_SHAREDPTR_H
#define CPPDESIGNPATTERN_ADAPTERPATTERN_SHAREDPTR_H

#include <memory>

namespace AdapterPattern_SharedPtr {
    // Target
    class Target {
    public:
        virtual ~Target() {};

        virtual void Request() = 0;
    };

    // Adaptee
    class Adaptee {
    public:
        void SpecialRequest();
    };

    // Adapter
    class Adapter : public Target {
    public:
        Adapter(std::unique_ptr<Adaptee> p);

        virtual ~Adapter() {};

        virtual void Request() override;

    private:
        std::unique_ptr<Adaptee> ptee;
    };

    void test();
}


#endif //CPPDESIGNPATTERN_ADAPTERPATTERN_SHAREDPTR_H
