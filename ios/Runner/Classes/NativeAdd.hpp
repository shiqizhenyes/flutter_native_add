//
// Created by zack on 2020/10/30.
//

#ifndef FLUTTER_NATIVE_ADD_NATIVE_ADD_H
#define FLUTTER_NATIVE_ADD_NATIVE_ADD_H

#define _NATIVE_ADD_DART_EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((used))

#include<stdint.h>

_NATIVE_ADD_DART_EXPORT
int32_t cppAdd(int32_t number1, int32_t number2);

#endif
