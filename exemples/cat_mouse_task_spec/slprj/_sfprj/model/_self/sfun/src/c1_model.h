#ifndef __c1_model_h__
#define __c1_model_h__
#ifdef __has_include
#if __has_include(<time.h>)
#include <time.h>
#else
#error Cannot find header file <time.h> for imported type time_t.\
 Supply the missing header file or turn on Simulation Target -> Generate typedefs\
 for imported bus and enumeration types.
#endif

#else
#include <time.h>
#endif

/* Forward Declarations */
#ifndef typedef_c1_sxaDueAh1f53T9ESYg9Uc4E
#define typedef_c1_sxaDueAh1f53T9ESYg9Uc4E

typedef struct c1_tag_sxaDueAh1f53T9ESYg9Uc4E c1_sxaDueAh1f53T9ESYg9Uc4E;

#endif                                 /* typedef_c1_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef typedef_c1_s_fxrtQpZcildDTGvn3QeHJH
#define typedef_c1_s_fxrtQpZcildDTGvn3QeHJH

typedef struct c1_tag_fxrtQpZcildDTGvn3QeHJH c1_s_fxrtQpZcildDTGvn3QeHJH;

#endif                                 /* typedef_c1_s_fxrtQpZcildDTGvn3QeHJH */

#ifndef typedef_c1_cell_0
#define typedef_c1_cell_0

typedef struct c1_tag_n3SDPft8LycMqfcEsfJVBB c1_cell_0;

#endif                                 /* typedef_c1_cell_0 */

#ifndef typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC
#define typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC

typedef struct c1_tag_wvzWMLKjXp7EJVnnMvwbTC c1_s_wvzWMLKjXp7EJVnnMvwbTC;

#endif                                 /* typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC */

/* Type Definitions */
#ifndef struct_c1_tag_sxaDueAh1f53T9ESYg9Uc4E
#define struct_c1_tag_sxaDueAh1f53T9ESYg9Uc4E

struct c1_tag_sxaDueAh1f53T9ESYg9Uc4E
{
  real_T tm_min;
  real_T tm_sec;
  real_T tm_hour;
  real_T tm_mday;
  real_T tm_mon;
  real_T tm_year;
};

#endif                                 /* struct_c1_tag_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef typedef_c1_sxaDueAh1f53T9ESYg9Uc4E
#define typedef_c1_sxaDueAh1f53T9ESYg9Uc4E

typedef struct c1_tag_sxaDueAh1f53T9ESYg9Uc4E c1_sxaDueAh1f53T9ESYg9Uc4E;

#endif                                 /* typedef_c1_sxaDueAh1f53T9ESYg9Uc4E */

#ifndef struct_c1_tag_fxrtQpZcildDTGvn3QeHJH
#define struct_c1_tag_fxrtQpZcildDTGvn3QeHJH

struct c1_tag_fxrtQpZcildDTGvn3QeHJH
{
  char_T Value[7];
};

#endif                                 /* struct_c1_tag_fxrtQpZcildDTGvn3QeHJH */

#ifndef typedef_c1_s_fxrtQpZcildDTGvn3QeHJH
#define typedef_c1_s_fxrtQpZcildDTGvn3QeHJH

typedef struct c1_tag_fxrtQpZcildDTGvn3QeHJH c1_s_fxrtQpZcildDTGvn3QeHJH;

#endif                                 /* typedef_c1_s_fxrtQpZcildDTGvn3QeHJH */

#ifndef struct_c1_tag_n3SDPft8LycMqfcEsfJVBB
#define struct_c1_tag_n3SDPft8LycMqfcEsfJVBB

struct c1_tag_n3SDPft8LycMqfcEsfJVBB
{
  char_T f1[6];
  char_T f2[6];
  char_T f3[7];
  char_T f4[7];
  char_T f5[6];
  char_T f6[7];
};

#endif                                 /* struct_c1_tag_n3SDPft8LycMqfcEsfJVBB */

#ifndef typedef_c1_cell_0
#define typedef_c1_cell_0

typedef struct c1_tag_n3SDPft8LycMqfcEsfJVBB c1_cell_0;

#endif                                 /* typedef_c1_cell_0 */

#ifndef struct_c1_tag_wvzWMLKjXp7EJVnnMvwbTC
#define struct_c1_tag_wvzWMLKjXp7EJVnnMvwbTC

struct c1_tag_wvzWMLKjXp7EJVnnMvwbTC
{
  c1_cell_0 _data;
};

#endif                                 /* struct_c1_tag_wvzWMLKjXp7EJVnnMvwbTC */

#ifndef typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC
#define typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC

typedef struct c1_tag_wvzWMLKjXp7EJVnnMvwbTC c1_s_wvzWMLKjXp7EJVnnMvwbTC;

#endif                                 /* typedef_c1_s_wvzWMLKjXp7EJVnnMvwbTC */

#ifndef typedef_SFc1_modelInstanceStruct
#define typedef_SFc1_modelInstanceStruct

typedef struct {
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_model;
  uint8_T c1_JITStateAnimation[1];
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c1_JITTransitionAnimation[1];
  int32_T c1_sfEvent;
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  void *c1_RuntimeVar;
  real_T c1_start;
  boolean_T c1_start_not_empty;
  uint32_T c1_seed;
  boolean_T c1_seed_not_empty;
  uint32_T c1_method;
  boolean_T c1_method_not_empty;
  uint32_T c1_state[625];
  boolean_T c1_state_not_empty;
  uint32_T c1_b_state[2];
  boolean_T c1_b_state_not_empty;
  uint32_T c1_c_state;
  boolean_T c1_c_state_not_empty;
  uint32_T c1_mlFcnLineNumber;
  void *c1_fcnDataPtrs[3];
  char_T *c1_dataNames[3];
  uint32_T c1_numFcnVars;
  uint32_T c1_ssIds[3];
  uint32_T c1_statuses[3];
  void *c1_outMexFcns[3];
  void *c1_inMexFcns[3];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  real_T (*c1_y)[10];
  real_T *c1_next;
} SFc1_modelInstanceStruct;

#endif                                 /* typedef_SFc1_modelInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_model_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c1_model_get_check_sum(mxArray *plhs[]);
extern void c1_model_method_dispatcher(SimStruct *S, int_T method, void *data);

#endif
