//
//  NativeAdd.m
//  Runner
//
//  Created by zack on 2020/11/1.
//
#include "NativeAddWrapper.h"
#include "NativeAdd.hpp"

@implementation NativeAddWrapper

//_NATIVE_ADD_DART_EXPORT
- (int)ocAdd :(int)number1 :(int)number2 {
//    int a = cppAdd(number1, number2);
//    printf("%d", a);
    return number1 + number2;
}

@end
