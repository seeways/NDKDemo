#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_test_ndkdemo_MyJNI_sayHello(JNIEnv *env, jobject instance) {

    std::string say = "say 就 say！\n Hello";

    return env->NewStringUTF(say.c_str());
}

extern "C" //表示对java输出
JNIEXPORT jint JNICALL
Java_com_test_ndkdemo_MyJNI_sum(JNIEnv *env, jobject instance, jint x, jint y) {
    return x + y;
}