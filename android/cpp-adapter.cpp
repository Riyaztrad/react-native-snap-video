#include <jni.h>
#include "react-native-snap-video.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_snapvideo_SnapVideoModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return snapvideo::multiply(a, b);
}
