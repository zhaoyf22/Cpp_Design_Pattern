//
// Created by zhaoyf on 2022/4/10.
//

#ifndef CPPDESIGNPATTERN_ADAPTERPATTERN_H
#define CPPDESIGNPATTERN_ADAPTERPATTERN_H


namespace AdapterPattern {
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
        Adapter(Adaptee *p);

        virtual ~Adapter() {};

        virtual void Request() override;

    private:
        Adaptee *ptee;
    };

    void test();
}


#endif //CPPDESIGNPATTERN_ADAPTERPATTERN_H
