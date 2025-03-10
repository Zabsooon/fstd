#include <stdio.h>
#include "base/base.h"

int main(int argc, char *argv[]) {

    printf("msvc    = %d\n", COMPILER_MSVC);
    printf("clang   = %d\n", COMPILER_CLANG);
    printf("gcc     = %d\n", COMPILER_GCC);
    printf("windows = %d\n", OS_WINDOWS);
    printf("linux   = %d\n", OS_LINUX);
    printf("mac     = %d\n", OS_MAC);
    printf("amd64   = %d\n", ARCH_X64);
    printf("x86     = %d\n", ARCH_X86);
    printf("arm     = %d\n", ARCH_ARM);
    printf("arm64   = %d\n", ARCH_ARM64);
    return 0;
}
