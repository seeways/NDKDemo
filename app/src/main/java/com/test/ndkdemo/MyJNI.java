package com.test.ndkdemo;

/**
 * Created by TaoYuan on 2017/11/24 0024.
 */

public class MyJNI {
    //调用so库声明
    static {
        System.loadLibrary("MyJNI");
    }

    /**
     * 调用so库方法
     */
    //输出字符串
    public native String sayHello();

    //输出 x+y 计算结果
    public native int sum(int x, int y);

    //接收byte数组，输出json信息
    public native String receiveYUV(byte[] bytes);

}
