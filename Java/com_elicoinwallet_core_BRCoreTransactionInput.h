/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_elicoinwallet_core_BRCoreTransactionInput */

#ifndef _Included_com_elicoinwallet_core_BRCoreTransactionInput
#define _Included_com_elicoinwallet_core_BRCoreTransactionInput
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    createTransactionInput
 * Signature: ([BJJ[B[BJ)J
 */
JNIEXPORT jlong JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_createTransactionInput
  (JNIEnv *, jclass, jbyteArray, jlong, jlong, jbyteArray, jbyteArray, jlong);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getAddress
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getAddress
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    setAddress
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_setAddress
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getHash
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getHash
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getIndex
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getIndex
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getAmount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getAmount
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getScript
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getScript
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getSignature
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getSignature
  (JNIEnv *, jobject);

/*
 * Class:     com_elicoinwallet_core_BRCoreTransactionInput
 * Method:    getSequence
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_elicoinwallet_core_BRCoreTransactionInput_getSequence
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif