#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_info_skjj_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "SKJJ = SungKuk JongJin";
    return env->NewStringUTF(hello.c_str());
}
