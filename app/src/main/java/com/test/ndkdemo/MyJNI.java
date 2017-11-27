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
    //调用C输出字符串
    public native String sayHello();

    //调用C输出计算结果
    public native int sum(int x, int y);

}
