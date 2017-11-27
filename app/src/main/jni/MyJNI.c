//
// Created by TaoYuan on 2017/11/24 0024.
//


#include "com_test_ndkdemo_MyJNI.h"

JNIEXPORT jstring JNICALL Java_com_cyyz_ndkdemo_MyJNI_sayHello(JNIEnv *env, jobject instance){

    return (*env)->NewStringUTF(env,"say 就 say！\n Hello");

}


JNIEXPORT jint JNICALL Java_com_cyyz_ndkdemo_MyJNI_sum(JNIEnv *env, jobject instance, jint x, jint y){
    return x + y;
}

JNIEXPORT jstring JNICALL
Java_com_test_ndkdemo_MyJNI_receiveYUV(JNIEnv *env, jobject instance, jbyteArray bytes_) {
    jbyte *bytes = (*env)->GetByteArrayElements(env, bytes_, NULL);
    if (bytes == NULL) {
        return 0; /* exception occurred */
    }

    //do something...

    char *say = "输出的json数据";
    (*env)->ReleaseByteArrayElements(env, bytes_, bytes, 0);
    return (*env)->NewStringUTF(env, say);
}
