LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := MyJNI
LOCAL_LDFLAGS := -Wl,--build-id
LOCAL_SRC_FILES := \
	D:\demo\NDKDemo\app\src\main\jni\MyJNI.c \

LOCAL_C_INCLUDES += D:\demo\NDKDemo\app\src\debug\jni
LOCAL_C_INCLUDES += D:\demo\NDKDemo\app\src\main\jni

include $(BUILD_SHARED_LIBRARY)
