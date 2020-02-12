/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * detectingMorfology.cpp
 *
 * Code generation for function 'detectingMorfology'
 *
 */

/* Include files */
#include "detectingmorfology.h"
#include "detectmorfology_emxutil.h"
#include <math.h>

/* Function Declarations */
static real_T rt_roundd_snf(real_T u);

/* Function Definitions */
//void detectingMorfology::setParams(double& parameters)
//{
//
//}

void detectingMorfology::detectMorfology(const emxArray_real_T *filtred_ecg,
  const emxArray_real_T *QRS_end, const emxArray_real_T *T_onset)
{
  emxArray_real_T *t;
  int32_T i;
  int32_T loop_ub;
  real_T distanceSTpoint;
  real_T dslopeI;
  int32_T b_i;
  emxArray_real_T *STmiddle;
  int32_T j;
  emxArray_boolean_T *wherenormal;
  int32_T dslopeI_tmp;
  int32_T b_dslopeI_tmp;
  emxArray_boolean_T *whereelevation;
  emxArray_boolean_T *wheredepression;
  emxInit_real_T(&t, 2);
  if (filtred_ecg->size[0] - 1 < 0) {
    t->size[0] = 1;
    t->size[1] = 0;
  } else {
    i = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = static_cast<int32_T>((static_cast<real_T>(filtred_ecg->size[0])
      - 1.0)) + 1;
    emxEnsureCapacity_real_T(t, i);
    loop_ub = static_cast<int32_T>((static_cast<real_T>(filtred_ecg->size[0]) -
      1.0));
    for (i = 0; i <= loop_ub; i++) {
      t->data[i] = i;
    }
  }

  i = t->size[0] * t->size[1];
  loop_ub = t->size[0] * t->size[1];
  t->size[0] = 1;
  emxEnsureCapacity_real_T(t, loop_ub);
  loop_ub = i - 1;
  for (i = 0; i <= loop_ub; i++) {
    t->data[i] /= 500.0;
  }

  /* wektor czasu */
  distanceSTpoint = 0.0;
  dslopeI = 0.0;
  i = T_onset->size[1];
  for (b_i = 0; b_i < i; b_i++) {
    if (QRS_end->data[b_i] < T_onset->data[b_i]) {
      loop_ub = T_onset->size[1];
      for (j = 0; j < loop_ub; j++) {
        distanceSTpoint = rt_roundd_snf((T_onset->data[0] - QRS_end->data[0]) /
          2.0);
      }
    }
  }

  emxInit_real_T(&STmiddle, 2);
  i = STmiddle->size[0] * STmiddle->size[1];
  STmiddle->size[0] = 1;
  STmiddle->size[1] = T_onset->size[1];
  emxEnsureCapacity_real_T(STmiddle, i);
  loop_ub = T_onset->size[0] * T_onset->size[1];
  for (i = 0; i < loop_ub; i++) {
    STmiddle->data[i] = T_onset->data[i] - distanceSTpoint;
  }

  i = T_onset->size[1];
  for (b_i = 0; b_i < i; b_i++) {
    /* Warto�� �rodkowego Punktu Interpolowanej linii */
    /* wartosc mv interpolacji */
    abort();
  }

  /* dslopeI - pomi�dzy QRS_end i T_Onset */
  i = T_onset->size[1];
  for (b_i = 0; b_i < i; b_i++) {
    if (QRS_end->data[b_i] < T_onset->data[b_i]) {
      loop_ub = T_onset->size[1];
      for (j = 0; j < loop_ub; j++) {
        dslopeI_tmp = static_cast<int32_T>(T_onset->data[0]) - 1;
        b_dslopeI_tmp = static_cast<int32_T>(QRS_end->data[0]) - 1;
        dslopeI = (filtred_ecg->data[dslopeI_tmp] - filtred_ecg->
                   data[b_dslopeI_tmp]) / (t->data[dslopeI_tmp] - t->
          data[b_dslopeI_tmp]);
      }
    }
  }

  emxFree_real_T(&t);
  emxInit_boolean_T(&wherenormal, 1);

  /*  KLASYFIKACJA */
  i = wherenormal->size[0];
  wherenormal->size[0] = QRS_end->size[1];
  emxEnsureCapacity_boolean_T(wherenormal, i);
  loop_ub = QRS_end->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_i = static_cast<int32_T>(QRS_end->data[i]) - 1;
    wherenormal->data[i] = ((-0.05 <= filtred_ecg->data[b_i]) &&
      (filtred_ecg->data[b_i] <= 0.1));
  }

  emxInit_boolean_T(&whereelevation, 1);
  i = whereelevation->size[0];
  whereelevation->size[0] = QRS_end->size[1];
  emxEnsureCapacity_boolean_T(whereelevation, i);
  loop_ub = QRS_end->size[1];
  for (i = 0; i < loop_ub; i++) {
    whereelevation->data[i] = (filtred_ecg->data[static_cast<int32_T>
      (QRS_end->data[i]) - 1] > 0.1);
  }

  emxInit_boolean_T(&wheredepression, 1);
  i = wheredepression->size[0];
  wheredepression->size[0] = QRS_end->size[1];
  emxEnsureCapacity_boolean_T(wheredepression, i);
  loop_ub = QRS_end->size[1];
  for (i = 0; i < loop_ub; i++) {
    wheredepression->data[i] = (filtred_ecg->data[static_cast<int32_T>
      (QRS_end->data[i]) - 1] < -0.05);
  }

  /* where elevation */
  i = T_onset->size[1];
  for (b_i = 0; b_i < i; b_i++) {
    if (wherenormal->data[b_i]) {
      /*  display('normal') */
      abort();
    } else {
      if ((!whereelevation->data[b_i]) && wheredepression->data[b_i]) {
        if ((-0.4 <= dslopeI) && (dslopeI <= 0.5)) {
          /*  display('hotizontal depression') */
          abort();
        }

        if (dslopeI > 0.5) {
          /*    display('upsloping depression') */
          abort();
        }

        if (dslopeI < -0.4) {
          /*   display('downsloping depression') */
          abort();
        }
      }
    }
  }

  emxFree_boolean_T(&wheredepression);
  emxFree_boolean_T(&whereelevation);
  emxFree_boolean_T(&wherenormal);
  emxFree_real_T(&STmiddle);
}

detectingMorfology::~detectingMorfology()
{
  /* (no terminate code required) */
}

detectingMorfology::detectingMorfology()
{
}

static real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* End of code generation (detectingMorfology.cpp) */

