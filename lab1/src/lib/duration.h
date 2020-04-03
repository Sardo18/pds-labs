#ifndef DURATION_LOGGER
#define DURATION_LOGGER

#include <string.h>
#include <time.h>
#include <iostream>
#include "color.h"

class DurationLogger {
    private:
        char *name;
        int t0;
    public:
        DurationLogger(const char *name);
        ~DurationLogger();
};

#endif