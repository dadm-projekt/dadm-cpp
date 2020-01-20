/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectingMorfology.h
 *
 * Code generation for function 'detectingMorfology'
 *
 */

#ifndef DETECTINGMORFOLOGY_H
#define DETECTINGMORFOLOGY_H

/* Include files */
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "detectmorfology_types.h"
#include "module.h"
#include "modulewaves.h"

/* Type Definitions */
class detectingMorfology :public ModuleWaves
{
 public:
  detectingMorfology();
  ~detectingMorfology();
  void AnalyzeSignal(const emxArray_real_T*, const emxArray_real_T*, const emxArray_real_T*);
  //void AnalyzeSignal(const emxArray_real_T* filtred_ecg, const emxArray_real_T* QRS_end, const emxArray_real_T* T_onset)=0;
  void setParams(double& parameters);
};

#endif

/* End of code generation (detectingMorfology.h) */
