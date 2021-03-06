/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openni_java_Recorder */

#ifndef _Included_openni_java_Recorder
#define _Included_openni_java_Recorder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openni_java_Recorder
 * Method:    create
 * Signature: (Ljava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_create
  (JNIEnv *, jobject, jstring, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_Recorder_isValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    attach
 * Signature: (Lopenni/java/VideoStream;ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_attach
  (JNIEnv *, jclass, jlong, jboolean, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_Recorder_start
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_Recorder_stop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_Recorder_destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_Recorder
 * Method:    recorder
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_Recorder_recorder
  (JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif
#endif
