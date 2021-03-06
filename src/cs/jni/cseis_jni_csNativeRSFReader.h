/* Copyright (c) Colorado School of Mines, 2013.*/
/* All rights reserved.                       */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cseis_jni_csNativeRSFReader */

#ifndef _Included_cseis_jni_csNativeRSFReader
#define _Included_cseis_jni_csNativeRSFReader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_createInstance
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_cseis_jni_csNativeRSFReader_native_1createInstance
  (JNIEnv *, jobject, jstring);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cseis_jni_csNativeRSFReader_native_1closeFile
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_numTraces
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1numTraces
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_numSamples
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1numSamples
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_numHeaders
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1numHeaders
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_sampleInt
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_cseis_jni_csNativeRSFReader_native_1sampleInt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_hdrFloatValue
 * Signature: (JI)F
 */
JNIEXPORT jfloat JNICALL Java_cseis_jni_csNativeRSFReader_native_1hdrFloatValue
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_hdrDoubleValue
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_cseis_jni_csNativeRSFReader_native_1hdrDoubleValue
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_hdrIntValue
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1hdrIntValue
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_getNextTrace
 * Signature: (J[FLcseis/seis/csSeismicTrace;)Z
 */
JNIEXPORT jboolean JNICALL Java_cseis_jni_csNativeRSFReader_native_1getNextTrace
  (JNIEnv *, jobject, jlong, jfloatArray, jobject);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_moveToTrace
 * Signature: (JII)Z
 */
JNIEXPORT jboolean JNICALL Java_cseis_jni_csNativeRSFReader_native_1moveToTrace
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_setHeaderToPeek
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cseis_jni_csNativeRSFReader_native_1setHeaderToPeek
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_peekHeaderValue
 * Signature: (JILcseis/seis/csHeader;)V
 */
JNIEXPORT void JNICALL Java_cseis_jni_csNativeRSFReader_native_1peekHeaderValue
  (JNIEnv *, jobject, jlong, jint, jobject);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_headerName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cseis_jni_csNativeRSFReader_native_1headerName
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_headerDesc
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cseis_jni_csNativeRSFReader_native_1headerDesc
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_headerType
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1headerType
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_verticalDomain
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1verticalDomain
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_setSelection
 * Signature: (JLjava/lang/String;Ljava/lang/String;IILcseis/jni/csISelectionNotifier;)Z
 */
JNIEXPORT jboolean JNICALL Java_cseis_jni_csNativeRSFReader_native_1setSelection
  (JNIEnv *, jobject, jlong, jstring, jstring, jint, jint, jobject);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_getNumSelectedTraces
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_cseis_jni_csNativeRSFReader_native_1getNumSelectedTraces
  (JNIEnv *, jobject, jlong);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_getSelectedValues
 * Signature: (JLcseis/jni/csSelectedHeaderBundle;)V
 */
JNIEXPORT void JNICALL Java_cseis_jni_csNativeRSFReader_native_1getSelectedValues
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     cseis_jni_csNativeRSFReader
 * Method:    native_freeInstance
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cseis_jni_csNativeRSFReader_native_1freeInstance
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
