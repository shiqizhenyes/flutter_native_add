import 'dart:ffi';
import 'dart:io';

import 'package:flutter/services.dart';

final dynamicLibrary = Platform.isAndroid ?
DynamicLibrary.open("libnative_add.so") : DynamicLibrary.process();

final int Function(int x, int y) nativeAdd =
    dynamicLibrary.lookup<NativeFunction<Int32 Function(Int32, Int32)>>("cppAdd").asFunction();

class NativeAdd {
    static const MethodChannel _channel = MethodChannel("add");
}