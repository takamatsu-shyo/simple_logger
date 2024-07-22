#include "SLog.hpp"

int main() {
    SLog logger("/tmp/simple.log");
    logger.write("Hello, logger.");
    return 0;
}

