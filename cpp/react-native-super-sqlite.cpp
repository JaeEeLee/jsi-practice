#include "react-native-super-sqlite.h"
#include <iostream>

using namespace facebook;
using namespace std;

void installSequel(jsi::Runtime &rt) {
    cout << "Installing JSI bindings" << endl;

    // function multiply {}
    // const multiply = () => {}
    jsi::Function multiply = jsi::Function::createFromHostFunction(rt, jsi::PropNameID::forAscii(rt,"multiply"), 0, [](jsi::Runtime &rt, const jsi::Value &thisValue, const jsi::Value *args, size_t count) -> jsi::Value {

        return jsi::Value(42);
    });
    
    // {jsiMultiplication: multiply}
    rt.global().setProperty(rt, "jsiMultiplication", multiply);
};

void cleanUpSequel(){
    
};
