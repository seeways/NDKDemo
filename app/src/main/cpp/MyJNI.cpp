#include <jni.h>
#include <string>

extern "C"  //表示对java输出
JNIEXPORT jstring JNICALL // 输入类型
Java_com_test_ndkdemo_MyJNI_sayHello(JNIEnv *env, jobject instance) {

    std::string say = "say 就 say！\n Hello";

    return env->NewStringUTF(say.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_test_ndkdemo_MyJNI_sum(JNIEnv *env, jobject instance, jint x, jint y) {
    return x + y;
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_test_ndkdemo_MyJNI_receiveYUV(JNIEnv *env, jobject instance, jbyteArray bytes_) {
    jbyte *bytes = env->GetByteArrayElements(bytes_, NULL);
    if (bytes == NULL) {
        return 0; /* exception occurred */
    }

    //do something...
    std::string say = "输出的json数据";
    env->ReleaseByteArrayElements(bytes_, bytes, 0);

    return env->NewStringUTF(say.c_str());
}