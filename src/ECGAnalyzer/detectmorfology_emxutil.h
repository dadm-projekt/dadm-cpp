/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectMorfology_emxutil.h
 *
 * Code generation for function 'detectMorfology_emxutil'
 *
 */

#ifndef DETECTMORFOLOGY_EMXUTIL_H
#define DETECTMORFOLOGY_EMXUTIL_H

/* Include files */
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "detectmorfology_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int32_T
  oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int32_T oldNumel);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int32_T
  numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);

#endif

/* End of code generation (detectMorfology_emxutil.h) */
