//
// Created by jaycee on 2017/10/11.
//

#include "demo-lib.h"
#include "jni.h"
#include <stdlib.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_jaycee88_ndkdemo_NdkHelper_GetStringFromC(JNIEnv *env, jclass type,
                                                   jstring str_) {
    const char *a = (*env)->GetStringUTFChars(env, str_, 0);
    // TODO
    char * b = " from c" ;
    char *result = malloc(strlen(a)+strlen(b)+1);
    strcpy(result, a);
    strcat(result, b);

    (*env)->ReleaseStringUTFChars(env, str_, a);

    return (*env)->NewStringUTF(env, result);
}