/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectMorfology_emxAPI.h
 *
 * Code generation for function 'detectMorfology_emxAPI'
 *
 */

#ifndef DETECTMORFOLOGY_EMXAPI_H
#define DETECTMORFOLOGY_EMXAPI_H

/* Include files */
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "detectmorfology_types.h"

/* Function Declarations */
extern emxArray_real_T *emxCreateND_real_T(int32_T numDimensions, const int32_T *
  size);
extern emxArray_real_T *emxCreateWrapperND_real_T(real_T *data, int32_T
  numDimensions, const int32_T *size);
extern emxArray_real_T *emxCreateWrapper_real_T(real_T *data, int32_T rows,
  int32_T cols);
extern emxArray_real_T *emxCreate_real_T(int32_T rows, int32_T cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int32_T
  numDimensions);

#endif

/* End of code generation (detectMorfology_emxAPI.h) */
