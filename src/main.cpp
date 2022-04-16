#include "DecoratorPattern/DecoratorPattern.h"
#include "AdapterPattern/AdapterPattern.h"
#include "AdapterPattern/AdapterPattern_SharedPtr.h"
#include "BridgePattern/BridgePattern.h"
#include "BridgePattern/BridgePattern_SharedPtr.h"

int main() {
    BridgePatternSharedPtr::test();
    BridgePattern::test();
    AdapterPattern_SharedPtr::test();
    AdapterPattern::test();
    DecoratorPattern::test();
    return 0;
}