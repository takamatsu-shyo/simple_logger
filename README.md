# simple_logger
Suple simple logger for C++.

## How to use
```
#include "SLog.hpp"

int main() {
    SLog logger("/tmp/log.txt");
    logger.write("Hello, logger.");
    return 0;
}
```

Then you will get,

```
2024-07-22 09:16:28 - Hello, logger.
```
