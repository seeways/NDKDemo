/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_test_ndkdemo_MyJNI */

#ifndef _Included_com_test_ndkdemo_MyJNI
#define _Included_com_test_ndkdemo_MyJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_test_ndkdemo_MyJNI
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_ndkdemo_MyJNI_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     com_test_ndkdemo_MyJNI
 * Method:    sum
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_test_ndkdemo_MyJNI_sum
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_test_ndkdemo_MyJNI
 * Method:    receiveYUV
 * Signature: ([B)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_test_ndkdemo_MyJNI_receiveYUV
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif