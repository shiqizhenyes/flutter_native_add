//
//  NativeAdd.h
//  Runner
//
//  Created by zack on 2020/11/1.
//
#ifndef NativeAddWrapperH
#define NativeAddWrapperH
#import <Foundation/Foundation.h>

#define _NATIVE_ADD_DART_EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((used))

#include<stdint.h>

@interface NativeAddWrapper : NSObject

-(int) ocAdd :(int) number1 :(int) number2;

@end

#endif
