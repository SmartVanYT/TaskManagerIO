
#include <Arduino.h>
#include <AUnit.h>

using namespace aunit;

void setup() {
    Serial.begin(115200);
    while (!Serial);
}

void loop() {
    TestRunner::setTimeout(60);
    TestRunner::run();
}
