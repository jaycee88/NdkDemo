package com.jaycee88.ndkdemo;

/**
 * NdkHelper
 * Created by jaycee on 2017/10/11.
 */
public class NdkHelper {

    static {
        System.loadLibrary("demo-lib");
    }

    public static native String GetStringFromC(String str);
}
