#pragma once

#include "api.h"

typedef unsigned char BYTE;
typedef unsigned int uint;

// Platform specific imports
#ifdef EUCALYPTUS_PLATFORM_WINDOWS
    #include <windows.h>
#endif

namespace Eucalyptus {
    class _EUCAPI AudioClip {
    public:
        AudioClip(const char *path);
        void play(bool loop = false, bool async = true);
    private:
        BYTE* buffer;
        int m_bufsize;
    };
}