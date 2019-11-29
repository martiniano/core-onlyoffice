ICU_MAJOR_VER = 58

core_windows {
    INCLUDEPATH += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/icu/include
    LIBS        += -L$$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/build -licuuc
}

core_linux {
    INCLUDEPATH += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/usr/local/include

    LIBS        += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/build/libicuuc.so.$$ICU_MAJOR_VER
    LIBS        += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/build/libicudata.so.$$ICU_MAJOR_VER
}

core_mac {
    INCLUDEPATH += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/usr/local/include

    LIBS        += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/build/libicuuc.$${ICU_MAJOR_VER}.dylib
    LIBS        += $$PWD/$$CORE_BUILDS_PLATFORM_PREFIX/build/libicudata.$${ICU_MAJOR_VER}.dylib
}
