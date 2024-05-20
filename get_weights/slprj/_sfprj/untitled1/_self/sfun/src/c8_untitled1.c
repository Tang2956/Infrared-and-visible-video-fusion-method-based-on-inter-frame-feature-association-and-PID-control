/* Include files */

#include "untitled1_sfun.h"
#include "c8_untitled1.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c8_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c8_b_emlrtMCI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c8_c_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c8_d_emlrtMCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "log",                               /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pName */
};

static emlrtMCInfo c8_e_emlrtMCI = { 83,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c8_f_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRSInfo c8_emlrtRSI = { 26, /* lineNo */
  "Fea",                               /* fcnName */
  "E:\\ShiYan\\2.1\\Fea.m"             /* pathName */
};

static emlrtRSInfo c8_b_emlrtRSI = { 17,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c8_c_emlrtRSI = { 18,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c8_d_emlrtRSI = { 23,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c8_e_emlrtRSI = { 9,/* lineNo */
  "SD",                                /* fcnName */
  "E:\\ShiYan\\2.1\\SD.m"              /* pathName */
};

static emlrtRSInfo c8_f_emlrtRSI = { 32,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_g_emlrtRSI = { 42,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_h_emlrtRSI = { 52,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_i_emlrtRSI = { 62,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_j_emlrtRSI = { 68,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_k_emlrtRSI = { 69,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_l_emlrtRSI = { 70,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_m_emlrtRSI = { 71,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_n_emlrtRSI = { 74,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_o_emlrtRSI = { 75,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_p_emlrtRSI = { 76,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_q_emlrtRSI = { 77,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_r_emlrtRSI = { 78,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_s_emlrtRSI = { 79,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_t_emlrtRSI = { 80,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_u_emlrtRSI = { 81,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_v_emlrtRSI = { 82,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_w_emlrtRSI = { 83,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_x_emlrtRSI = { 84,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_y_emlrtRSI = { 85,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_ab_emlrtRSI = { 89,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_bb_emlrtRSI = { 90,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_cb_emlrtRSI = { 98,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_db_emlrtRSI = { 103,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_eb_emlrtRSI = { 117,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_fb_emlrtRSI = { 118,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_gb_emlrtRSI = { 121,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_hb_emlrtRSI = { 122,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_ib_emlrtRSI = { 123,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_jb_emlrtRSI = { 124,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_kb_emlrtRSI = { 125,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_lb_emlrtRSI = { 126,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_mb_emlrtRSI = { 129,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_nb_emlrtRSI = { 130,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_ob_emlrtRSI = { 133,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_pb_emlrtRSI = { 136,/* lineNo */
  "MATLAB Function8",                  /* fcnName */
  "#untitled1:9"                       /* pathName */
};

static emlrtRSInfo c8_qb_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_rb_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_sb_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_tb_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_ub_emlrtRSI = { 573,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_vb_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c8_wb_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c8_xb_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c8_yb_emlrtRSI = { 433,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_ac_emlrtRSI = { 451,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_bc_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_cc_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_dc_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_ec_emlrtRSI = { 464,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_fc_emlrtRSI = { 473,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c8_gc_emlrtRSI = { 61,/* lineNo */
  "fft2",                              /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\fft2.m"/* pathName */
};

static emlrtRSInfo c8_hc_emlrtRSI = { 31,/* lineNo */
  "fft",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\fft.m"/* pathName */
};

static emlrtRSInfo c8_ic_emlrtRSI = { 58,/* lineNo */
  "fft",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\fft.m"/* pathName */
};

static emlrtRSInfo c8_jc_emlrtRSI = { 44,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c8_kc_emlrtRSI = { 56,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c8_lc_emlrtRSI = { 57,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c8_mc_emlrtRSI = { 21,/* lineNo */
  "fftw",                              /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\fftw.m"/* pathName */
};

static emlrtRSInfo c8_nc_emlrtRSI = { 15,/* lineNo */
  "MATLABFFTWCallback",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\MATLABFFTWCallback.m"/* pathName */
};

static emlrtRSInfo c8_oc_emlrtRSI = { 54,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c8_pc_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c8_qc_emlrtRSI = { 74,/* lineNo */
  "ifft2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\ifft2.m"/* pathName */
};

static emlrtRSInfo c8_rc_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c8_sc_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c8_tc_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c8_uc_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_vc_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_wc_emlrtRSI = { 849,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_xc_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_yc_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_ad_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_bd_emlrtRSI = { 923,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_cd_emlrtRSI = { 997,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_dd_emlrtRSI = { 1025,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_ed_emlrtRSI = { 1037,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRTEInfo c8_emlrtRTEI = { 491,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c8_b_emlrtRTEI = { 578,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c8_c_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c8_d_emlrtRTEI = { 175,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c8_e_emlrtRTEI = { 185,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtDCInfo c8_emlrtDCI = { 98, /* lineNo */
  10,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_emlrtBCI = { 1,  /* iFirst */
  254,                                 /* iLast */
  98,                                  /* lineNo */
  10,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_b_emlrtDCI = { 98,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_b_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  98,                                  /* lineNo */
  12,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_c_emlrtDCI = { 100,/* lineNo */
  10,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_c_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  10,                                  /* colNo */
  "H",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_d_emlrtDCI = { 100,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_d_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  12,                                  /* colNo */
  "H",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_e_emlrtDCI = { 111,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_e_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  111,                                 /* lineNo */
  12,                                  /* colNo */
  "I3",                                /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_f_emlrtDCI = { 111,/* lineNo */
  14,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_f_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  111,                                 /* lineNo */
  14,                                  /* colNo */
  "I3",                                /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_g_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  111,                                 /* lineNo */
  29,                                  /* colNo */
  "I33",                               /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_g_emlrtDCI = { 111,/* lineNo */
  29,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_h_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  111,                                 /* lineNo */
  29,                                  /* colNo */
  "I33",                               /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_i_emlrtBCI = { 1,/* iFirst */
  83312,                               /* iLast */
  115,                                 /* lineNo */
  1,                                   /* colNo */
  "Ig",                                /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_h_emlrtDCI = { 115,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_j_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_i_emlrtDCI = { 100,/* lineNo */
  30,                                  /* colNo */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_k_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function8",                  /* fName */
  "#untitled1:9",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_j_emlrtDCI = { 19,/* lineNo */
  16,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_l_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  19,                                  /* lineNo */
  16,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_k_emlrtDCI = { 19,/* lineNo */
  18,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_m_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_l_emlrtDCI = { 26,/* lineNo */
  16,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_n_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  26,                                  /* lineNo */
  16,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_m_emlrtDCI = { 26,/* lineNo */
  18,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_o_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  26,                                  /* lineNo */
  18,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_n_emlrtDCI = { 33,/* lineNo */
  15,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_p_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  15,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_o_emlrtDCI = { 33,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_q_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  17,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_p_emlrtDCI = { 16,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_r_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  16,                                  /* lineNo */
  17,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_q_emlrtDCI = { 16,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_s_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  16,                                  /* lineNo */
  19,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_r_emlrtDCI = { 23,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_t_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  23,                                  /* lineNo */
  17,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_s_emlrtDCI = { 23,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_u_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  23,                                  /* lineNo */
  19,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_t_emlrtDCI = { 30,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_v_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  30,                                  /* lineNo */
  17,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_u_emlrtDCI = { 30,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_w_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  30,                                  /* lineNo */
  19,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_x_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  12,                                  /* lineNo */
  15,                                  /* colNo */
  "Img",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_v_emlrtDCI = { 12,/* lineNo */
  15,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_y_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  12,                                  /* lineNo */
  25,                                  /* colNo */
  "Img",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_w_emlrtDCI = { 12,/* lineNo */
  25,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ab_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  13,                                  /* lineNo */
  9,                                   /* colNo */
  "A1",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_x_emlrtDCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_bb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  13,                                  /* lineNo */
  9,                                   /* colNo */
  "A1",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_cb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_y_emlrtDCI = { 18,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_db_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_eb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_ab_emlrtDCI = { 15,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_fb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_gb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_bb_emlrtDCI = { 25,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_hb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_ib_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_cb_emlrtDCI = { 22,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_jb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_kb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  32,                                  /* lineNo */
  12,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_db_emlrtDCI = { 32,/* lineNo */
  12,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_lb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  32,                                  /* lineNo */
  12,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_mb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_eb_emlrtDCI = { 29,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_nb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_fb_emlrtDCI = { 10,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ob_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_gb_emlrtDCI = { 10,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_pb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  10,                                  /* lineNo */
  18,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_hb_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_qb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_ib_emlrtDCI = { 12,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_rb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  12,                                  /* lineNo */
  18,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_jb_emlrtDCI = { 20,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_sb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  20,                                  /* lineNo */
  16,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_kb_emlrtDCI = { 20,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_tb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  20,                                  /* lineNo */
  18,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_lb_emlrtDCI = { 22,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ub_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  22,                                  /* lineNo */
  16,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_mb_emlrtDCI = { 22,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_vb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  22,                                  /* lineNo */
  18,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_wb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_nb_emlrtDCI = { 9,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_xb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_yb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_ob_emlrtDCI = { 19,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ac_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_bc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  30,                                  /* lineNo */
  12,                                  /* colNo */
  "EE",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_pb_emlrtDCI = { 30,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_cc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  30,                                  /* lineNo */
  12,                                  /* colNo */
  "EE",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_dc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  22,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_qb_emlrtDCI = { 33,/* lineNo */
  22,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ec_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  22,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_fc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  31,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_rb_emlrtDCI = { 33,/* lineNo */
  31,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_gc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  31,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_hc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_sb_emlrtDCI = { 33,/* lineNo */
  13,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_ic_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_jc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  31,                                  /* lineNo */
  21,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_tb_emlrtDCI = { 31,/* lineNo */
  21,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_kc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  31,                                  /* lineNo */
  21,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_lc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  31,                                  /* lineNo */
  12,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_ub_emlrtDCI = { 31,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_mc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  31,                                  /* lineNo */
  12,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_vb_emlrtDCI = { 23,/* lineNo */
  23,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_nc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  23,                                  /* colNo */
  "g",                                 /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c8_wb_emlrtDCI = { 23,/* lineNo */
  25,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_oc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  25,                                  /* colNo */
  "g",                                 /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_pc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_xb_emlrtDCI = { 23,/* lineNo */
  37,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_qc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_rc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  47,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_yb_emlrtDCI = { 23,/* lineNo */
  47,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_sc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  47,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_tc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  59,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_ac_emlrtDCI = { 23,/* lineNo */
  59,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_uc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  59,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_vc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  69,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_bc_emlrtDCI = { 23,/* lineNo */
  69,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_wc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  69,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_xc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "A",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_cc_emlrtDCI = { 10,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_yc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "A",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ad_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  11,                                  /* lineNo */
  16,                                  /* colNo */
  "B",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_dc_emlrtDCI = { 11,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_bd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  11,                                  /* lineNo */
  16,                                  /* colNo */
  "B",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_cd_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "C",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_ec_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_dd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "C",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ed_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  13,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_fc_emlrtDCI = { 13,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_fd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  13,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_gd_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  14,                                  /* lineNo */
  9,                                   /* colNo */
  "F",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_gc_emlrtDCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_hd_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  14,                                  /* lineNo */
  9,                                   /* colNo */
  "F",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_id_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_jd_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static const char_T c8_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
  'E', 'r', 'r', 'o', 'r' };

static const char_T c8_cv1[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance);
static void initialize_params_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static void enable_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance);
static void disable_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance);
static void c8_update_jit_animation_state_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance);
static void c8_do_animation_call_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static void set_sim_state_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance, const mxArray *c8_st);
static void sf_gateway_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance);
static void mdl_start_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance);
static void mdl_terminate_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance);
static void initSimStructsc8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance);
static void c8_Fenk(SFc8_untitled1InstanceStruct *chartInstance, const
                    emlrtStack *c8_sp, uint8_T c8_Img[83312], real_T c8_A1[20828],
                    real_T c8_b_A2[20828], real_T c8_b_A3[20828], real_T
                    c8_b_A4[20828], real_T c8_b_A22[20828], real_T c8_b_A33
                    [20828], real_T c8_b_A44[20828]);
static void c8_Fea(SFc8_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c8_sp, real_T c8_A[20828], real_T c8_b_B[20828], real_T
                   c8_OUT[20828]);
static real_T c8_metricsEdge_intensity(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_fused[83312]);
static void c8_Inverse_Fenk(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_C1[20828], real_T c8_b_C2[20828], real_T c8_b_C3
  [20828], real_T c8_b_C4[20828], real_T c8_b_C22[20828], real_T c8_b_C33[20828],
  real_T c8_b_C44[20828], real_T c8_F[83312]);
static real_T c8_mod(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x);
static void c8_imresize(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, uint8_T c8_b_Ain[83312], uint8_T c8_Bout[83312]);
static void c8_contributions(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_weights_data[], int32_T c8_weights_size[2],
  int32_T c8_indices_data[], int32_T c8_indices_size[2]);
static void c8_check_forloop_overflow_error(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp);
static void c8_resizeAlongDim(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, uint8_T c8_in_[83312], real_T c8_weights_data[], int32_T
  c8_weights_size[2], int32_T c8_indices_data[], uint8_T c8_out_[83312]);
static int32_T c8_eml_sub2ind(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, int32_T c8_siz[2], real_T c8_varargin_2);
static void c8_b_contributions(SFc8_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_weights_data[], int32_T c8_weights_size[2],
  int32_T c8_indices_data[], int32_T c8_indices_size[2]);
static void c8_b_resizeAlongDim(SFc8_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c8_sp, uint8_T c8_in_[83312], real_T c8_weights_data[],
  int32_T c8_weights_size[2], int32_T c8_indices_data[], uint8_T c8_out_[83312]);
static real_T c8_sumColumnB4(SFc8_untitled1InstanceStruct *chartInstance, real_T
  c8_g_x[20828], int32_T c8_vstart);
static real_T c8_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance, real_T
  c8_g_x[20828]);
static real_T c8_b_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x);
static void c8_log(SFc8_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c8_sp, real_T c8_g_x[83312], real_T c8_h_x[83312]);
static void c8_fft2(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x
                    [83312], creal_T c8_b_y[83312]);
static boolean_T c8_fltpower_domain_error(SFc8_untitled1InstanceStruct
  *chartInstance);
static void c8_ifft2(SFc8_untitled1InstanceStruct *chartInstance, creal_T
                     c8_g_x[83312], creal_T c8_b_y[83312]);
static void c8_exp(SFc8_untitled1InstanceStruct *chartInstance, creal_T c8_g_x
                   [83312], creal_T c8_h_x[83312]);
static real_T c8_maximum(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_g_x[83312]);
static real_T c8_minimum(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_g_x[83312]);
static real_T c8_mean(SFc8_untitled1InstanceStruct *chartInstance, real_T
                      c8_g_x[83312]);
static real_T c8_b_sumColumnB4(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312], int32_T c8_vstart);
static real_T c8_c_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312]);
static void c8_imfilter(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_c_varargin_1[83312], real_T c8_b[83312]);
static real_T c8_sqrt(SFc8_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T c8_g_x);
static void c8_padImage(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_a_tmp[83312], real_T c8_c_a[84480]);
static void c8_b_imfilter(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_c_varargin_1[83312], real_T c8_b[83312]);
static void c8_b_mean(SFc8_untitled1InstanceStruct *chartInstance, real_T
                      c8_g_x[83312], real_T c8_b_y[328]);
static real_T c8_d_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312], int32_T c8_col);
static real_T c8_e_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[328]);
static void c8_power(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_c_a
                     [83312], real_T c8_b_y[83312]);
static void c8_sum(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x
                   [83312], real_T c8_b_y[328]);
static boolean_T c8_b_fltpower_domain_error(SFc8_untitled1InstanceStruct
  *chartInstance, real_T c8_c_a, real_T c8_b);
static void c8_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_b_y, const char_T *c8_identifier, uint8_T c8_c_y[83312]);
static void c8_b_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId, uint8_T c8_b_y
  [83312]);
static uint8_T c8_c_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_b_is_active_c8_untitled1, const char_T *c8_identifier);
static uint8_T c8_d_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_chart_data_browse_helper(SFc8_untitled1InstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig);
static void c8_b_log(SFc8_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, real_T c8_g_x[83312]);
static void c8_b_exp(SFc8_untitled1InstanceStruct *chartInstance, creal_T
                     c8_g_x[83312]);
static void c8_b_sqrt(SFc8_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T *c8_g_x);
static void c8_emxEnsureCapacity_real_T(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_emxArray_real_T *c8_emxArray,
  int32_T c8_oldNumel, const emlrtRTEInfo *c8_srcLocation);
static void c8_emxInit_real_T(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_emxArray_real_T **c8_pEmxArray, int32_T c8_numDimensions,
  const emlrtRTEInfo *c8_srcLocation);
static void c8_emxFree_real_T(SFc8_untitled1InstanceStruct *chartInstance,
  c8_emxArray_real_T **c8_pEmxArray);
static void init_dsm_address_info(SFc8_untitled1InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc8_untitled1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c8_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_is_active_c8_untitled1 = 0U;
}

static void initialize_params_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c8_update_jit_animation_state_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_do_animation_call_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_st;
  c8_st = NULL;
  c8_st = NULL;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_createcellmatrix(2, 1), false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", *chartInstance->c8_y, 3, 0U, 1U, 0U,
    2, 254, 328), false);
  sf_mex_setcell(c8_b_y, 0, c8_c_y);
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y",
    &chartInstance->c8_is_active_c8_untitled1, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 1, c8_d_y);
  sf_mex_assign(&c8_st, c8_b_y, false);
  return c8_st;
}

static void set_sim_state_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  int32_T c8_i;
  uint8_T c8_uv[83312];
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_u = sf_mex_dup(c8_st);
  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 0)), "y",
                      c8_uv);
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    (*chartInstance->c8_y)[c8_i] = c8_uv[c8_i];
  }

  chartInstance->c8_is_active_c8_untitled1 = c8_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c8_u, 1)), "is_active_c8_untitled1");
  sf_mex_destroy(&c8_u);
  sf_mex_destroy(&c8_st);
}

static void sf_gateway_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance)
{
  static char_T c8_b_cv[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  static char_T c8_b_cv1[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a',
    'i', 'n', 'E', 'r', 'r', 'o', 'r' };

  static char_T c8_cv2[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_n_y = NULL;
  const mxArray *c8_o_y = NULL;
  real_T c8_q_x[328];
  real_T c8_E_ir;
  real_T c8_E_vis;
  real_T c8_Eta;
  real_T c8_SD_B;
  real_T c8_SD_D;
  real_T c8_We;
  real_T c8_avg;
  real_T c8_b;
  real_T c8_b_b;
  real_T c8_b_img_mean;
  real_T c8_b_j;
  real_T c8_b_k;
  real_T c8_b_y;
  real_T c8_c_a;
  real_T c8_c_b;
  real_T c8_c_i;
  real_T c8_c_k;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  real_T c8_d4;
  real_T c8_d5;
  real_T c8_d6;
  real_T c8_d7;
  real_T c8_d_a;
  real_T c8_d_b;
  real_T c8_d_k;
  real_T c8_e_a;
  real_T c8_e_k;
  real_T c8_e_y;
  real_T c8_f_a;
  real_T c8_f_k;
  real_T c8_g_a;
  real_T c8_g_x;
  real_T c8_h_a;
  real_T c8_h_x;
  real_T c8_h_y;
  real_T c8_i_a;
  real_T c8_i_x;
  real_T c8_i_y;
  real_T c8_img_mean;
  real_T c8_j_a;
  real_T c8_j_x;
  real_T c8_j_y;
  real_T c8_k;
  real_T c8_k_a;
  real_T c8_k_x;
  real_T c8_k_y;
  real_T c8_l_a;
  real_T c8_l_x;
  real_T c8_l_y;
  real_T c8_m_a;
  real_T c8_m_x;
  real_T c8_m_y;
  real_T c8_ma;
  real_T c8_mi;
  real_T c8_n_a;
  real_T c8_n_x;
  real_T c8_o_x;
  real_T c8_p_x;
  real_T c8_r_x;
  real_T c8_s_x;
  real_T c8_t_x;
  real_T c8_u_x;
  real_T c8_v_x;
  real_T c8_w_x;
  int32_T c8_b_i;
  int32_T c8_c_j;
  int32_T c8_d_i;
  int32_T c8_e_i;
  int32_T c8_f_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i42;
  int32_T c8_i43;
  int32_T c8_i44;
  int32_T c8_i45;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_j;
  uint8_T c8_u;
  boolean_T c8_covSaturation;
  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 4U, (real_T)
                      (*chartInstance->c8_VIS2)[c8_i]);
  }

  for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 3U, (real_T)
                      (*chartInstance->c8_VIS1)[c8_i1]);
  }

  covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 2U, *chartInstance->c8_f_x);
  for (c8_i2 = 0; c8_i2 < 83312; c8_i2++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 1U, (real_T)
                      (*chartInstance->c8_IR2)[c8_i2]);
  }

  for (c8_i3 = 0; c8_i3 < 83312; c8_i3++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 0U, (real_T)
                      (*chartInstance->c8_IR1)[c8_i3]);
  }

  chartInstance->c8_sfEvent = CALL_EVENT;
  for (c8_i4 = 0; c8_i4 < 83312; c8_i4++) {
    chartInstance->c8_b_IR_1[c8_i4] = (*chartInstance->c8_IR1)[c8_i4];
  }

  for (c8_i5 = 0; c8_i5 < 83312; c8_i5++) {
    chartInstance->c8_IR_2[c8_i5] = (*chartInstance->c8_IR2)[c8_i5];
  }

  c8_g_x = *chartInstance->c8_f_x;
  for (c8_i6 = 0; c8_i6 < 83312; c8_i6++) {
    chartInstance->c8_VIS_1[c8_i6] = (*chartInstance->c8_VIS1)[c8_i6];
  }

  for (c8_i7 = 0; c8_i7 < 83312; c8_i7++) {
    chartInstance->c8_VIS_2[c8_i7] = (*chartInstance->c8_VIS2)[c8_i7];
  }

  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 4U, 0, 0);
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 0,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 0U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 1,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 1U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 2,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 2U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 3,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 3U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 4,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 4U, c8_mod(chartInstance, 254.0), 1.0, -1, 0U, c8_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 5,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 5U, c8_mod(chartInstance, 328.0), 1.0, -1, 0U, c8_mod(chartInstance,
    328.0) == 1.0));
  c8_b_st.site = &c8_f_emlrtRSI;
  c8_imresize(chartInstance, &c8_b_st, chartInstance->c8_b_IR_1,
              chartInstance->c8_ir_1);
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 6,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 6U, c8_mod(chartInstance, 254.0), 1.0, -1, 0U, c8_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 7,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 7U, c8_mod(chartInstance, 328.0), 1.0, -1, 0U, c8_mod(chartInstance,
    328.0) == 1.0));
  c8_b_st.site = &c8_g_emlrtRSI;
  c8_imresize(chartInstance, &c8_b_st, chartInstance->c8_IR_2,
              chartInstance->c8_b_ir_2);
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 8,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 8U, c8_mod(chartInstance, 254.0), 1.0, -1, 0U, c8_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 9,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 9U, c8_mod(chartInstance, 328.0), 1.0, -1, 0U, c8_mod(chartInstance,
    328.0) == 1.0));
  c8_b_st.site = &c8_h_emlrtRSI;
  c8_imresize(chartInstance, &c8_b_st, chartInstance->c8_VIS_1,
              chartInstance->c8_IR_2);
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 10,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 10U, c8_mod(chartInstance, 254.0), 1.0, -1, 0U, c8_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 11,
                 covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 4U,
    0U, 11U, c8_mod(chartInstance, 328.0), 1.0, -1, 0U, c8_mod(chartInstance,
    328.0) == 1.0));
  c8_b_st.site = &c8_i_emlrtRSI;
  c8_imresize(chartInstance, &c8_b_st, chartInstance->c8_VIS_2,
              chartInstance->c8_b_IR_1);
  c8_b_st.site = &c8_j_emlrtRSI;
  c8_Fenk(chartInstance, &c8_b_st, chartInstance->c8_ir_1, chartInstance->c8_D2,
          chartInstance->c8_A2, chartInstance->c8_A3, chartInstance->c8_A4,
          chartInstance->c8_A22, chartInstance->c8_A33, chartInstance->c8_A44);
  c8_b_st.site = &c8_k_emlrtRSI;
  for (c8_i8 = 0; c8_i8 < 83312; c8_i8++) {
    chartInstance->c8_c_ir_2[c8_i8] = chartInstance->c8_b_ir_2[c8_i8];
  }

  c8_Fenk(chartInstance, &c8_b_st, chartInstance->c8_c_ir_2,
          chartInstance->c8_B1, chartInstance->c8_B2, chartInstance->c8_B3,
          chartInstance->c8_B4, chartInstance->c8_B22, chartInstance->c8_B33,
          chartInstance->c8_B44);
  c8_b_st.site = &c8_l_emlrtRSI;
  c8_Fenk(chartInstance, &c8_b_st, chartInstance->c8_IR_2, chartInstance->c8_D2,
          chartInstance->c8_C2, chartInstance->c8_C3, chartInstance->c8_C4,
          chartInstance->c8_C22, chartInstance->c8_C33, chartInstance->c8_C44);
  c8_b_st.site = &c8_m_emlrtRSI;
  for (c8_i9 = 0; c8_i9 < 83312; c8_i9++) {
    chartInstance->c8_c_IR_1[c8_i9] = chartInstance->c8_b_IR_1[c8_i9];
  }

  c8_Fenk(chartInstance, &c8_b_st, chartInstance->c8_c_IR_1,
          chartInstance->c8_D1, chartInstance->c8_D2, chartInstance->c8_D3,
          chartInstance->c8_D4, chartInstance->c8_D22, chartInstance->c8_D33,
          chartInstance->c8_D44);
  c8_b_st.site = &c8_n_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A2, chartInstance->c8_B2,
         chartInstance->c8_P2);
  c8_b_st.site = &c8_o_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A3, chartInstance->c8_B3,
         chartInstance->c8_P3);
  c8_b_st.site = &c8_p_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A4, chartInstance->c8_B4,
         chartInstance->c8_P4);
  c8_b_st.site = &c8_q_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A22, chartInstance->c8_B22,
         chartInstance->c8_P22);
  c8_b_st.site = &c8_r_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A33, chartInstance->c8_B33,
         chartInstance->c8_B22);
  c8_b_st.site = &c8_s_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_A44, chartInstance->c8_B44,
         chartInstance->c8_A4);
  c8_b_st.site = &c8_t_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C2, chartInstance->c8_D2,
         chartInstance->c8_B4);
  c8_b_st.site = &c8_u_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C3, chartInstance->c8_D3,
         chartInstance->c8_A3);
  c8_b_st.site = &c8_v_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C4, chartInstance->c8_D4,
         chartInstance->c8_B3);
  c8_b_st.site = &c8_w_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C22, chartInstance->c8_D22,
         chartInstance->c8_A2);
  c8_b_st.site = &c8_x_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C33, chartInstance->c8_D33,
         chartInstance->c8_B2);
  c8_b_st.site = &c8_y_emlrtRSI;
  c8_Fea(chartInstance, &c8_b_st, chartInstance->c8_C44, chartInstance->c8_D44,
         chartInstance->c8_D2);
  for (c8_i10 = 0; c8_i10 < 83312; c8_i10++) {
    chartInstance->c8_Ig[c8_i10] = (real_T)chartInstance->c8_b_ir_2[c8_i10];
  }

  for (c8_i11 = 0; c8_i11 < 83312; c8_i11++) {
    chartInstance->c8_I1[c8_i11] = chartInstance->c8_Ig[c8_i11] + 1.0;
  }

  c8_b_st.site = &c8_ab_emlrtRSI;
  c8_b_log(chartInstance, &c8_b_st, chartInstance->c8_I1);
  c8_b_st.site = &c8_bb_emlrtRSI;
  c8_fft2(chartInstance, chartInstance->c8_I1, chartInstance->c8_FI);
  for (c8_b_i = 0; c8_b_i < 254; c8_b_i++) {
    c8_c_i = 1.0 + (real_T)c8_b_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 1);
    for (c8_j = 0; c8_j < 328; c8_j++) {
      c8_b_j = 1.0 + (real_T)c8_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 1);
      c8_b_st.site = &c8_cb_emlrtRSI;
      c8_c_a = c8_c_i - 127.0;
      c8_c_st.site = &c8_pc_emlrtRSI;
      c8_d_a = c8_c_a;
      c8_e_a = c8_d_a;
      c8_f_a = c8_e_a;
      c8_b_y = c8_f_a * c8_f_a;
      if (c8_fltpower_domain_error(chartInstance)) {
        c8_c_y = NULL;
        sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        c8_d_y = NULL;
        sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        sf_mex_call(&c8_c_st, &c8_e_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                    sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_c_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
      }

      c8_b_st.site = &c8_cb_emlrtRSI;
      c8_g_a = c8_b_j - 164.0;
      c8_c_st.site = &c8_pc_emlrtRSI;
      c8_h_a = c8_g_a;
      c8_i_a = c8_h_a;
      c8_j_a = c8_i_a;
      c8_e_y = c8_j_a * c8_j_a;
      if (c8_fltpower_domain_error(chartInstance)) {
        c8_f_y = NULL;
        sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        c8_g_y = NULL;
        sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        sf_mex_call(&c8_c_st, &c8_e_emlrtMCI, "error", 0U, 2U, 14, c8_f_y, 14,
                    sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_c_st, NULL, "message", 1U, 1U, 14, c8_g_y)));
      }

      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_emlrtDCI, &c8_st);
      }

      c8_i19 = (int32_T)c8_c_i;
      if ((c8_i19 < 1) || (c8_i19 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i19, 1, 254, &c8_emlrtBCI, &c8_st);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_b_emlrtDCI, &c8_st);
      }

      c8_i21 = (int32_T)c8_b_j;
      if ((c8_i21 < 1) || (c8_i21 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i21, 1, 328, &c8_b_emlrtBCI, &c8_st);
      }

      chartInstance->c8_I1[(c8_i19 + 254 * (c8_i21 - 1)) - 1] = c8_b_y + c8_e_y;
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_i_emlrtDCI, &c8_st);
      }

      c8_i25 = (int32_T)c8_c_i;
      if ((c8_i25 < 1) || (c8_i25 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i25, 1, 254, &c8_j_emlrtBCI, &c8_st);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_i_emlrtDCI, &c8_st);
      }

      c8_i27 = (int32_T)c8_b_j;
      if ((c8_i27 < 1) || (c8_i27 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i27, 1, 328, &c8_k_emlrtBCI, &c8_st);
      }

      c8_o_x = 1.0 / chartInstance->c8_I1[(c8_i25 + 254 * (c8_i27 - 1)) - 1];
      c8_p_x = c8_o_x;
      c8_p_x = muDoubleScalarExp(c8_p_x);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_c_emlrtDCI, &c8_st);
      }

      c8_i30 = (int32_T)c8_c_i;
      if ((c8_i30 < 1) || (c8_i30 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i30, 1, 254, &c8_c_emlrtBCI, &c8_st);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_d_emlrtDCI, &c8_st);
      }

      c8_i32 = (int32_T)c8_b_j;
      if ((c8_i32 < 1) || (c8_i32 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i32, 1, 328, &c8_d_emlrtBCI, &c8_st);
      }

      chartInstance->c8_b_H[(c8_i30 + 254 * (c8_i32 - 1)) - 1] = 85.0 / (1.0 +
        c8_p_x);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 0, 0);
  for (c8_i12 = 0; c8_i12 < 83312; c8_i12++) {
    chartInstance->c8_H[c8_i12].re = chartInstance->c8_b_H[c8_i12] *
      chartInstance->c8_FI[c8_i12].re;
    chartInstance->c8_H[c8_i12].im = chartInstance->c8_b_H[c8_i12] *
      chartInstance->c8_FI[c8_i12].im;
  }

  c8_b_st.site = &c8_db_emlrtRSI;
  c8_ifft2(chartInstance, chartInstance->c8_H, chartInstance->c8_FI);
  c8_b_exp(chartInstance, chartInstance->c8_FI);
  for (c8_i13 = 0; c8_i13 < 83312; c8_i13++) {
    chartInstance->c8_b_H[c8_i13] = chartInstance->c8_FI[c8_i13].re;
  }

  for (c8_i14 = 0; c8_i14 < 83312; c8_i14++) {
    chartInstance->c8_b_H[c8_i14] /= 1.0E+144;
  }

  for (c8_i15 = 0; c8_i15 < 83312; c8_i15++) {
    chartInstance->c8_I1[c8_i15] = chartInstance->c8_b_H[c8_i15];
  }

  c8_ma = c8_maximum(chartInstance, &c8_st, chartInstance->c8_I1);
  for (c8_i16 = 0; c8_i16 < 83312; c8_i16++) {
    chartInstance->c8_I1[c8_i16] = chartInstance->c8_b_H[c8_i16];
  }

  c8_mi = c8_minimum(chartInstance, &c8_st, chartInstance->c8_I1);
  for (c8_d_i = 0; c8_d_i < 254; c8_d_i++) {
    c8_c_i = 1.0 + (real_T)c8_d_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 2, 1);
    for (c8_c_j = 0; c8_c_j < 328; c8_c_j++) {
      c8_b_j = 1.0 + (real_T)c8_c_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 3, 1);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_g_emlrtDCI, &c8_st);
      }

      c8_i18 = (int32_T)c8_c_i;
      if ((c8_i18 < 1) || (c8_i18 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i18, 1, 254, &c8_g_emlrtBCI, &c8_st);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_g_emlrtDCI, &c8_st);
      }

      c8_i20 = (int32_T)c8_b_j;
      if ((c8_i20 < 1) || (c8_i20 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i20, 1, 328, &c8_h_emlrtBCI, &c8_st);
      }

      c8_m_x = 255.0 * (chartInstance->c8_b_H[(c8_i18 + 254 * (c8_i20 - 1)) - 1]
                        - c8_mi) / (c8_ma - c8_mi);
      c8_n_x = c8_m_x;
      c8_n_x = muDoubleScalarRound(c8_n_x);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_e_emlrtDCI, &c8_st);
      }

      c8_i26 = (int32_T)c8_c_i;
      if ((c8_i26 < 1) || (c8_i26 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i26, 1, 254, &c8_e_emlrtBCI, &c8_st);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_f_emlrtDCI, &c8_st);
      }

      c8_i28 = (int32_T)c8_b_j;
      if ((c8_i28 < 1) || (c8_i28 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i28, 1, 328, &c8_f_emlrtBCI, &c8_st);
      }

      chartInstance->c8_I1[(c8_i26 + 254 * (c8_i28 - 1)) - 1] = c8_n_x;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 4U, 0, 2, 0);
  for (c8_i17 = 0; c8_i17 < 83312; c8_i17++) {
    chartInstance->c8_b_I1[c8_i17] = chartInstance->c8_I1[c8_i17];
  }

  c8_h_x = c8_mean(chartInstance, chartInstance->c8_b_I1);
  c8_i_x = c8_h_x;
  c8_j_x = c8_i_x;
  c8_k_x = c8_j_x;
  c8_l_x = c8_k_x;
  c8_avg = c8_b_sumColumnB(chartInstance, c8_l_x);
  c8_e_i = 0;
  while (c8_e_i <= 83311) {
    c8_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c8_f_i = 0;
  while (c8_f_i <= 83311) {
    if (chartInstance->c8_I1[c8_f_i] < c8_avg) {
      c8_d = (real_T)(c8_f_i + 1);
      if (c8_d != (real_T)(int32_T)muDoubleScalarFloor(c8_d)) {
        emlrtIntegerCheckR2012b(c8_d, &c8_h_emlrtDCI, &c8_st);
      }

      c8_i24 = (int32_T)muDoubleScalarFloor(c8_d);
      if ((c8_i24 < 1) || (c8_i24 > 83312)) {
        emlrtDynamicBoundsCheckR2012b(c8_i24, 1, 83312, &c8_i_emlrtBCI, &c8_st);
      }

      chartInstance->c8_Ig[c8_i24 - 1] = 0.0;
    }

    c8_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  for (c8_i22 = 0; c8_i22 < 83312; c8_i22++) {
    chartInstance->c8_ir_2[c8_i22] = (real_T)chartInstance->c8_b_ir_2[c8_i22];
  }

  c8_b_st.site = &c8_eb_emlrtRSI;
  c8_E_ir = c8_metricsEdge_intensity(chartInstance, &c8_b_st,
    chartInstance->c8_ir_2);
  for (c8_i23 = 0; c8_i23 < 83312; c8_i23++) {
    chartInstance->c8_IR_1[c8_i23] = (real_T)chartInstance->c8_b_IR_1[c8_i23];
  }

  c8_b_st.site = &c8_fb_emlrtRSI;
  c8_E_vis = c8_metricsEdge_intensity(chartInstance, &c8_b_st,
    chartInstance->c8_IR_1);
  c8_We = 0.5 * c8_E_ir / (c8_E_ir + c8_E_vis);
  c8_b_st.site = &c8_gb_emlrtRSI;
  c8_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d1 = 1.0 - c8_k;
  for (c8_i29 = 0; c8_i29 < 20828; c8_i29++) {
    chartInstance->c8_P2[c8_i29] = c8_k * chartInstance->c8_P2[c8_i29] + c8_d1 *
      chartInstance->c8_B4[c8_i29];
  }

  c8_b_st.site = &c8_hb_emlrtRSI;
  c8_b_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d2 = 1.0 - c8_b_k;
  for (c8_i31 = 0; c8_i31 < 20828; c8_i31++) {
    chartInstance->c8_P3[c8_i31] = c8_b_k * chartInstance->c8_P3[c8_i31] + c8_d2
      * chartInstance->c8_A3[c8_i31];
  }

  c8_b_st.site = &c8_ib_emlrtRSI;
  c8_c_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d3 = 1.0 - c8_c_k;
  for (c8_i33 = 0; c8_i33 < 20828; c8_i33++) {
    chartInstance->c8_P4[c8_i33] = c8_c_k * chartInstance->c8_P4[c8_i33] + c8_d3
      * chartInstance->c8_B3[c8_i33];
  }

  c8_b_st.site = &c8_jb_emlrtRSI;
  c8_d_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d4 = 1.0 - c8_d_k;
  for (c8_i34 = 0; c8_i34 < 20828; c8_i34++) {
    chartInstance->c8_P22[c8_i34] = c8_d_k * chartInstance->c8_P22[c8_i34] +
      c8_d4 * chartInstance->c8_A2[c8_i34];
  }

  c8_b_st.site = &c8_kb_emlrtRSI;
  c8_e_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d5 = 1.0 - c8_e_k;
  for (c8_i35 = 0; c8_i35 < 20828; c8_i35++) {
    chartInstance->c8_B22[c8_i35] = c8_e_k * chartInstance->c8_B22[c8_i35] +
      c8_d5 * chartInstance->c8_B2[c8_i35];
  }

  c8_b_st.site = &c8_lb_emlrtRSI;
  c8_f_k = c8_We;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 3, 0);
  c8_d6 = 1.0 - c8_f_k;
  for (c8_i36 = 0; c8_i36 < 20828; c8_i36++) {
    chartInstance->c8_A4[c8_i36] = c8_f_k * chartInstance->c8_A4[c8_i36] + c8_d6
      * chartInstance->c8_D2[c8_i36];
  }

  c8_b_st.site = &c8_mb_emlrtRSI;
  for (c8_i37 = 0; c8_i37 < 83312; c8_i37++) {
    chartInstance->c8_I1[c8_i37] = (real_T)chartInstance->c8_b_ir_2[c8_i37];
  }

  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 4, 0);
  for (c8_i38 = 0; c8_i38 < 83312; c8_i38++) {
    chartInstance->c8_c_I1[c8_i38] = chartInstance->c8_I1[c8_i38];
  }

  c8_b_mean(chartInstance, chartInstance->c8_c_I1, c8_q_x);
  c8_h_y = c8_e_sumColumnB(chartInstance, c8_q_x);
  c8_img_mean = c8_h_y / 328.0;
  for (c8_i39 = 0; c8_i39 < 83312; c8_i39++) {
    chartInstance->c8_d_I1[c8_i39] = chartInstance->c8_I1[c8_i39] - c8_img_mean;
  }

  c8_power(chartInstance, chartInstance->c8_d_I1, chartInstance->c8_I1);
  c8_sum(chartInstance, chartInstance->c8_I1, c8_q_x);
  c8_i_y = c8_e_sumColumnB(chartInstance, c8_q_x);
  c8_SD_B = c8_i_y / 83312.0;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_b_sqrt(chartInstance, &c8_c_st, &c8_SD_B);
  c8_b_st.site = &c8_nb_emlrtRSI;
  for (c8_i40 = 0; c8_i40 < 83312; c8_i40++) {
    chartInstance->c8_I1[c8_i40] = (real_T)chartInstance->c8_b_IR_1[c8_i40];
  }

  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 4, 0);
  for (c8_i41 = 0; c8_i41 < 83312; c8_i41++) {
    chartInstance->c8_e_I1[c8_i41] = chartInstance->c8_I1[c8_i41];
  }

  c8_b_mean(chartInstance, chartInstance->c8_e_I1, c8_q_x);
  c8_j_y = c8_e_sumColumnB(chartInstance, c8_q_x);
  c8_b_img_mean = c8_j_y / 328.0;
  for (c8_i42 = 0; c8_i42 < 83312; c8_i42++) {
    chartInstance->c8_f_I1[c8_i42] = chartInstance->c8_I1[c8_i42] -
      c8_b_img_mean;
  }

  c8_power(chartInstance, chartInstance->c8_f_I1, chartInstance->c8_I1);
  c8_sum(chartInstance, chartInstance->c8_I1, c8_q_x);
  c8_k_y = c8_e_sumColumnB(chartInstance, c8_q_x);
  c8_SD_D = c8_k_y / 83312.0;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_b_sqrt(chartInstance, &c8_c_st, &c8_SD_D);
  c8_b_st.site = &c8_ob_emlrtRSI;
  c8_k_a = (c8_SD_B - c8_SD_D) / (c8_SD_B + c8_SD_D);
  c8_r_x = c8_SD_B - c8_SD_D;
  c8_s_x = c8_r_x;
  c8_t_x = c8_s_x;
  c8_l_y = muDoubleScalarAbs(c8_t_x);
  c8_b = c8_l_y / (c8_SD_B - c8_SD_D);
  c8_c_st.site = &c8_pc_emlrtRSI;
  c8_l_a = c8_k_a;
  c8_b_b = c8_b;
  c8_m_a = c8_l_a;
  c8_c_b = c8_b_b;
  c8_n_a = c8_m_a;
  c8_d_b = c8_c_b;
  c8_m_y = muDoubleScalarPower(c8_n_a, c8_d_b);
  if (c8_b_fltpower_domain_error(chartInstance, c8_l_a, c8_b_b)) {
    c8_n_y = NULL;
    sf_mex_assign(&c8_n_y, sf_mex_create("y", c8_cv2, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c8_o_y = NULL;
    sf_mex_assign(&c8_o_y, sf_mex_create("y", c8_cv2, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c8_c_st, &c8_e_emlrtMCI, "error", 0U, 2U, 14, c8_n_y, 14,
                sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_c_st, NULL, "message", 1U, 1U, 14, c8_o_y)));
  }

  c8_u_x = c8_m_y;
  c8_Eta = c8_u_x;
  c8_Eta = muDoubleScalarExp(c8_Eta);
  c8_v_x = c8_g_x + 0.5 * c8_Eta;
  c8_w_x = c8_g_x + 0.5;
  for (c8_i43 = 0; c8_i43 < 20828; c8_i43++) {
    chartInstance->c8_B1[c8_i43] = chartInstance->c8_B1[c8_i43] * c8_v_x +
      chartInstance->c8_D1[c8_i43] * c8_w_x;
  }

  c8_b_st.site = &c8_pb_emlrtRSI;
  c8_Inverse_Fenk(chartInstance, &c8_b_st, chartInstance->c8_B1,
                  chartInstance->c8_P2, chartInstance->c8_P3,
                  chartInstance->c8_P4, chartInstance->c8_P22,
                  chartInstance->c8_B22, chartInstance->c8_A4,
                  chartInstance->c8_I1);
  for (c8_i44 = 0; c8_i44 < 83312; c8_i44++) {
    c8_d7 = muDoubleScalarRound(chartInstance->c8_I1[c8_i44] +
      chartInstance->c8_Ig[c8_i44]);
    c8_covSaturation = false;
    if (c8_d7 < 256.0) {
      if (c8_d7 >= 0.0) {
        c8_u = (uint8_T)c8_d7;
      } else {
        c8_covSaturation = true;
        c8_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 2542, 11);
      }
    } else if (c8_d7 >= 256.0) {
      c8_covSaturation = true;
      c8_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 2542, 11);
    } else {
      c8_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 4, 0, 0, 0,
      c8_covSaturation);
    (*chartInstance->c8_y)[c8_i44] = c8_u;
  }

  c8_do_animation_call_c8_untitled1(chartInstance);
  for (c8_i45 = 0; c8_i45 < 83312; c8_i45++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 5U, (real_T)
                      (*chartInstance->c8_y)[c8_i45]);
  }
}

static void mdl_start_c8_untitled1(SFc8_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance)
{
  static const int32_T c8_b_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c8_c_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c8_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c8_b_condTxtEndIdx[2] = { 497, 513 };

  static const int32_T c8_b_condTxtStartIdx[2] = { 484, 499 };

  static const int32_T c8_c_condTxtEndIdx[2] = { 680, 696 };

  static const int32_T c8_c_condTxtStartIdx[2] = { 667, 682 };

  static const int32_T c8_condTxtEndIdx[2] = { 313, 329 };

  static const int32_T c8_condTxtStartIdx[2] = { 300, 315 };

  static const uint32_T c8_decisionTxtEndIdx = 0U;
  static const uint32_T c8_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c8_chart_data_browse_helper);
  chartInstance->c8_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c8_RuntimeVar,
    &chartInstance->c8_IsDebuggerActive,
    &chartInstance->c8_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c8_mlFcnLineNumber, &chartInstance->c8_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c8_covrtInstance, 1U, 0U, 1U,
    16U);
  covrtChartInitFcn(chartInstance->c8_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c8_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c8_decisionTxtStartIdx, &c8_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c8_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "", 4U, 0U, 1U, 0U, 12U, 0U,
                  1U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 2559);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 2542,
    -1, 2553);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 44, 60, 85, 107);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 108, 124, 149,
                    171);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 172, 189, 216,
                    240);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 241, 258, 285,
                    309);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 4U, 344, 361, -1,
                    382);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 5U, 383, 400, -1,
                    421);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 6U, 503, 520, -1,
                    541);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 7U, 542, 559, -1,
                    580);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 8U, 663, 680, -1,
                    701);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 9U, 702, 719, -1,
                    740);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 10U, 826, 843, -1,
                    864);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 11U, 865, 882, -1,
                    903);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 1563, 1572,
                     1749);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 1576, 1585,
                     1745);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 1852, 1861,
                     1939);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 1866, 1875,
                     1935);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 47, 60,
    -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 1U, 111,
    124, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 2U, 175,
    189, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 3U, 244,
    258, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 4U, 347,
    361, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 5U, 386,
    400, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 6U, 506,
    520, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 7U, 545,
    559, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 8U, 666,
    680, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 9U, 705,
    719, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 10U, 829,
    843, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 11U, 868,
    882, -1, 0U);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "E:/ShiYan/2.1/Fenk.m", 14U,
                  0U, 1U, 0U, 3U, 0U, 6U, 0U, 2U, 0U, 6U, 3U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, "Fenk", 0, -1,
                     851);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, 350,
    -1, 363);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 1U, 423,
    -1, 436);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 2U, 534,
    -1, 547);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 3U, 607,
    -1, 620);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 4U, 717,
    -1, 730);
  covrtEmlSaturationInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 5U, 788,
    -1, 801);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, 297, 329, 397,
                    472);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 1U, 481, 513, 581,
                    656);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 2U, 664, 696, 763,
                    835);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, 201, 212, 847);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 1U, 217, 228, 843);
  covrtEmlMCDCInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, 300, 329, 2U,
                      0U, c8_condTxtStartIdx, c8_condTxtEndIdx, 3U,
                      c8_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 1U, 484, 513, 2U,
                      2U, c8_b_condTxtStartIdx, c8_b_condTxtEndIdx, 3U,
                      c8_b_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 2U, 667, 696, 2U,
                      4U, c8_c_condTxtStartIdx, c8_c_condTxtEndIdx, 3U,
                      c8_c_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 0U, 300,
    313, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 1U, 315,
    329, 0, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 2U, 484,
    497, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 3U, 499,
    513, 0, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 4U, 667,
    680, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 0U, 5U, 682,
    696, 0, 0U);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "E:/ShiYan/2.1/Fea.m", 14U,
                  1U, 1U, 0U, 3U, 0U, 0U, 0U, 6U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 0U, "Fea", 0, -1,
                     570);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 0U, 162, 174, 206,
                    245);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 1U, 295, 307, 339,
                    378);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 2U, 449, 462, 499,
                    553);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 0U, 126, 137, 257);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 1U, 142, 153, 253);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 2U, 259, 270, 390);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 3U, 275, 286, 386);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 4U, 413, 424, 565);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 5U, 429, 440, 561);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 0U, 165,
    174, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 1U, 298,
    307, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c8_covrtInstance, 14U, 1U, 2U, 452,
    462, -1, 0U);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance,
                  "E:/ShiYan/2.1/metricsEdge_intensity.m", 14U, 2U, 1U, 0U, 0U,
                  0U, 0U, 0U, 3U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 2U, 0U,
                     "metricsEdge_intensity", 344, -1, 922);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 2U, 0U, 676, 689, 879);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 2U, 1U, 703, 716, 866);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 2U, 2U, 734, 747, 849);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "E:/ShiYan/2.1/Fuse_d.m", 14U,
                  3U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 3U, 0U, "Fuse_d", 0,
                     -1, 229);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "E:/ShiYan/2.1/SD.m", 14U, 4U,
                  1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 4U, 0U, "SD", 0, -1,
                     265);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance,
                  "E:/ShiYan/2.1/Inverse_Fenk.m", 14U, 5U, 1U, 0U, 0U, 0U, 0U,
                  0U, 2U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 14U, 5U, 0U,
                     "Inverse_Fenk", 0, -1, 299);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 5U, 0U, 130, 141, 295);
  covrtEmlForInitFcn(chartInstance->c8_covrtInstance, 14U, 5U, 1U, 146, 157, 291);
}

static void mdl_cleanup_runtime_resources_c8_untitled1
  (SFc8_untitled1InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c8_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c8_covrtInstance);
}

static void initSimStructsc8_untitled1(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c8_Fenk(SFc8_untitled1InstanceStruct *chartInstance, const
                    emlrtStack *c8_sp, uint8_T c8_Img[83312], real_T c8_A1[20828],
                    real_T c8_b_A2[20828], real_T c8_b_A3[20828], real_T
                    c8_b_A4[20828], real_T c8_b_A22[20828], real_T c8_b_A33
                    [20828], real_T c8_b_A44[20828])
{
  real_T c8_b_i;
  real_T c8_b_j;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  int32_T c8_c_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_j;
  uint32_T c8_b_q0;
  uint32_T c8_b_qY;
  uint32_T c8_c_q0;
  uint32_T c8_c_qY;
  uint32_T c8_d_q0;
  uint32_T c8_d_qY;
  uint32_T c8_e_q0;
  uint32_T c8_e_qY;
  uint32_T c8_f_q0;
  uint32_T c8_f_qY;
  uint32_T c8_q0;
  uint32_T c8_qY;
  uint32_T c8_u;
  uint32_T c8_u1;
  uint32_T c8_u2;
  uint32_T c8_u3;
  uint32_T c8_u4;
  uint32_T c8_u5;
  uint8_T c8_T[4];
  boolean_T c8_b_covSaturation;
  boolean_T c8_c_covSaturation;
  boolean_T c8_covSaturation;
  boolean_T c8_d_covSaturation;
  boolean_T c8_e_covSaturation;
  boolean_T c8_f_covSaturation;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 0, 0);
  for (c8_i = 0; c8_i < 127; c8_i++) {
    c8_b_i = 1.0 + (real_T)c8_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 0, 0, 1);
    for (c8_j = 0; c8_j < 164; c8_j++) {
      c8_b_j = 1.0 + (real_T)c8_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 0, 1, 1);
      c8_d = 2.0 * c8_b_i;
      c8_d1 = 2.0 * c8_b_j;
      for (c8_c_i = 0; c8_c_i < 2; c8_c_i++) {
        for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
          c8_d2 = c8_d + (real_T)(int32_T)(-1.0 + (real_T)c8_i1);
          if (c8_d2 != (real_T)(int32_T)muDoubleScalarFloor(c8_d2)) {
            emlrtIntegerCheckR2012b(c8_d2, &c8_v_emlrtDCI, (void *)c8_sp);
          }

          c8_i3 = (int32_T)c8_d2;
          if ((c8_i3 < 1) || (c8_i3 > 254)) {
            emlrtDynamicBoundsCheckR2012b(c8_i3, 1, 254, &c8_x_emlrtBCI, (void *)
              c8_sp);
          }

          c8_d3 = c8_d1 + (real_T)(int32_T)(-1.0 + (real_T)c8_c_i);
          if (c8_d3 != (real_T)(int32_T)muDoubleScalarFloor(c8_d3)) {
            emlrtIntegerCheckR2012b(c8_d3, &c8_w_emlrtDCI, (void *)c8_sp);
          }

          c8_i5 = (int32_T)c8_d3;
          if ((c8_i5 < 1) || (c8_i5 > 328)) {
            emlrtDynamicBoundsCheckR2012b(c8_i5, 1, 328, &c8_y_emlrtBCI, (void *)
              c8_sp);
          }

          c8_T[c8_i1 + (c8_c_i << 1)] = c8_Img[(c8_i3 + 254 * (c8_i5 - 1)) - 1];
        }
      }

      if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
        emlrtIntegerCheckR2012b(c8_b_i, &c8_x_emlrtDCI, (void *)c8_sp);
      }

      c8_i2 = (int32_T)c8_b_i;
      if ((c8_i2 < 1) || (c8_i2 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i2, 1, 127, &c8_ab_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_x_emlrtDCI, (void *)c8_sp);
      }

      c8_i4 = (int32_T)c8_b_j;
      if ((c8_i4 < 1) || (c8_i4 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i4, 1, 164, &c8_bb_emlrtBCI, (void *)
          c8_sp);
      }

      c8_A1[(c8_i2 + 127 * (c8_i4 - 1)) - 1] = (real_T)c8_T[0];
      if (covrtEmlCondEval(chartInstance->c8_covrtInstance, 14U, 0, 0,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c8_covrtInstance, 14U, 0U, 0U,
                            (real_T)c8_T[2], (real_T)c8_T[0], 0, 4U, c8_T[2] >
                            c8_T[0])) || covrtEmlCondEval
          (chartInstance->c8_covrtInstance, 14U, 0, 1,
           covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 14U, 0U,
            1U, (real_T)c8_T[2], (real_T)c8_T[0], 0, 0U, c8_T[0] == c8_T[2]))) {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 0, true);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 0, true);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_ab_emlrtDCI, (void *)c8_sp);
        }

        c8_i7 = (int32_T)c8_b_i;
        if ((c8_i7 < 1) || (c8_i7 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i7, 1, 127, &c8_eb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_ab_emlrtDCI, (void *)c8_sp);
        }

        c8_i9 = (int32_T)c8_b_j;
        if ((c8_i9 < 1) || (c8_i9 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i9, 1, 164, &c8_fb_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_q0 = c8_T[2];
        c8_b_qY = c8_b_q0 - (uint32_T)c8_T[0];
        c8_b_covSaturation = false;
        if (c8_b_qY > c8_b_q0) {
          c8_b_covSaturation = true;
          c8_b_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u1 = c8_b_qY;
        if (c8_u1 > 255U) {
          c8_b_covSaturation = true;
          c8_u1 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 0, 0,
          c8_b_covSaturation);
        c8_b_A2[(c8_i7 + 127 * (c8_i9 - 1)) - 1] = (real_T)(uint8_T)c8_u1;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_p_emlrtDCI, (void *)c8_sp);
        }

        c8_i11 = (int32_T)c8_b_i;
        if ((c8_i11 < 1) || (c8_i11 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i11, 1, 127, &c8_r_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_q_emlrtDCI, (void *)c8_sp);
        }

        c8_i13 = (int32_T)c8_b_j;
        if ((c8_i13 < 1) || (c8_i13 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i13, 1, 164, &c8_s_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A22[(c8_i11 + 127 * (c8_i13 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 0, false);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 0, false);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_y_emlrtDCI, (void *)c8_sp);
        }

        c8_i6 = (int32_T)c8_b_i;
        if ((c8_i6 < 1) || (c8_i6 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 127, &c8_cb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_y_emlrtDCI, (void *)c8_sp);
        }

        c8_i8 = (int32_T)c8_b_j;
        if ((c8_i8 < 1) || (c8_i8 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i8, 1, 164, &c8_db_emlrtBCI, (void *)
            c8_sp);
        }

        c8_q0 = c8_T[0];
        c8_qY = c8_q0 - (uint32_T)c8_T[2];
        c8_covSaturation = false;
        if (c8_qY > c8_q0) {
          c8_covSaturation = true;
          c8_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u = c8_qY;
        if (c8_u > 255U) {
          c8_covSaturation = true;
          c8_u = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 1, 0,
          c8_covSaturation);
        c8_b_A22[(c8_i6 + 127 * (c8_i8 - 1)) - 1] = (real_T)(uint8_T)c8_u;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_j_emlrtDCI, (void *)c8_sp);
        }

        c8_i10 = (int32_T)c8_b_i;
        if ((c8_i10 < 1) || (c8_i10 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i10, 1, 127, &c8_l_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_k_emlrtDCI, (void *)c8_sp);
        }

        c8_i12 = (int32_T)c8_b_j;
        if ((c8_i12 < 1) || (c8_i12 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i12, 1, 164, &c8_m_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A2[(c8_i10 + 127 * (c8_i12 - 1)) - 1] = 0.0;
      }

      if (covrtEmlCondEval(chartInstance->c8_covrtInstance, 14U, 0, 2,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c8_covrtInstance, 14U, 0U, 2U,
                            (real_T)c8_T[1], (real_T)c8_T[0], 0, 4U, c8_T[1] >
                            c8_T[0])) || covrtEmlCondEval
          (chartInstance->c8_covrtInstance, 14U, 0, 3,
           covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 14U, 0U,
            3U, (real_T)c8_T[1], (real_T)c8_T[0], 0, 0U, c8_T[0] == c8_T[1]))) {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 1, true);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 1, true);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_cb_emlrtDCI, (void *)c8_sp);
        }

        c8_i15 = (int32_T)c8_b_i;
        if ((c8_i15 < 1) || (c8_i15 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 127, &c8_ib_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_cb_emlrtDCI, (void *)c8_sp);
        }

        c8_i17 = (int32_T)c8_b_j;
        if ((c8_i17 < 1) || (c8_i17 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i17, 1, 164, &c8_jb_emlrtBCI, (void *)
            c8_sp);
        }

        c8_d_q0 = c8_T[1];
        c8_d_qY = c8_d_q0 - (uint32_T)c8_T[0];
        c8_d_covSaturation = false;
        if (c8_d_qY > c8_d_q0) {
          c8_d_covSaturation = true;
          c8_d_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u3 = c8_d_qY;
        if (c8_u3 > 255U) {
          c8_d_covSaturation = true;
          c8_u3 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 2, 0,
          c8_d_covSaturation);
        c8_b_A3[(c8_i15 + 127 * (c8_i17 - 1)) - 1] = (real_T)(uint8_T)c8_u3;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_r_emlrtDCI, (void *)c8_sp);
        }

        c8_i19 = (int32_T)c8_b_i;
        if ((c8_i19 < 1) || (c8_i19 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i19, 1, 127, &c8_t_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_s_emlrtDCI, (void *)c8_sp);
        }

        c8_i21 = (int32_T)c8_b_j;
        if ((c8_i21 < 1) || (c8_i21 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i21, 1, 164, &c8_u_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A33[(c8_i19 + 127 * (c8_i21 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 1, false);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 1, false);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_bb_emlrtDCI, (void *)c8_sp);
        }

        c8_i14 = (int32_T)c8_b_i;
        if ((c8_i14 < 1) || (c8_i14 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i14, 1, 127, &c8_gb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_bb_emlrtDCI, (void *)c8_sp);
        }

        c8_i16 = (int32_T)c8_b_j;
        if ((c8_i16 < 1) || (c8_i16 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i16, 1, 164, &c8_hb_emlrtBCI, (void *)
            c8_sp);
        }

        c8_c_q0 = c8_T[0];
        c8_c_qY = c8_c_q0 - (uint32_T)c8_T[1];
        c8_c_covSaturation = false;
        if (c8_c_qY > c8_c_q0) {
          c8_c_covSaturation = true;
          c8_c_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u2 = c8_c_qY;
        if (c8_u2 > 255U) {
          c8_c_covSaturation = true;
          c8_u2 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 3, 0,
          c8_c_covSaturation);
        c8_b_A33[(c8_i14 + 127 * (c8_i16 - 1)) - 1] = (real_T)(uint8_T)c8_u2;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_l_emlrtDCI, (void *)c8_sp);
        }

        c8_i18 = (int32_T)c8_b_i;
        if ((c8_i18 < 1) || (c8_i18 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i18, 1, 127, &c8_n_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_m_emlrtDCI, (void *)c8_sp);
        }

        c8_i20 = (int32_T)c8_b_j;
        if ((c8_i20 < 1) || (c8_i20 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i20, 1, 164, &c8_o_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A3[(c8_i18 + 127 * (c8_i20 - 1)) - 1] = 0.0;
      }

      if (covrtEmlCondEval(chartInstance->c8_covrtInstance, 14U, 0, 4,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c8_covrtInstance, 14U, 0U, 4U,
                            (real_T)c8_T[3], (real_T)c8_T[0], 0, 4U, c8_T[3] >
                            c8_T[0])) || covrtEmlCondEval
          (chartInstance->c8_covrtInstance, 14U, 0, 5,
           covrtRelationalopUpdateFcn(chartInstance->c8_covrtInstance, 14U, 0U,
            5U, (real_T)c8_T[3], (real_T)c8_T[0], 0, 0U, c8_T[0] == c8_T[3]))) {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 2, true);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 2, true);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_eb_emlrtDCI, (void *)c8_sp);
        }

        c8_i23 = (int32_T)c8_b_i;
        if ((c8_i23 < 1) || (c8_i23 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i23, 1, 127, &c8_mb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_eb_emlrtDCI, (void *)c8_sp);
        }

        c8_i25 = (int32_T)c8_b_j;
        if ((c8_i25 < 1) || (c8_i25 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i25, 1, 164, &c8_nb_emlrtBCI, (void *)
            c8_sp);
        }

        c8_f_q0 = c8_T[3];
        c8_f_qY = c8_f_q0 - (uint32_T)c8_T[0];
        c8_f_covSaturation = false;
        if (c8_f_qY > c8_f_q0) {
          c8_f_covSaturation = true;
          c8_f_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u5 = c8_f_qY;
        if (c8_u5 > 255U) {
          c8_f_covSaturation = true;
          c8_u5 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 4, 0,
          c8_f_covSaturation);
        c8_b_A4[(c8_i23 + 127 * (c8_i25 - 1)) - 1] = (real_T)(uint8_T)c8_u5;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_t_emlrtDCI, (void *)c8_sp);
        }

        c8_i27 = (int32_T)c8_b_i;
        if ((c8_i27 < 1) || (c8_i27 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i27, 1, 127, &c8_v_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_u_emlrtDCI, (void *)c8_sp);
        }

        c8_i29 = (int32_T)c8_b_j;
        if ((c8_i29 < 1) || (c8_i29 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i29, 1, 164, &c8_w_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A44[(c8_i27 + 127 * (c8_i29 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c8_covrtInstance, 14U, 0, 2, false);
        covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 0, 2, false);
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_db_emlrtDCI, (void *)c8_sp);
        }

        c8_i22 = (int32_T)c8_b_i;
        if ((c8_i22 < 1) || (c8_i22 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i22, 1, 127, &c8_kb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_db_emlrtDCI, (void *)c8_sp);
        }

        c8_i24 = (int32_T)c8_b_j;
        if ((c8_i24 < 1) || (c8_i24 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i24, 1, 164, &c8_lb_emlrtBCI, (void *)
            c8_sp);
        }

        c8_e_q0 = c8_T[0];
        c8_e_qY = c8_e_q0 - (uint32_T)c8_T[3];
        c8_e_covSaturation = false;
        if (c8_e_qY > c8_e_q0) {
          c8_e_covSaturation = true;
          c8_e_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c8_u4 = c8_e_qY;
        if (c8_u4 > 255U) {
          c8_e_covSaturation = true;
          c8_u4 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c8_covrtInstance, 14, 0, 5, 0,
          c8_e_covSaturation);
        c8_b_A44[(c8_i22 + 127 * (c8_i24 - 1)) - 1] = (real_T)(uint8_T)c8_u4;
        if (c8_b_i != (real_T)(int32_T)muDoubleScalarFloor(c8_b_i)) {
          emlrtIntegerCheckR2012b(c8_b_i, &c8_n_emlrtDCI, (void *)c8_sp);
        }

        c8_i26 = (int32_T)c8_b_i;
        if ((c8_i26 < 1) || (c8_i26 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i26, 1, 127, &c8_p_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_o_emlrtDCI, (void *)c8_sp);
        }

        c8_i28 = (int32_T)c8_b_j;
        if ((c8_i28 < 1) || (c8_i28 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i28, 1, 164, &c8_q_emlrtBCI, (void *)
            c8_sp);
        }

        c8_b_A4[(c8_i26 + 127 * (c8_i28 - 1)) - 1] = 0.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 0, 0, 0);
}

static void c8_Fea(SFc8_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c8_sp, real_T c8_A[20828], real_T c8_b_B[20828], real_T
                   c8_OUT[20828])
{
  static char_T c8_b_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c8_b_cv1[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  emlrtStack c8_st;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  const mxArray *c8_i_y = NULL;
  real_T c8_Ba;
  real_T c8_Da;
  real_T c8_b_j;
  real_T c8_b_k;
  real_T c8_b_s;
  real_T c8_b_y;
  real_T c8_c_i;
  real_T c8_c_y;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d_k;
  real_T c8_d_y;
  real_T c8_e_y;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  real_T c8_m_x;
  real_T c8_n_x;
  real_T c8_o_x;
  real_T c8_p_x;
  real_T c8_q_x;
  real_T c8_r_x;
  real_T c8_s;
  int32_T c8_b_i;
  int32_T c8_b_ib;
  int32_T c8_c_j;
  int32_T c8_c_k;
  int32_T c8_d_i;
  int32_T c8_d_j;
  int32_T c8_e_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_ib;
  int32_T c8_j;
  int32_T c8_k;
  boolean_T c8_E[20828];
  boolean_T c8_bv[20828];
  boolean_T c8_b;
  boolean_T c8_b_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 1, 0);
  for (c8_i = 0; c8_i < 20828; c8_i++) {
    chartInstance->c8_BB[c8_i] = c8_A[c8_i];
  }

  for (c8_i1 = 0; c8_i1 < 20828; c8_i1++) {
    chartInstance->c8_b_BB[c8_i1] = chartInstance->c8_BB[c8_i1];
  }

  c8_s = c8_sumColumnB4(chartInstance, chartInstance->c8_b_BB, 1);
  for (c8_ib = 0; c8_ib < 4; c8_ib++) {
    for (c8_i2 = 0; c8_i2 < 20828; c8_i2++) {
      chartInstance->c8_c_BB[c8_i2] = chartInstance->c8_BB[c8_i2];
    }

    c8_s += c8_sumColumnB4(chartInstance, chartInstance->c8_c_BB, 1 + ((c8_ib +
      1) << 12));
  }

  c8_s += c8_sumColumnB(chartInstance, chartInstance->c8_BB);
  c8_b_y = c8_s;
  c8_c_y = c8_b_y / 20828.0;
  c8_g_x = c8_c_y;
  c8_h_x = c8_g_x;
  c8_i_x = c8_h_x;
  c8_j_x = c8_i_x;
  c8_k_x = c8_j_x;
  c8_Ba = c8_b_sumColumnB(chartInstance, c8_k_x);
  for (c8_i3 = 0; c8_i3 < 20828; c8_i3++) {
    chartInstance->c8_BB[c8_i3] = c8_b_B[c8_i3];
  }

  for (c8_i4 = 0; c8_i4 < 20828; c8_i4++) {
    chartInstance->c8_d_BB[c8_i4] = chartInstance->c8_BB[c8_i4];
  }

  c8_b_s = c8_sumColumnB4(chartInstance, chartInstance->c8_d_BB, 1);
  for (c8_b_ib = 0; c8_b_ib < 4; c8_b_ib++) {
    for (c8_i5 = 0; c8_i5 < 20828; c8_i5++) {
      chartInstance->c8_e_BB[c8_i5] = chartInstance->c8_BB[c8_i5];
    }

    c8_b_s += c8_sumColumnB4(chartInstance, chartInstance->c8_e_BB, 1 +
      ((c8_b_ib + 1) << 12));
  }

  c8_b_s += c8_sumColumnB(chartInstance, chartInstance->c8_BB);
  c8_d_y = c8_b_s;
  c8_e_y = c8_d_y / 20828.0;
  c8_l_x = c8_e_y;
  c8_m_x = c8_l_x;
  c8_n_x = c8_m_x;
  c8_o_x = c8_n_x;
  c8_p_x = c8_o_x;
  c8_Da = c8_b_sumColumnB(chartInstance, c8_p_x);
  for (c8_b_i = 0; c8_b_i < 127; c8_b_i++) {
    c8_c_i = 1.0 + (real_T)c8_b_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 0, 1);
    for (c8_j = 0; c8_j < 164; c8_j++) {
      c8_b_j = 1.0 + (real_T)c8_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 1, 1);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_nb_emlrtDCI, (void *)c8_sp);
      }

      c8_i6 = (int32_T)c8_c_i;
      if ((c8_i6 < 1) || (c8_i6 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 127, &c8_wb_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_nb_emlrtDCI, (void *)c8_sp);
      }

      c8_i10 = (int32_T)c8_b_j;
      if ((c8_i10 < 1) || (c8_i10 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i10, 1, 164, &c8_xb_emlrtBCI, (void *)
          c8_sp);
      }

      c8_d = c8_A[(c8_i6 + 127 * (c8_i10 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 1, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c8_covrtInstance, 14U, 1U, 0U, c8_d,
                          c8_Ba, -1, 2U, c8_d < c8_Ba))) {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_fb_emlrtDCI, (void *)c8_sp);
        }

        c8_i15 = (int32_T)c8_c_i;
        if ((c8_i15 < 1) || (c8_i15 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 127, &c8_ob_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_gb_emlrtDCI, (void *)c8_sp);
        }

        c8_i19 = (int32_T)c8_b_j;
        if ((c8_i19 < 1) || (c8_i19 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i19, 1, 164, &c8_pb_emlrtBCI, (void *)
            c8_sp);
        }

        chartInstance->c8_BB[(c8_i15 + 127 * (c8_i19 - 1)) - 1] = 0.0;
      } else {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_hb_emlrtDCI, (void *)c8_sp);
        }

        c8_i14 = (int32_T)c8_c_i;
        if ((c8_i14 < 1) || (c8_i14 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i14, 1, 127, &c8_qb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_ib_emlrtDCI, (void *)c8_sp);
        }

        c8_i18 = (int32_T)c8_b_j;
        if ((c8_i18 < 1) || (c8_i18 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i18, 1, 164, &c8_rb_emlrtBCI, (void *)
            c8_sp);
        }

        chartInstance->c8_BB[(c8_i14 + 127 * (c8_i18 - 1)) - 1] = 1.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 0, 0);
  for (c8_d_i = 0; c8_d_i < 127; c8_d_i++) {
    c8_c_i = 1.0 + (real_T)c8_d_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 2, 1);
    for (c8_c_j = 0; c8_c_j < 164; c8_c_j++) {
      c8_b_j = 1.0 + (real_T)c8_c_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 3, 1);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_ob_emlrtDCI, (void *)c8_sp);
      }

      c8_i8 = (int32_T)c8_c_i;
      if ((c8_i8 < 1) || (c8_i8 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i8, 1, 127, &c8_yb_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_ob_emlrtDCI, (void *)c8_sp);
      }

      c8_i13 = (int32_T)c8_b_j;
      if ((c8_i13 < 1) || (c8_i13 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i13, 1, 164, &c8_ac_emlrtBCI, (void *)
          c8_sp);
      }

      c8_d1 = c8_b_B[(c8_i8 + 127 * (c8_i13 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 1, 1,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c8_covrtInstance, 14U, 1U, 1U, c8_d1,
                          c8_Da, -1, 2U, c8_d1 < c8_Da))) {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_jb_emlrtDCI, (void *)c8_sp);
        }

        c8_i17 = (int32_T)c8_c_i;
        if ((c8_i17 < 1) || (c8_i17 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i17, 1, 127, &c8_sb_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_kb_emlrtDCI, (void *)c8_sp);
        }

        c8_i22 = (int32_T)c8_b_j;
        if ((c8_i22 < 1) || (c8_i22 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i22, 1, 164, &c8_tb_emlrtBCI, (void *)
            c8_sp);
        }

        chartInstance->c8_DD[(c8_i17 + 127 * (c8_i22 - 1)) - 1] = 0.0;
      } else {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_lb_emlrtDCI, (void *)c8_sp);
        }

        c8_i16 = (int32_T)c8_c_i;
        if ((c8_i16 < 1) || (c8_i16 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i16, 1, 127, &c8_ub_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_mb_emlrtDCI, (void *)c8_sp);
        }

        c8_i21 = (int32_T)c8_b_j;
        if ((c8_i21 < 1) || (c8_i21 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i21, 1, 164, &c8_vb_emlrtBCI, (void *)
            c8_sp);
        }

        chartInstance->c8_DD[(c8_i16 + 127 * (c8_i21 - 1)) - 1] = 1.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 2, 0);
  c8_st.site = &c8_emlrtRSI;
  for (c8_k = 0; c8_k < 20828; c8_k++) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_q_x = chartInstance->c8_BB[(int32_T)c8_b_k - 1];
    c8_b = muDoubleScalarIsNaN(c8_q_x);
    if (c8_b) {
      c8_f_y = NULL;
      sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      c8_g_y = NULL;
      sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      sf_mex_call(&c8_st, &c8_c_emlrtMCI, "error", 0U, 2U, 14, c8_f_y, 14,
                  sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c8_st, NULL, "message", 1U, 1U, 14, c8_g_y)));
    }
  }

  c8_st.site = &c8_emlrtRSI;
  for (c8_c_k = 0; c8_c_k < 20828; c8_c_k++) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    c8_r_x = chartInstance->c8_DD[(int32_T)c8_d_k - 1];
    c8_b_b = muDoubleScalarIsNaN(c8_r_x);
    if (c8_b_b) {
      c8_h_y = NULL;
      sf_mex_assign(&c8_h_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      c8_i_y = NULL;
      sf_mex_assign(&c8_i_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      sf_mex_call(&c8_st, &c8_c_emlrtMCI, "error", 0U, 2U, 14, c8_h_y, 14,
                  sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c8_st, NULL, "message", 1U, 1U, 14, c8_i_y)));
    }
  }

  for (c8_i7 = 0; c8_i7 < 20828; c8_i7++) {
    c8_E[c8_i7] = (chartInstance->c8_BB[c8_i7] != 0.0);
  }

  for (c8_i9 = 0; c8_i9 < 20828; c8_i9++) {
    c8_bv[c8_i9] = (chartInstance->c8_DD[c8_i9] != 0.0);
  }

  for (c8_i11 = 0; c8_i11 < 20828; c8_i11++) {
    c8_E[c8_i11] = (c8_E[c8_i11] || c8_bv[c8_i11]);
  }

  for (c8_i12 = 0; c8_i12 < 20828; c8_i12++) {
    chartInstance->c8_DD[c8_i12] = (real_T)c8_E[c8_i12] - chartInstance->
      c8_DD[c8_i12];
  }

  for (c8_e_i = 0; c8_e_i < 127; c8_e_i++) {
    c8_c_i = 1.0 + (real_T)c8_e_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 4, 1);
    for (c8_d_j = 0; c8_d_j < 164; c8_d_j++) {
      c8_b_j = 1.0 + (real_T)c8_d_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 5, 1);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_pb_emlrtDCI, (void *)c8_sp);
      }

      c8_i20 = (int32_T)c8_c_i;
      if ((c8_i20 < 1) || (c8_i20 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i20, 1, 127, &c8_bc_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_pb_emlrtDCI, (void *)c8_sp);
      }

      c8_i23 = (int32_T)c8_b_j;
      if ((c8_i23 < 1) || (c8_i23 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i23, 1, 164, &c8_cc_emlrtBCI, (void *)
          c8_sp);
      }

      c8_d2 = chartInstance->c8_DD[(c8_i20 + 127 * (c8_i23 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 14U, 1, 2,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c8_covrtInstance, 14U, 1U, 2U, c8_d2,
                          0.0, -1, 0U, c8_d2 == 0.0))) {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_tb_emlrtDCI, (void *)c8_sp);
        }

        c8_i25 = (int32_T)c8_c_i;
        if ((c8_i25 < 1) || (c8_i25 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i25, 1, 127, &c8_jc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_tb_emlrtDCI, (void *)c8_sp);
        }

        c8_i27 = (int32_T)c8_b_j;
        if ((c8_i27 < 1) || (c8_i27 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i27, 1, 164, &c8_kc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_ub_emlrtDCI, (void *)c8_sp);
        }

        c8_i29 = (int32_T)c8_c_i;
        if ((c8_i29 < 1) || (c8_i29 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i29, 1, 127, &c8_lc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_ub_emlrtDCI, (void *)c8_sp);
        }

        c8_i31 = (int32_T)c8_b_j;
        if ((c8_i31 < 1) || (c8_i31 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i31, 1, 164, &c8_mc_emlrtBCI, (void *)
            c8_sp);
        }

        c8_OUT[(c8_i29 + 127 * (c8_i31 - 1)) - 1] = c8_b_B[(c8_i25 + 127 *
          (c8_i27 - 1)) - 1];
      } else {
        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_qb_emlrtDCI, (void *)c8_sp);
        }

        c8_i24 = (int32_T)c8_c_i;
        if ((c8_i24 < 1) || (c8_i24 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i24, 1, 127, &c8_dc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_qb_emlrtDCI, (void *)c8_sp);
        }

        c8_i26 = (int32_T)c8_b_j;
        if ((c8_i26 < 1) || (c8_i26 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i26, 1, 164, &c8_ec_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_rb_emlrtDCI, (void *)c8_sp);
        }

        c8_i28 = (int32_T)c8_c_i;
        if ((c8_i28 < 1) || (c8_i28 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i28, 1, 127, &c8_fc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_rb_emlrtDCI, (void *)c8_sp);
        }

        c8_i30 = (int32_T)c8_b_j;
        if ((c8_i30 < 1) || (c8_i30 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i30, 1, 164, &c8_gc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
          emlrtIntegerCheckR2012b(c8_c_i, &c8_sb_emlrtDCI, (void *)c8_sp);
        }

        c8_i32 = (int32_T)c8_c_i;
        if ((c8_i32 < 1) || (c8_i32 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i32, 1, 127, &c8_hc_emlrtBCI, (void *)
            c8_sp);
        }

        if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
          emlrtIntegerCheckR2012b(c8_b_j, &c8_sb_emlrtDCI, (void *)c8_sp);
        }

        c8_i33 = (int32_T)c8_b_j;
        if ((c8_i33 < 1) || (c8_i33 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c8_i33, 1, 164, &c8_ic_emlrtBCI, (void *)
            c8_sp);
        }

        c8_OUT[(c8_i32 + 127 * (c8_i33 - 1)) - 1] = c8_b_B[(c8_i24 + 127 *
          (c8_i26 - 1)) - 1] + 0.0 * c8_A[(c8_i28 + 127 * (c8_i30 - 1)) - 1];
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 5, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 1, 4, 0);
}

static real_T c8_metricsEdge_intensity(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_fused[83312])
{
  static char_T c8_b_cv[4] = { 's', 'q', 'r', 't' };

  emlrtStack c8_st;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  real_T c8_c_y[328];
  real_T c8_b_m;
  real_T c8_b_n;
  real_T c8_b_y;
  real_T c8_d_y;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  real_T c8_m_x;
  real_T c8_n_x;
  int32_T c8_b_col;
  int32_T c8_col;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_m;
  int32_T c8_n;
  boolean_T c8_b_p;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 2, 0);
  c8_st.site = &c8_b_emlrtRSI;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    chartInstance->c8_fused[c8_i] = c8_c_fused[c8_i];
  }

  c8_imfilter(chartInstance, &c8_st, chartInstance->c8_fused,
              chartInstance->c8_gx);
  c8_st.site = &c8_c_emlrtRSI;
  for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
    chartInstance->c8_b_fused[c8_i1] = c8_c_fused[c8_i1];
  }

  c8_b_imfilter(chartInstance, &c8_st, chartInstance->c8_b_fused,
                chartInstance->c8_gy);
  for (c8_m = 0; c8_m < 254; c8_m++) {
    c8_b_m = 1.0 + (real_T)c8_m;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 0, 1);
    for (c8_n = 0; c8_n < 328; c8_n++) {
      c8_b_n = 1.0 + (real_T)c8_n;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 1, 1);
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 2, 1);
      c8_st.site = &c8_d_emlrtRSI;
      if (c8_b_m != (real_T)(int32_T)muDoubleScalarFloor(c8_b_m)) {
        emlrtIntegerCheckR2012b(c8_b_m, &c8_xb_emlrtDCI, &c8_st);
      }

      c8_i4 = (int32_T)c8_b_m;
      if ((c8_i4 < 1) || (c8_i4 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i4, 1, 254, &c8_pc_emlrtBCI, &c8_st);
      }

      if (c8_b_n != (real_T)(int32_T)muDoubleScalarFloor(c8_b_n)) {
        emlrtIntegerCheckR2012b(c8_b_n, &c8_xb_emlrtDCI, &c8_st);
      }

      c8_i5 = (int32_T)c8_b_n;
      if ((c8_i5 < 1) || (c8_i5 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i5, 1, 328, &c8_qc_emlrtBCI, &c8_st);
      }

      if (c8_b_m != (real_T)(int32_T)muDoubleScalarFloor(c8_b_m)) {
        emlrtIntegerCheckR2012b(c8_b_m, &c8_yb_emlrtDCI, &c8_st);
      }

      c8_i6 = (int32_T)c8_b_m;
      if ((c8_i6 < 1) || (c8_i6 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 254, &c8_rc_emlrtBCI, &c8_st);
      }

      if (c8_b_n != (real_T)(int32_T)muDoubleScalarFloor(c8_b_n)) {
        emlrtIntegerCheckR2012b(c8_b_n, &c8_yb_emlrtDCI, &c8_st);
      }

      c8_i7 = (int32_T)c8_b_n;
      if ((c8_i7 < 1) || (c8_i7 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i7, 1, 328, &c8_sc_emlrtBCI, &c8_st);
      }

      if (c8_b_m != (real_T)(int32_T)muDoubleScalarFloor(c8_b_m)) {
        emlrtIntegerCheckR2012b(c8_b_m, &c8_ac_emlrtDCI, &c8_st);
      }

      c8_i8 = (int32_T)c8_b_m;
      if ((c8_i8 < 1) || (c8_i8 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i8, 1, 254, &c8_tc_emlrtBCI, &c8_st);
      }

      if (c8_b_n != (real_T)(int32_T)muDoubleScalarFloor(c8_b_n)) {
        emlrtIntegerCheckR2012b(c8_b_n, &c8_ac_emlrtDCI, &c8_st);
      }

      c8_i9 = (int32_T)c8_b_n;
      if ((c8_i9 < 1) || (c8_i9 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i9, 1, 328, &c8_uc_emlrtBCI, &c8_st);
      }

      if (c8_b_m != (real_T)(int32_T)muDoubleScalarFloor(c8_b_m)) {
        emlrtIntegerCheckR2012b(c8_b_m, &c8_bc_emlrtDCI, &c8_st);
      }

      c8_i10 = (int32_T)c8_b_m;
      if ((c8_i10 < 1) || (c8_i10 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i10, 1, 254, &c8_vc_emlrtBCI, &c8_st);
      }

      if (c8_b_n != (real_T)(int32_T)muDoubleScalarFloor(c8_b_n)) {
        emlrtIntegerCheckR2012b(c8_b_n, &c8_bc_emlrtDCI, &c8_st);
      }

      c8_i11 = (int32_T)c8_b_n;
      if ((c8_i11 < 1) || (c8_i11 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i11, 1, 328, &c8_wc_emlrtBCI, &c8_st);
      }

      c8_l_x = chartInstance->c8_gx[(c8_i4 + 254 * (c8_i5 - 1)) - 1] *
        chartInstance->c8_gx[(c8_i6 + 254 * (c8_i7 - 1)) - 1] +
        chartInstance->c8_gy[(c8_i8 + 254 * (c8_i9 - 1)) - 1] *
        chartInstance->c8_gy[(c8_i10 + 254 * (c8_i11 - 1)) - 1];
      c8_m_x = c8_l_x;
      c8_n_x = c8_m_x;
      if (c8_n_x < 0.0) {
        c8_p = true;
      } else {
        c8_p = false;
      }

      c8_b_p = c8_p;
      if (c8_b_p) {
        c8_e_y = NULL;
        sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c8_f_y = NULL;
        sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c8_g_y = NULL;
        sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1,
          4), false);
        sf_mex_call(&c8_st, &c8_f_emlrtMCI, "error", 0U, 2U, 14, c8_e_y, 14,
                    sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_st, NULL, "message", 1U, 2U, 14, c8_f_y, 14, c8_g_y)));
      }

      c8_m_x = muDoubleScalarSqrt(c8_m_x);
      if (c8_b_m != (real_T)(int32_T)muDoubleScalarFloor(c8_b_m)) {
        emlrtIntegerCheckR2012b(c8_b_m, &c8_vb_emlrtDCI, (void *)c8_sp);
      }

      c8_i12 = (int32_T)c8_b_m;
      if ((c8_i12 < 1) || (c8_i12 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c8_i12, 1, 254, &c8_nc_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_n != (real_T)(int32_T)muDoubleScalarFloor(c8_b_n)) {
        emlrtIntegerCheckR2012b(c8_b_n, &c8_wb_emlrtDCI, (void *)c8_sp);
      }

      c8_i13 = (int32_T)c8_b_n;
      if ((c8_i13 < 1) || (c8_i13 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_i13, 1, 328, &c8_oc_emlrtBCI, (void *)
          c8_sp);
      }

      chartInstance->c8_b_g[(c8_i12 + 254 * (c8_i13 - 1)) - 1] = c8_m_x;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 2, 0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 2, 0, 0);
  for (c8_col = 0; c8_col < 328; c8_col++) {
    c8_b_col = c8_col;
    for (c8_i3 = 0; c8_i3 < 83312; c8_i3++) {
      chartInstance->c8_g[c8_i3] = chartInstance->c8_b_g[c8_i3];
    }

    c8_c_y[c8_b_col] = c8_d_sumColumnB(chartInstance, chartInstance->c8_g,
      c8_b_col + 1);
  }

  for (c8_i2 = 0; c8_i2 < 328; c8_i2++) {
    c8_c_y[c8_i2] /= 254.0;
  }

  c8_b_y = c8_e_sumColumnB(chartInstance, c8_c_y);
  c8_d_y = c8_b_y / 328.0;
  c8_g_x = c8_d_y;
  c8_h_x = c8_g_x;
  c8_i_x = c8_h_x;
  c8_j_x = c8_i_x;
  c8_k_x = c8_j_x;
  return c8_b_sumColumnB(chartInstance, c8_k_x);
}

static void c8_Inverse_Fenk(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_C1[20828], real_T c8_b_C2[20828], real_T c8_b_C3
  [20828], real_T c8_b_C4[20828], real_T c8_b_C22[20828], real_T c8_b_C33[20828],
  real_T c8_b_C44[20828], real_T c8_F[83312])
{
  real_T c8_T[4];
  real_T c8_b_j;
  real_T c8_c_i;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_j;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 14U, 5, 0);
  for (c8_i = 0; c8_i < 20828; c8_i++) {
    chartInstance->c8_B[c8_i] = (c8_C1[c8_i] + c8_b_C2[c8_i]) - c8_b_C22[c8_i];
  }

  for (c8_i1 = 0; c8_i1 < 20828; c8_i1++) {
    chartInstance->c8_C[c8_i1] = (c8_C1[c8_i1] + c8_b_C3[c8_i1]) -
      c8_b_C33[c8_i1];
  }

  for (c8_i2 = 0; c8_i2 < 20828; c8_i2++) {
    chartInstance->c8_D[c8_i2] = (c8_C1[c8_i2] + c8_b_C4[c8_i2]) -
      c8_b_C44[c8_i2];
  }

  for (c8_i3 = 0; c8_i3 < 83312; c8_i3++) {
    c8_F[c8_i3] = 0.0;
  }

  for (c8_b_i = 0; c8_b_i < 127; c8_b_i++) {
    c8_c_i = 1.0 + (real_T)c8_b_i;
    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 5, 0, 1);
    for (c8_j = 0; c8_j < 164; c8_j++) {
      c8_b_j = 1.0 + (real_T)c8_j;
      covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 5, 1, 1);
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_cc_emlrtDCI, (void *)c8_sp);
      }

      c8_i4 = (int32_T)c8_c_i;
      if ((c8_i4 < 1) || (c8_i4 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i4, 1, 127, &c8_xc_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_cc_emlrtDCI, (void *)c8_sp);
      }

      c8_i5 = (int32_T)c8_b_j;
      if ((c8_i5 < 1) || (c8_i5 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i5, 1, 164, &c8_yc_emlrtBCI, (void *)
          c8_sp);
      }

      c8_T[0] = c8_C1[(c8_i4 + 127 * (c8_i5 - 1)) - 1];
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_dc_emlrtDCI, (void *)c8_sp);
      }

      c8_i6 = (int32_T)c8_c_i;
      if ((c8_i6 < 1) || (c8_i6 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 127, &c8_ad_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_dc_emlrtDCI, (void *)c8_sp);
      }

      c8_i7 = (int32_T)c8_b_j;
      if ((c8_i7 < 1) || (c8_i7 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i7, 1, 164, &c8_bd_emlrtBCI, (void *)
          c8_sp);
      }

      c8_T[2] = chartInstance->c8_B[(c8_i6 + 127 * (c8_i7 - 1)) - 1];
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_ec_emlrtDCI, (void *)c8_sp);
      }

      c8_i8 = (int32_T)c8_c_i;
      if ((c8_i8 < 1) || (c8_i8 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i8, 1, 127, &c8_cd_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_ec_emlrtDCI, (void *)c8_sp);
      }

      c8_i9 = (int32_T)c8_b_j;
      if ((c8_i9 < 1) || (c8_i9 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i9, 1, 164, &c8_dd_emlrtBCI, (void *)
          c8_sp);
      }

      c8_T[1] = chartInstance->c8_C[(c8_i8 + 127 * (c8_i9 - 1)) - 1];
      if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
        emlrtIntegerCheckR2012b(c8_c_i, &c8_fc_emlrtDCI, (void *)c8_sp);
      }

      c8_i10 = (int32_T)c8_c_i;
      if ((c8_i10 < 1) || (c8_i10 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c8_i10, 1, 127, &c8_ed_emlrtBCI, (void *)
          c8_sp);
      }

      if (c8_b_j != (real_T)(int32_T)muDoubleScalarFloor(c8_b_j)) {
        emlrtIntegerCheckR2012b(c8_b_j, &c8_fc_emlrtDCI, (void *)c8_sp);
      }

      c8_i11 = (int32_T)c8_b_j;
      if ((c8_i11 < 1) || (c8_i11 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c8_i11, 1, 164, &c8_fd_emlrtBCI, (void *)
          c8_sp);
      }

      c8_T[3] = chartInstance->c8_D[(c8_i10 + 127 * (c8_i11 - 1)) - 1];
      c8_d = 2.0 * c8_c_i;
      c8_d1 = 2.0 * c8_b_j;
      for (c8_i12 = 0; c8_i12 < 2; c8_i12++) {
        for (c8_i13 = 0; c8_i13 < 2; c8_i13++) {
          c8_d2 = c8_d + (real_T)(int32_T)(-1.0 + (real_T)c8_i13);
          if (c8_d2 != (real_T)(int32_T)muDoubleScalarFloor(c8_d2)) {
            emlrtIntegerCheckR2012b(c8_d2, &c8_gc_emlrtDCI, (void *)c8_sp);
          }

          c8_i14 = (int32_T)c8_d2;
          if ((c8_i14 < 1) || (c8_i14 > 254)) {
            emlrtDynamicBoundsCheckR2012b(c8_i14, 1, 254, &c8_gd_emlrtBCI, (void
              *)c8_sp);
          }

          c8_d3 = c8_d1 + (real_T)(int32_T)(-1.0 + (real_T)c8_i12);
          if (c8_d3 != (real_T)(int32_T)muDoubleScalarFloor(c8_d3)) {
            emlrtIntegerCheckR2012b(c8_d3, &c8_gc_emlrtDCI, (void *)c8_sp);
          }

          c8_i15 = (int32_T)c8_d3;
          if ((c8_i15 < 1) || (c8_i15 > 328)) {
            emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 328, &c8_hd_emlrtBCI, (void
              *)c8_sp);
          }

          c8_F[(c8_i14 + 254 * (c8_i15 - 1)) - 1] = c8_T[c8_i13 + (c8_i12 << 1)];
        }
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 5, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c8_covrtInstance, 14U, 5, 0, 0);
}

const mxArray *sf_c8_untitled1_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  const char_T *c8_data[7] = {
    "789ced99cf73d24014c737151c67d4ca451d2ff6e2a1e3816951a0f5167ea440056913042ab58d64811412687e50d08bc7deeadd83fe075efd2bbc39a3fe011e"
    "f4d071bc79702409a19bd008239965647833ccf2f66df6b3fbc87ef3980022992600008bc0b0e3db467bb5f7d1fa7dfdfe0560357b9ce8b717119f40c67b8167",
    "701d3afea4df969ba2023b8ae188ac000757724d8117595161ba2d082428371b6dc8e9910adf800c2f401a75329a27504868e06821ed7bb406cb755a15805493"
    "cf56d8409d413ef691fd0264bf9e11f9b09b3d1fda381628aef108dbb8619e47e75150acbbc9f33af2bc3a4fe545650de17526e4dd74e419f934e34fe2bbf107",
    "25bac61759b114f0af96b48dfb8591fbbe36e63ad096b08cbf049ef63aee2c7fd1bb71f1be9f7e3dc1c9336d5abc49efa31b0e3c9f2d5e219548b890d94ea436"
    "59e19112aa1d6eafa8d1b375641dd681cef9b77500c447fb70cdbfef30bf1bfa869a5b7a73c191674428c8baca737a9ef9fa11aea93e6b40fcf7e539fac6f6e4",
    "0ddb79fc18c6ab6f974f173fe1e49936ebfab6968a84f2c14241e67314f5389be33744598acdf5cd6ee3eadba4bfdbf5113c332e4045e2cb729cabc2bd5e8905"
    "459957ba607aba773c216fd991678d0fe9deb989f00bb8ceeddb205e1dfcc6fc9cd779c0fdf34456eb47d47d95ccad1e1553693529672bed3098eba0dd70d579",
    "a3f4875265b8c74d4fef5e4ec8bbe5c8b3c687eb3c7de35aa9a71bae73f906b3ce85defde670f24cfb5f756edc7aaf5bd9a9165b507a4806d26c5b55ebf4bd08"
    "dc98eb9cdd70e9dc02e25b7946848eb9cbc3fd7f76dce7ef90ced1315de3709dc7a51f9fb1eadb8b5707799c3cd3665ddfd6d79964486478325dde4a36a2caca",
    "96ccb712737db3dbb8fad6fa479e39f795113c339e14db50ea55366ebf9fc05dd72d39f2acf121bd431380f13dc55dccef29de7ff8f51a27cfb459d7bd40307f"
    "409619e9f0f966612795a73b99048cce405df707473a04ff", "" };

  c8_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c8_data[0], 7840U, &c8_nameCaptureInfo);
  return c8_nameCaptureInfo;
}

static real_T c8_mod(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x)
{
  real_T c8_c_a;
  real_T c8_h_x;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_r;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_rEQ0;
  (void)chartInstance;
  c8_c_a = c8_g_x;
  c8_h_x = c8_c_a;
  c8_i_x = c8_h_x;
  c8_j_x = c8_i_x;
  c8_b = muDoubleScalarIsNaN(c8_j_x);
  if (c8_b) {
    c8_r = rtNaN;
  } else {
    c8_k_x = c8_i_x;
    c8_b_b = muDoubleScalarIsInf(c8_k_x);
    if (c8_b_b) {
      c8_r = rtNaN;
    } else {
      c8_r = muDoubleScalarRem(c8_i_x, 2.0);
      c8_rEQ0 = (c8_r == 0.0);
      if (c8_rEQ0) {
        c8_r = 0.0;
      }
    }
  }

  return c8_r;
}

static void c8_imresize(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, uint8_T c8_b_Ain[83312], uint8_T c8_Bout[83312])
{
  emlrtStack c8_st;
  real_T c8_b_weights_data[1968];
  real_T c8_weights_data[1524];
  int32_T c8_b_indices_data[1968];
  int32_T c8_indices_data[1524];
  int32_T c8_b_indices_size[2];
  int32_T c8_b_weights_size[2];
  int32_T c8_indices_size[2];
  int32_T c8_weights_size[2];
  int32_T c8_i;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_qb_emlrtRSI;
  c8_contributions(chartInstance, &c8_st, c8_weights_data, c8_weights_size,
                   c8_indices_data, c8_indices_size);
  c8_st.site = &c8_rb_emlrtRSI;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    chartInstance->c8_Ain[c8_i] = c8_b_Ain[c8_i];
  }

  c8_resizeAlongDim(chartInstance, &c8_st, chartInstance->c8_Ain,
                    c8_weights_data, c8_weights_size, c8_indices_data,
                    chartInstance->c8_APartialResize);
  c8_st.site = &c8_sb_emlrtRSI;
  c8_b_contributions(chartInstance, &c8_st, c8_b_weights_data, c8_b_weights_size,
                     c8_b_indices_data, c8_b_indices_size);
  c8_st.site = &c8_tb_emlrtRSI;
  c8_b_resizeAlongDim(chartInstance, &c8_st, chartInstance->c8_APartialResize,
                      c8_b_weights_data, c8_b_weights_size, c8_b_indices_data,
                      c8_Bout);
}

static void c8_contributions(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_weights_data[], int32_T c8_weights_size[2],
  int32_T c8_indices_data[], int32_T c8_indices_size[2])
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  real_T c8_absx[1524];
  real_T c8_absx2[1524];
  real_T c8_absx3[1524];
  real_T c8_e_y[1524];
  real_T c8_f[1524];
  real_T c8_f_y[1524];
  real_T c8_g_y[254];
  real_T c8_b_y;
  real_T c8_c_a;
  real_T c8_c_y;
  real_T c8_d_a;
  real_T c8_d_i;
  real_T c8_d_y;
  real_T c8_f_a;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_a;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  real_T c8_m_x;
  real_T c8_n_k;
  real_T c8_oldIdx;
  int32_T c8_indices[1524];
  int32_T c8_aux[508];
  int32_T c8_b_tmp_data[6];
  int32_T c8_tmp_data[6];
  int32_T c8_b_tmp_size[2];
  int32_T c8_tmp_size[2];
  int32_T c8_b;
  int32_T c8_b_c;
  int32_T c8_b_i;
  int32_T c8_b_i1;
  int32_T c8_b_i2;
  int32_T c8_b_ia;
  int32_T c8_b_ib;
  int32_T c8_b_ic;
  int32_T c8_b_ix;
  int32_T c8_b_k;
  int32_T c8_b_loop_ub;
  int32_T c8_b_partialTrueCount;
  int32_T c8_b_trueCount;
  int32_T c8_b_varargin_2;
  int32_T c8_b_varargin_3;
  int32_T c8_b_varargin_5;
  int32_T c8_b_varargin_6;
  int32_T c8_b_xj;
  int32_T c8_c;
  int32_T c8_c_i;
  int32_T c8_c_ia;
  int32_T c8_c_ib;
  int32_T c8_c_ic;
  int32_T c8_c_k;
  int32_T c8_c_varargin_1;
  int32_T c8_c_varargin_2;
  int32_T c8_c_varargin_3;
  int32_T c8_c_xj;
  int32_T c8_d_b;
  int32_T c8_d_ia;
  int32_T c8_d_ib;
  int32_T c8_d_ic;
  int32_T c8_d_k;
  int32_T c8_d_varargin_1;
  int32_T c8_d_varargin_2;
  int32_T c8_d_varargin_3;
  int32_T c8_e_a;
  int32_T c8_e_b;
  int32_T c8_e_i;
  int32_T c8_e_ic;
  int32_T c8_e_k;
  int32_T c8_e_varargin_1;
  int32_T c8_e_varargin_3;
  int32_T c8_f_i;
  int32_T c8_f_ic;
  int32_T c8_f_k;
  int32_T c8_f_varargin_1;
  int32_T c8_g_a;
  int32_T c8_g_i;
  int32_T c8_g_k;
  int32_T c8_g_varargin_1;
  int32_T c8_h_a;
  int32_T c8_h_i;
  int32_T c8_h_k;
  int32_T c8_h_varargin_1;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_i;
  int32_T c8_i_k;
  int32_T c8_ia;
  int32_T c8_ib;
  int32_T c8_ic;
  int32_T c8_ix;
  int32_T c8_iy;
  int32_T c8_j_a;
  int32_T c8_j_k;
  int32_T c8_k;
  int32_T c8_k_a;
  int32_T c8_k_k;
  int32_T c8_l_a;
  int32_T c8_l_k;
  int32_T c8_loop_ub;
  int32_T c8_m_a;
  int32_T c8_m_k;
  int32_T c8_partialTrueCount;
  int32_T c8_trueCount;
  int32_T c8_varargin_2;
  int32_T c8_varargin_3;
  int32_T c8_varargin_4;
  int32_T c8_varargin_5;
  int32_T c8_varargin_6;
  int32_T c8_xj;
  int32_T c8_xoffset;
  boolean_T c8_bv[1524];
  boolean_T c8_bv1[1524];
  boolean_T c8_copyCols[6];
  boolean_T c8_b_b;
  boolean_T c8_c_b;
  boolean_T c8_exitg1;
  boolean_T c8_f_b;
  boolean_T c8_g_b;
  boolean_T c8_overflow;
  boolean_T c8_rEQ0;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  for (c8_k = 0; c8_k < 6; c8_k++) {
    c8_ib = c8_k;
    c8_ic = c8_k;
    c8_c_varargin_1 = c8_ic + 1;
    c8_varargin_3 = c8_ib + 1;
    for (c8_d_k = 0; c8_d_k < 254; c8_d_k++) {
      c8_ia = c8_d_k;
      c8_c_ic = c8_d_k;
      c8_e_varargin_1 = c8_c_ic;
      c8_varargin_2 = c8_c_varargin_1 - 1;
      c8_c_varargin_3 = c8_ia;
      c8_varargin_6 = c8_varargin_3 - 1;
      c8_e_a = -1 + c8_c_varargin_3;
      c8_b = c8_varargin_6;
      c8_c = c8_e_a + c8_b;
      c8_indices[c8_e_varargin_1 + 254 * c8_varargin_2] = c8_c;
    }
  }

  for (c8_i = 0; c8_i < 1524; c8_i++) {
    c8_absx2[c8_i] = (real_T)c8_indices[c8_i];
  }

  for (c8_b_k = 0; c8_b_k < 6; c8_b_k++) {
    c8_b_ib = c8_b_k;
    c8_b_ic = c8_b_k;
    c8_d_varargin_1 = c8_b_ic + 1;
    c8_b_varargin_3 = c8_b_ib + 1;
    for (c8_i_k = 0; c8_i_k < 254; c8_i_k++) {
      c8_b_ia = c8_i_k;
      c8_c_ib = c8_i_k;
      c8_d_ic = c8_i_k;
      c8_f_varargin_1 = c8_d_ic;
      c8_b_varargin_2 = c8_d_varargin_1 - 1;
      c8_d_varargin_3 = c8_b_ia;
      c8_varargin_5 = c8_c_ib;
      c8_b_varargin_6 = c8_b_varargin_3 - 1;
      c8_absx3[c8_f_varargin_1 + 254 * c8_b_varargin_2] = (1.0 + (real_T)
        c8_d_varargin_3) - c8_absx2[c8_varargin_5 + 254 * c8_b_varargin_6];
    }
  }

  for (c8_c_k = 0; c8_c_k < 1524; c8_c_k++) {
    c8_f_k = c8_c_k;
    c8_g_x = c8_absx3[c8_f_k];
    c8_b_y = muDoubleScalarAbs(c8_g_x);
    c8_absx[c8_f_k] = c8_b_y;
  }

  for (c8_e_k = 0; c8_e_k < 1524; c8_e_k++) {
    c8_h_k = c8_e_k;
    c8_c_a = c8_absx[c8_h_k];
    c8_c_y = c8_c_a * c8_c_a;
    c8_absx2[c8_h_k] = c8_c_y;
  }

  for (c8_g_k = 0; c8_g_k < 1524; c8_g_k++) {
    c8_j_k = c8_g_k;
    c8_d_a = c8_absx[c8_j_k];
    c8_d_y = muDoubleScalarPower(c8_d_a, 3.0);
    c8_absx3[c8_j_k] = c8_d_y;
  }

  for (c8_i1 = 0; c8_i1 < 1524; c8_i1++) {
    c8_bv[c8_i1] = (1.0 < c8_absx[c8_i1]);
  }

  for (c8_i2 = 0; c8_i2 < 1524; c8_i2++) {
    c8_bv1[c8_i2] = (c8_absx[c8_i2] <= 2.0);
  }

  for (c8_i3 = 0; c8_i3 < 1524; c8_i3++) {
    c8_f[c8_i3] = 1.5 * c8_absx3[c8_i3];
  }

  for (c8_i4 = 0; c8_i4 < 1524; c8_i4++) {
    c8_e_y[c8_i4] = 2.5 * c8_absx2[c8_i4];
  }

  for (c8_i5 = 0; c8_i5 < 1524; c8_i5++) {
    c8_absx3[c8_i5] *= -0.5;
  }

  for (c8_i6 = 0; c8_i6 < 1524; c8_i6++) {
    c8_absx2[c8_i6] *= 2.5;
  }

  for (c8_i7 = 0; c8_i7 < 1524; c8_i7++) {
    c8_f_y[c8_i7] = 4.0 * c8_absx[c8_i7];
  }

  for (c8_i8 = 0; c8_i8 < 1524; c8_i8++) {
    c8_f[c8_i8] = ((c8_f[c8_i8] - c8_e_y[c8_i8]) + 1.0) * (real_T)(c8_absx[c8_i8]
      <= 1.0) + (((c8_absx3[c8_i8] + c8_absx2[c8_i8]) - c8_f_y[c8_i8]) + 2.0) *
      (real_T)(c8_bv[c8_i8] && c8_bv1[c8_i8]);
  }

  for (c8_xj = 0; c8_xj < 254; c8_xj++) {
    c8_b_xj = c8_xj;
    c8_g_y[c8_b_xj] = c8_f[c8_b_xj];
  }

  for (c8_k_k = 0; c8_k_k < 5; c8_k_k++) {
    c8_xoffset = (c8_k_k + 1) * 254;
    for (c8_c_xj = 0; c8_c_xj < 254; c8_c_xj++) {
      c8_b_xj = c8_c_xj;
      c8_ix = c8_xoffset + c8_b_xj;
      c8_g_y[c8_b_xj] += c8_f[c8_ix];
    }
  }

  for (c8_i9 = 0; c8_i9 < 1524; c8_i9++) {
    c8_absx2[c8_i9] = c8_f[c8_i9];
  }

  for (c8_l_k = 0; c8_l_k < 6; c8_l_k++) {
    c8_c_ia = c8_l_k;
    c8_e_ic = c8_l_k;
    c8_g_varargin_1 = c8_e_ic + 1;
    c8_c_varargin_2 = c8_c_ia + 1;
    for (c8_m_k = 0; c8_m_k < 254; c8_m_k++) {
      c8_d_ia = c8_m_k;
      c8_d_ib = c8_m_k;
      c8_f_ic = c8_m_k;
      c8_h_varargin_1 = c8_f_ic;
      c8_d_varargin_2 = c8_g_varargin_1 - 1;
      c8_e_varargin_3 = c8_d_ia;
      c8_varargin_4 = c8_c_varargin_2 - 1;
      c8_b_varargin_5 = c8_d_ib;
      c8_f[c8_h_varargin_1 + 254 * c8_d_varargin_2] = c8_absx2[c8_e_varargin_3 +
        254 * c8_varargin_4] / c8_g_y[c8_b_varargin_5];
    }
  }

  c8_aux[0] = 1;
  c8_aux[254] = 254;
  for (c8_b_i = 0; c8_b_i < 253; c8_b_i++) {
    c8_aux[c8_b_i + 1] = c8_aux[c8_b_i] + 1;
    c8_aux[c8_b_i + 255] = c8_aux[c8_b_i + 254] - 1;
  }

  for (c8_c_i = 0; c8_c_i < 1524; c8_c_i++) {
    c8_d_i = (real_T)c8_c_i + 1.0;
    c8_oldIdx = (real_T)c8_indices[(int32_T)c8_d_i - 1];
    c8_h_x = c8_oldIdx - 1.0;
    c8_f_a = c8_h_x;
    c8_i_x = c8_f_a;
    c8_j_x = c8_i_x;
    c8_k_x = c8_j_x;
    c8_b_b = muDoubleScalarIsNaN(c8_k_x);
    if (c8_b_b) {
      c8_n_k = rtNaN;
    } else {
      c8_l_x = c8_j_x;
      c8_c_b = muDoubleScalarIsInf(c8_l_x);
      if (c8_c_b) {
        c8_n_k = rtNaN;
      } else if (c8_j_x == 0.0) {
        c8_n_k = 0.0;
      } else {
        c8_n_k = muDoubleScalarRem(c8_j_x, 508.0);
        c8_rEQ0 = (c8_n_k == 0.0);
        if (c8_rEQ0) {
          c8_n_k = 0.0;
        } else if (c8_j_x < 0.0) {
          c8_n_k += 508.0;
        }
      }
    }

    c8_i_a = c8_n_k;
    c8_b_c = (int32_T)c8_i_a;
    c8_indices[(int32_T)c8_d_i - 1] = c8_aux[c8_b_c];
  }

  c8_st.site = &c8_ub_emlrtRSI;
  c8_b_st.site = &c8_vb_emlrtRSI;
  for (c8_i10 = 0; c8_i10 < 6; c8_i10++) {
    c8_copyCols[c8_i10] = false;
  }

  c8_b_i2 = 0;
  c8_iy = -1;
  for (c8_e_i = 0; c8_e_i < 6; c8_e_i++) {
    c8_b_i1 = c8_b_i2;
    c8_g_a = c8_b_i2 + 253;
    c8_b_i2 = c8_g_a;
    c8_h_a = c8_b_i1 + 1;
    c8_b_i1 = c8_h_a;
    c8_j_a = c8_b_i2 + 1;
    c8_b_i2 = c8_j_a;
    c8_k_a = c8_iy + 1;
    c8_iy = c8_k_a;
    c8_c_st.site = &c8_wb_emlrtRSI;
    c8_l_a = c8_b_i1;
    c8_d_b = c8_b_i2;
    c8_m_a = c8_l_a;
    c8_e_b = c8_d_b;
    if (c8_m_a > c8_e_b) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_e_b > 2147483646);
    }

    if (c8_overflow) {
      c8_d_st.site = &c8_xb_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_d_st);
    }

    c8_b_ix = c8_b_i1 - 1;
    c8_exitg1 = false;
    while ((!c8_exitg1) && (c8_b_ix + 1 <= c8_b_i2)) {
      if (c8_f[c8_b_ix] == 0.0) {
        c8_f_b = true;
      } else {
        c8_m_x = c8_f[c8_b_ix];
        c8_g_b = muDoubleScalarIsNaN(c8_m_x);
        if (c8_g_b) {
          c8_f_b = true;
        } else {
          c8_f_b = false;
        }
      }

      if (!c8_f_b) {
        c8_copyCols[c8_iy] = true;
        c8_exitg1 = true;
      } else {
        c8_b_ix++;
      }
    }
  }

  c8_trueCount = 0;
  for (c8_f_i = 0; c8_f_i < 6; c8_f_i++) {
    if (c8_copyCols[c8_f_i]) {
      c8_trueCount++;
    }
  }

  c8_tmp_size[1] = c8_trueCount;
  c8_partialTrueCount = 0;
  for (c8_g_i = 0; c8_g_i < 6; c8_g_i++) {
    if (c8_copyCols[c8_g_i]) {
      c8_tmp_data[c8_partialTrueCount] = c8_g_i + 1;
      c8_partialTrueCount++;
    }
  }

  c8_weights_size[0] = c8_tmp_size[1];
  c8_weights_size[1] = 254;
  for (c8_i11 = 0; c8_i11 < 254; c8_i11++) {
    c8_loop_ub = c8_tmp_size[1] - 1;
    for (c8_i12 = 0; c8_i12 <= c8_loop_ub; c8_i12++) {
      c8_weights_data[c8_i12 + c8_weights_size[0] * c8_i11] = c8_f[c8_i11 + 254 *
        (c8_tmp_data[c8_i12] - 1)];
    }
  }

  c8_b_trueCount = 0;
  for (c8_h_i = 0; c8_h_i < 6; c8_h_i++) {
    if (c8_copyCols[c8_h_i]) {
      c8_b_trueCount++;
    }
  }

  c8_b_tmp_size[1] = c8_b_trueCount;
  c8_b_partialTrueCount = 0;
  for (c8_i_i = 0; c8_i_i < 6; c8_i_i++) {
    if (c8_copyCols[c8_i_i]) {
      c8_b_tmp_data[c8_b_partialTrueCount] = c8_i_i + 1;
      c8_b_partialTrueCount++;
    }
  }

  c8_indices_size[0] = c8_b_tmp_size[1];
  c8_indices_size[1] = 254;
  for (c8_i13 = 0; c8_i13 < 254; c8_i13++) {
    c8_b_loop_ub = c8_b_tmp_size[1] - 1;
    for (c8_i14 = 0; c8_i14 <= c8_b_loop_ub; c8_i14++) {
      c8_indices_data[c8_i14 + c8_indices_size[0] * c8_i13] = c8_indices[c8_i13
        + 254 * (c8_b_tmp_data[c8_i14] - 1)];
    }
  }
}

static void c8_check_forloop_overflow_error(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp)
{
  static char_T c8_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c8_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  (void)chartInstance;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c8_sp, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14, sf_mex_call
              (c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c8_sp, NULL,
    "message", 1U, 2U, 14, c8_c_y, 14, c8_d_y)));
}

static void c8_resizeAlongDim(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, uint8_T c8_in_[83312], real_T c8_weights_data[], int32_T
  c8_weights_size[2], int32_T c8_indices_data[], uint8_T c8_out_[83312])
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_siz[2];
  real_T c8_b_inCInd;
  real_T c8_b_outRInd;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_ndx;
  real_T c8_sumVal1;
  real_T c8_varargin_2;
  int32_T c8_b_siz[2];
  int32_T c8_c_a;
  int32_T c8_c_inCInd;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_inCInd;
  int32_T c8_k;
  int32_T c8_linearInds;
  int32_T c8_outRInd;
  uint8_T c8_inCol[254];
  uint8_T c8_u;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_yb_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  for (c8_inCInd = 0; c8_inCInd < 328; c8_inCInd++) {
    c8_b_inCInd = (real_T)c8_inCInd + 1.0;
    c8_c_inCInd = (int32_T)c8_b_inCInd - 1;
    for (c8_i = 0; c8_i < 254; c8_i++) {
      c8_inCol[c8_i] = c8_in_[c8_i + 254 * c8_c_inCInd];
    }

    for (c8_outRInd = 0; c8_outRInd < 254; c8_outRInd++) {
      c8_b_outRInd = (real_T)c8_outRInd + 1.0;
      c8_sumVal1 = 0.0;
      c8_b_st.site = &c8_ac_emlrtRSI;
      for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
        c8_siz[c8_i1] = (real_T)c8_weights_size[c8_i1];
      }

      c8_varargin_2 = c8_b_outRInd;
      for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
        c8_b_siz[c8_i2] = (int32_T)c8_siz[c8_i2];
      }

      c8_c_st.site = &c8_bc_emlrtRSI;
      c8_ndx = (real_T)c8_eml_sub2ind(chartInstance, &c8_c_st, c8_b_siz,
        c8_varargin_2);
      c8_linearInds = (int32_T)c8_ndx - 1;
      c8_d = (real_T)c8_weights_size[0];
      c8_i3 = (int32_T)c8_d - 1;
      for (c8_k = 0; c8_k <= c8_i3; c8_k++) {
        c8_sumVal1 += c8_weights_data[c8_linearInds] * (real_T)
          c8_inCol[c8_indices_data[c8_linearInds] - 1];
        c8_c_a = c8_linearInds + 1;
        c8_linearInds = c8_c_a;
      }

      c8_d1 = muDoubleScalarRound(c8_sumVal1);
      if (c8_d1 < 256.0) {
        if (c8_d1 >= 0.0) {
          c8_u = (uint8_T)c8_d1;
        } else {
          c8_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c8_d1 >= 256.0) {
        c8_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c8_u = 0U;
      }

      c8_out_[((int32_T)c8_b_outRInd + 254 * ((int32_T)c8_b_inCInd - 1)) - 1] =
        c8_u;
    }
  }
}

static int32_T c8_eml_sub2ind(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, int32_T c8_siz[2], real_T c8_varargin_2)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  real_T c8_g_x;
  int32_T c8_b_hi;
  int32_T c8_c_hi;
  int32_T c8_hi;
  int32_T c8_psiz;
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b_p;
  boolean_T c8_p;
  (void)chartInstance;
  c8_hi = c8_siz[0];
  c8_b_hi = c8_hi;
  if (1.0 <= (real_T)c8_b_hi) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_p = false;
  } else {
    c8_p = true;
  }

  if (!c8_p) {
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c8_sp, &c8_b_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_c_y)));
  }

  c8_hi = c8_siz[1];
  c8_g_x = c8_varargin_2;
  c8_c_hi = c8_hi;
  if (c8_g_x <= (real_T)c8_c_hi) {
    c8_b1 = true;
  } else {
    c8_b1 = false;
  }

  if (!c8_b1) {
    c8_b_p = false;
  } else {
    c8_b_p = true;
  }

  if (!c8_b_p) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c8_sp, &c8_b_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_e_y)));
  }

  c8_psiz = c8_siz[0];
  return 1 + c8_psiz * ((int32_T)c8_varargin_2 - 1);
}

static void c8_b_contributions(SFc8_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_weights_data[], int32_T c8_weights_size[2],
  int32_T c8_indices_data[], int32_T c8_indices_size[2])
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  real_T c8_absx[1968];
  real_T c8_absx2[1968];
  real_T c8_absx3[1968];
  real_T c8_e_y[1968];
  real_T c8_f[1968];
  real_T c8_f_y[1968];
  real_T c8_g_y[328];
  real_T c8_b_y;
  real_T c8_c_a;
  real_T c8_c_y;
  real_T c8_d_a;
  real_T c8_d_i;
  real_T c8_d_y;
  real_T c8_f_a;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_a;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  real_T c8_m_x;
  real_T c8_n_k;
  real_T c8_oldIdx;
  int32_T c8_indices[1968];
  int32_T c8_aux[656];
  int32_T c8_b_tmp_data[6];
  int32_T c8_tmp_data[6];
  int32_T c8_b_tmp_size[2];
  int32_T c8_tmp_size[2];
  int32_T c8_b;
  int32_T c8_b_c;
  int32_T c8_b_i;
  int32_T c8_b_i1;
  int32_T c8_b_i2;
  int32_T c8_b_ia;
  int32_T c8_b_ib;
  int32_T c8_b_ic;
  int32_T c8_b_ix;
  int32_T c8_b_k;
  int32_T c8_b_loop_ub;
  int32_T c8_b_partialTrueCount;
  int32_T c8_b_trueCount;
  int32_T c8_b_varargin_2;
  int32_T c8_b_varargin_3;
  int32_T c8_b_varargin_5;
  int32_T c8_b_varargin_6;
  int32_T c8_b_xj;
  int32_T c8_c;
  int32_T c8_c_i;
  int32_T c8_c_ia;
  int32_T c8_c_ib;
  int32_T c8_c_ic;
  int32_T c8_c_k;
  int32_T c8_c_varargin_1;
  int32_T c8_c_varargin_2;
  int32_T c8_c_varargin_3;
  int32_T c8_c_xj;
  int32_T c8_d_b;
  int32_T c8_d_ia;
  int32_T c8_d_ib;
  int32_T c8_d_ic;
  int32_T c8_d_k;
  int32_T c8_d_varargin_1;
  int32_T c8_d_varargin_2;
  int32_T c8_d_varargin_3;
  int32_T c8_e_a;
  int32_T c8_e_b;
  int32_T c8_e_i;
  int32_T c8_e_ic;
  int32_T c8_e_k;
  int32_T c8_e_varargin_1;
  int32_T c8_e_varargin_3;
  int32_T c8_f_i;
  int32_T c8_f_ic;
  int32_T c8_f_k;
  int32_T c8_f_varargin_1;
  int32_T c8_g_a;
  int32_T c8_g_i;
  int32_T c8_g_k;
  int32_T c8_g_varargin_1;
  int32_T c8_h_a;
  int32_T c8_h_i;
  int32_T c8_h_k;
  int32_T c8_h_varargin_1;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_i;
  int32_T c8_i_k;
  int32_T c8_ia;
  int32_T c8_ib;
  int32_T c8_ic;
  int32_T c8_ix;
  int32_T c8_iy;
  int32_T c8_j_a;
  int32_T c8_j_k;
  int32_T c8_k;
  int32_T c8_k_a;
  int32_T c8_k_k;
  int32_T c8_l_a;
  int32_T c8_l_k;
  int32_T c8_loop_ub;
  int32_T c8_m_a;
  int32_T c8_m_k;
  int32_T c8_partialTrueCount;
  int32_T c8_trueCount;
  int32_T c8_varargin_2;
  int32_T c8_varargin_3;
  int32_T c8_varargin_4;
  int32_T c8_varargin_5;
  int32_T c8_varargin_6;
  int32_T c8_xj;
  int32_T c8_xoffset;
  boolean_T c8_bv[1968];
  boolean_T c8_bv1[1968];
  boolean_T c8_copyCols[6];
  boolean_T c8_b_b;
  boolean_T c8_c_b;
  boolean_T c8_exitg1;
  boolean_T c8_f_b;
  boolean_T c8_g_b;
  boolean_T c8_overflow;
  boolean_T c8_rEQ0;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  for (c8_k = 0; c8_k < 6; c8_k++) {
    c8_ib = c8_k;
    c8_ic = c8_k;
    c8_c_varargin_1 = c8_ic + 1;
    c8_varargin_3 = c8_ib + 1;
    for (c8_d_k = 0; c8_d_k < 328; c8_d_k++) {
      c8_ia = c8_d_k;
      c8_c_ic = c8_d_k;
      c8_e_varargin_1 = c8_c_ic;
      c8_varargin_2 = c8_c_varargin_1 - 1;
      c8_c_varargin_3 = c8_ia;
      c8_varargin_6 = c8_varargin_3 - 1;
      c8_e_a = -1 + c8_c_varargin_3;
      c8_b = c8_varargin_6;
      c8_c = c8_e_a + c8_b;
      c8_indices[c8_e_varargin_1 + 328 * c8_varargin_2] = c8_c;
    }
  }

  for (c8_i = 0; c8_i < 1968; c8_i++) {
    c8_absx2[c8_i] = (real_T)c8_indices[c8_i];
  }

  for (c8_b_k = 0; c8_b_k < 6; c8_b_k++) {
    c8_b_ib = c8_b_k;
    c8_b_ic = c8_b_k;
    c8_d_varargin_1 = c8_b_ic + 1;
    c8_b_varargin_3 = c8_b_ib + 1;
    for (c8_i_k = 0; c8_i_k < 328; c8_i_k++) {
      c8_b_ia = c8_i_k;
      c8_c_ib = c8_i_k;
      c8_d_ic = c8_i_k;
      c8_f_varargin_1 = c8_d_ic;
      c8_b_varargin_2 = c8_d_varargin_1 - 1;
      c8_d_varargin_3 = c8_b_ia;
      c8_varargin_5 = c8_c_ib;
      c8_b_varargin_6 = c8_b_varargin_3 - 1;
      c8_absx3[c8_f_varargin_1 + 328 * c8_b_varargin_2] = (1.0 + (real_T)
        c8_d_varargin_3) - c8_absx2[c8_varargin_5 + 328 * c8_b_varargin_6];
    }
  }

  for (c8_c_k = 0; c8_c_k < 1968; c8_c_k++) {
    c8_f_k = c8_c_k;
    c8_g_x = c8_absx3[c8_f_k];
    c8_b_y = muDoubleScalarAbs(c8_g_x);
    c8_absx[c8_f_k] = c8_b_y;
  }

  for (c8_e_k = 0; c8_e_k < 1968; c8_e_k++) {
    c8_h_k = c8_e_k;
    c8_c_a = c8_absx[c8_h_k];
    c8_c_y = c8_c_a * c8_c_a;
    c8_absx2[c8_h_k] = c8_c_y;
  }

  for (c8_g_k = 0; c8_g_k < 1968; c8_g_k++) {
    c8_j_k = c8_g_k;
    c8_d_a = c8_absx[c8_j_k];
    c8_d_y = muDoubleScalarPower(c8_d_a, 3.0);
    c8_absx3[c8_j_k] = c8_d_y;
  }

  for (c8_i1 = 0; c8_i1 < 1968; c8_i1++) {
    c8_bv[c8_i1] = (1.0 < c8_absx[c8_i1]);
  }

  for (c8_i2 = 0; c8_i2 < 1968; c8_i2++) {
    c8_bv1[c8_i2] = (c8_absx[c8_i2] <= 2.0);
  }

  for (c8_i3 = 0; c8_i3 < 1968; c8_i3++) {
    c8_f[c8_i3] = 1.5 * c8_absx3[c8_i3];
  }

  for (c8_i4 = 0; c8_i4 < 1968; c8_i4++) {
    c8_e_y[c8_i4] = 2.5 * c8_absx2[c8_i4];
  }

  for (c8_i5 = 0; c8_i5 < 1968; c8_i5++) {
    c8_absx3[c8_i5] *= -0.5;
  }

  for (c8_i6 = 0; c8_i6 < 1968; c8_i6++) {
    c8_absx2[c8_i6] *= 2.5;
  }

  for (c8_i7 = 0; c8_i7 < 1968; c8_i7++) {
    c8_f_y[c8_i7] = 4.0 * c8_absx[c8_i7];
  }

  for (c8_i8 = 0; c8_i8 < 1968; c8_i8++) {
    c8_f[c8_i8] = ((c8_f[c8_i8] - c8_e_y[c8_i8]) + 1.0) * (real_T)(c8_absx[c8_i8]
      <= 1.0) + (((c8_absx3[c8_i8] + c8_absx2[c8_i8]) - c8_f_y[c8_i8]) + 2.0) *
      (real_T)(c8_bv[c8_i8] && c8_bv1[c8_i8]);
  }

  for (c8_xj = 0; c8_xj < 328; c8_xj++) {
    c8_b_xj = c8_xj;
    c8_g_y[c8_b_xj] = c8_f[c8_b_xj];
  }

  for (c8_k_k = 0; c8_k_k < 5; c8_k_k++) {
    c8_xoffset = (c8_k_k + 1) * 328;
    for (c8_c_xj = 0; c8_c_xj < 328; c8_c_xj++) {
      c8_b_xj = c8_c_xj;
      c8_ix = c8_xoffset + c8_b_xj;
      c8_g_y[c8_b_xj] += c8_f[c8_ix];
    }
  }

  for (c8_i9 = 0; c8_i9 < 1968; c8_i9++) {
    c8_absx2[c8_i9] = c8_f[c8_i9];
  }

  for (c8_l_k = 0; c8_l_k < 6; c8_l_k++) {
    c8_c_ia = c8_l_k;
    c8_e_ic = c8_l_k;
    c8_g_varargin_1 = c8_e_ic + 1;
    c8_c_varargin_2 = c8_c_ia + 1;
    for (c8_m_k = 0; c8_m_k < 328; c8_m_k++) {
      c8_d_ia = c8_m_k;
      c8_d_ib = c8_m_k;
      c8_f_ic = c8_m_k;
      c8_h_varargin_1 = c8_f_ic;
      c8_d_varargin_2 = c8_g_varargin_1 - 1;
      c8_e_varargin_3 = c8_d_ia;
      c8_varargin_4 = c8_c_varargin_2 - 1;
      c8_b_varargin_5 = c8_d_ib;
      c8_f[c8_h_varargin_1 + 328 * c8_d_varargin_2] = c8_absx2[c8_e_varargin_3 +
        328 * c8_varargin_4] / c8_g_y[c8_b_varargin_5];
    }
  }

  c8_aux[0] = 1;
  c8_aux[328] = 328;
  for (c8_b_i = 0; c8_b_i < 327; c8_b_i++) {
    c8_aux[c8_b_i + 1] = c8_aux[c8_b_i] + 1;
    c8_aux[c8_b_i + 329] = c8_aux[c8_b_i + 328] - 1;
  }

  for (c8_c_i = 0; c8_c_i < 1968; c8_c_i++) {
    c8_d_i = (real_T)c8_c_i + 1.0;
    c8_oldIdx = (real_T)c8_indices[(int32_T)c8_d_i - 1];
    c8_h_x = c8_oldIdx - 1.0;
    c8_f_a = c8_h_x;
    c8_i_x = c8_f_a;
    c8_j_x = c8_i_x;
    c8_k_x = c8_j_x;
    c8_b_b = muDoubleScalarIsNaN(c8_k_x);
    if (c8_b_b) {
      c8_n_k = rtNaN;
    } else {
      c8_l_x = c8_j_x;
      c8_c_b = muDoubleScalarIsInf(c8_l_x);
      if (c8_c_b) {
        c8_n_k = rtNaN;
      } else if (c8_j_x == 0.0) {
        c8_n_k = 0.0;
      } else {
        c8_n_k = muDoubleScalarRem(c8_j_x, 656.0);
        c8_rEQ0 = (c8_n_k == 0.0);
        if (c8_rEQ0) {
          c8_n_k = 0.0;
        } else if (c8_j_x < 0.0) {
          c8_n_k += 656.0;
        }
      }
    }

    c8_i_a = c8_n_k;
    c8_b_c = (int32_T)c8_i_a;
    c8_indices[(int32_T)c8_d_i - 1] = c8_aux[c8_b_c];
  }

  c8_st.site = &c8_ub_emlrtRSI;
  c8_b_st.site = &c8_vb_emlrtRSI;
  for (c8_i10 = 0; c8_i10 < 6; c8_i10++) {
    c8_copyCols[c8_i10] = false;
  }

  c8_b_i2 = 0;
  c8_iy = -1;
  for (c8_e_i = 0; c8_e_i < 6; c8_e_i++) {
    c8_b_i1 = c8_b_i2;
    c8_g_a = c8_b_i2 + 327;
    c8_b_i2 = c8_g_a;
    c8_h_a = c8_b_i1 + 1;
    c8_b_i1 = c8_h_a;
    c8_j_a = c8_b_i2 + 1;
    c8_b_i2 = c8_j_a;
    c8_k_a = c8_iy + 1;
    c8_iy = c8_k_a;
    c8_c_st.site = &c8_wb_emlrtRSI;
    c8_l_a = c8_b_i1;
    c8_d_b = c8_b_i2;
    c8_m_a = c8_l_a;
    c8_e_b = c8_d_b;
    if (c8_m_a > c8_e_b) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_e_b > 2147483646);
    }

    if (c8_overflow) {
      c8_d_st.site = &c8_xb_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_d_st);
    }

    c8_b_ix = c8_b_i1 - 1;
    c8_exitg1 = false;
    while ((!c8_exitg1) && (c8_b_ix + 1 <= c8_b_i2)) {
      if (c8_f[c8_b_ix] == 0.0) {
        c8_f_b = true;
      } else {
        c8_m_x = c8_f[c8_b_ix];
        c8_g_b = muDoubleScalarIsNaN(c8_m_x);
        if (c8_g_b) {
          c8_f_b = true;
        } else {
          c8_f_b = false;
        }
      }

      if (!c8_f_b) {
        c8_copyCols[c8_iy] = true;
        c8_exitg1 = true;
      } else {
        c8_b_ix++;
      }
    }
  }

  c8_trueCount = 0;
  for (c8_f_i = 0; c8_f_i < 6; c8_f_i++) {
    if (c8_copyCols[c8_f_i]) {
      c8_trueCount++;
    }
  }

  c8_tmp_size[1] = c8_trueCount;
  c8_partialTrueCount = 0;
  for (c8_g_i = 0; c8_g_i < 6; c8_g_i++) {
    if (c8_copyCols[c8_g_i]) {
      c8_tmp_data[c8_partialTrueCount] = c8_g_i + 1;
      c8_partialTrueCount++;
    }
  }

  c8_weights_size[0] = c8_tmp_size[1];
  c8_weights_size[1] = 328;
  for (c8_i11 = 0; c8_i11 < 328; c8_i11++) {
    c8_loop_ub = c8_tmp_size[1] - 1;
    for (c8_i12 = 0; c8_i12 <= c8_loop_ub; c8_i12++) {
      c8_weights_data[c8_i12 + c8_weights_size[0] * c8_i11] = c8_f[c8_i11 + 328 *
        (c8_tmp_data[c8_i12] - 1)];
    }
  }

  c8_b_trueCount = 0;
  for (c8_h_i = 0; c8_h_i < 6; c8_h_i++) {
    if (c8_copyCols[c8_h_i]) {
      c8_b_trueCount++;
    }
  }

  c8_b_tmp_size[1] = c8_b_trueCount;
  c8_b_partialTrueCount = 0;
  for (c8_i_i = 0; c8_i_i < 6; c8_i_i++) {
    if (c8_copyCols[c8_i_i]) {
      c8_b_tmp_data[c8_b_partialTrueCount] = c8_i_i + 1;
      c8_b_partialTrueCount++;
    }
  }

  c8_indices_size[0] = c8_b_tmp_size[1];
  c8_indices_size[1] = 328;
  for (c8_i13 = 0; c8_i13 < 328; c8_i13++) {
    c8_b_loop_ub = c8_b_tmp_size[1] - 1;
    for (c8_i14 = 0; c8_i14 <= c8_b_loop_ub; c8_i14++) {
      c8_indices_data[c8_i14 + c8_indices_size[0] * c8_i13] = c8_indices[c8_i13
        + 328 * (c8_b_tmp_data[c8_i14] - 1)];
    }
  }
}

static void c8_b_resizeAlongDim(SFc8_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c8_sp, uint8_T c8_in_[83312], real_T c8_weights_data[],
  int32_T c8_weights_size[2], int32_T c8_indices_data[], uint8_T c8_out_[83312])
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  real_T c8_siz[2];
  real_T c8_b_inRInd;
  real_T c8_b_outCInd;
  real_T c8_c_varargin_1;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d_varargin_1;
  real_T c8_e_a;
  real_T c8_g_x;
  real_T c8_ndx;
  real_T c8_rowStart;
  real_T c8_sumVal1;
  real_T c8_varargin_2;
  int32_T c8_b_siz[2];
  int32_T c8_b_b;
  int32_T c8_b_c;
  int32_T c8_c;
  int32_T c8_c_a;
  int32_T c8_d_a;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_idx;
  int32_T c8_inRInd;
  int32_T c8_k;
  int32_T c8_linearInds;
  int32_T c8_outCInd;
  int32_T c8_pixelIndex;
  uint8_T c8_pixelValue;
  uint8_T c8_u;
  boolean_T c8_b;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_st.site = &c8_yb_emlrtRSI;
  for (c8_inRInd = 0; c8_inRInd < 254; c8_inRInd++) {
    c8_b_inRInd = (real_T)c8_inRInd + 1.0;
    c8_b_st.site = &c8_ec_emlrtRSI;
    c8_c_varargin_1 = c8_b_inRInd;
    c8_c_st.site = &c8_bc_emlrtRSI;
    c8_d_varargin_1 = c8_c_varargin_1;
    c8_g_x = c8_d_varargin_1;
    if (c8_g_x <= 254.0) {
      c8_b = true;
    } else {
      c8_b = false;
    }

    if (!c8_b) {
      c8_p = false;
    } else {
      c8_p = true;
    }

    if (!c8_p) {
      c8_b_y = NULL;
      sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c8_c_y = NULL;
      sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c8_c_st, &c8_b_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                  sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_c_st, NULL, "message", 1U, 1U, 14, c8_c_y)));
    }

    c8_idx = (int32_T)c8_d_varargin_1;
    c8_rowStart = (real_T)c8_idx;
    for (c8_outCInd = 0; c8_outCInd < 328; c8_outCInd++) {
      c8_b_outCInd = (real_T)c8_outCInd + 1.0;
      c8_sumVal1 = 0.0;
      c8_b_st.site = &c8_fc_emlrtRSI;
      for (c8_i = 0; c8_i < 2; c8_i++) {
        c8_siz[c8_i] = (real_T)c8_weights_size[c8_i];
      }

      c8_varargin_2 = c8_b_outCInd;
      for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
        c8_b_siz[c8_i1] = (int32_T)c8_siz[c8_i1];
      }

      c8_c_st.site = &c8_bc_emlrtRSI;
      c8_ndx = (real_T)c8_eml_sub2ind(chartInstance, &c8_c_st, c8_b_siz,
        c8_varargin_2);
      c8_linearInds = (int32_T)c8_ndx - 1;
      c8_d = (real_T)c8_weights_size[0];
      c8_i2 = (int32_T)c8_d - 1;
      for (c8_k = 0; c8_k <= c8_i2; c8_k++) {
        c8_c_a = c8_indices_data[c8_linearInds] - 1;
        c8_c = c8_c_a;
        c8_d_a = c8_c;
        c8_b_c = c8_d_a * 254;
        c8_e_a = c8_rowStart;
        c8_b_b = c8_b_c;
        c8_pixelIndex = ((int32_T)c8_e_a + c8_b_b) - 1;
        c8_pixelValue = c8_in_[c8_pixelIndex];
        c8_sumVal1 += c8_weights_data[c8_linearInds] * (real_T)c8_pixelValue;
        c8_linearInds++;
      }

      c8_d1 = muDoubleScalarRound(c8_sumVal1);
      if (c8_d1 < 256.0) {
        if (c8_d1 >= 0.0) {
          c8_u = (uint8_T)c8_d1;
        } else {
          c8_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c8_d1 >= 256.0) {
        c8_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c8_u = 0U;
      }

      c8_out_[((int32_T)c8_b_inRInd + 254 * ((int32_T)c8_b_outCInd - 1)) - 1] =
        c8_u;
    }
  }
}

static real_T c8_sumColumnB4(SFc8_untitled1InstanceStruct *chartInstance, real_T
  c8_g_x[20828], int32_T c8_vstart)
{
  real_T c8_psum1;
  real_T c8_psum2;
  real_T c8_psum3;
  real_T c8_psum4;
  int32_T c8_b_k;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_k;
  (void)chartInstance;
  c8_i2 = c8_vstart + 1023;
  c8_i3 = c8_vstart + 2047;
  c8_i4 = c8_vstart + 3071;
  c8_psum1 = c8_g_x[c8_vstart - 1];
  c8_psum2 = c8_g_x[c8_i2];
  c8_psum3 = c8_g_x[c8_i3];
  c8_psum4 = c8_g_x[c8_i4];
  for (c8_k = 0; c8_k < 1023; c8_k++) {
    c8_b_k = c8_k + 1;
    c8_psum1 += c8_g_x[(c8_vstart + c8_b_k) - 1];
    c8_psum2 += c8_g_x[c8_i2 + c8_b_k];
    c8_psum3 += c8_g_x[c8_i3 + c8_b_k];
    c8_psum4 += c8_g_x[c8_i4 + c8_b_k];
  }

  return (c8_psum1 + c8_psum2) + (c8_psum3 + c8_psum4);
}

static real_T c8_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance, real_T
  c8_g_x[20828])
{
  real_T c8_b_y;
  int32_T c8_b_k;
  int32_T c8_k;
  (void)chartInstance;
  c8_b_y = c8_g_x[20480];
  for (c8_k = 0; c8_k < 347; c8_k++) {
    c8_b_k = c8_k;
    c8_b_y += c8_g_x[c8_b_k + 20481];
  }

  return c8_b_y;
}

static real_T c8_b_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x)
{
  real_T c8_h_x;
  (void)chartInstance;
  c8_h_x = c8_g_x;
  return c8_h_x;
}

static void c8_log(SFc8_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c8_sp, real_T c8_g_x[83312], real_T c8_h_x[83312])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    c8_h_x[c8_i] = c8_g_x[c8_i];
  }

  c8_b_log(chartInstance, c8_sp, c8_h_x);
}

static void c8_fft2(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x
                    [83312], creal_T c8_b_y[83312])
{
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_R2C(&c8_g_x[0], (real_T *)&chartInstance->c8_b_acc[0], 1, 254,
                   254, 328, -1);
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&chartInstance->c8_b_acc[0], (real_T *)&c8_b_y[0],
                   254, 328, 328, 254, -1);
}

static boolean_T c8_fltpower_domain_error(SFc8_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
  return false;
}

static void c8_ifft2(SFc8_untitled1InstanceStruct *chartInstance, creal_T
                     c8_g_x[83312], creal_T c8_b_y[83312])
{
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&c8_g_x[0], (real_T *)&chartInstance->c8_acc[0], 1,
                   254, 254, 328, 1);
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&chartInstance->c8_acc[0], (real_T *)&c8_b_y[0],
                   254, 328, 328, 254, 1);
}

static void c8_exp(SFc8_untitled1InstanceStruct *chartInstance, creal_T c8_g_x
                   [83312], creal_T c8_h_x[83312])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    c8_h_x[c8_i] = c8_g_x[c8_i];
  }

  c8_b_exp(chartInstance, c8_h_x);
}

static real_T c8_maximum(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_g_x[83312])
{
  c8_emxArray_real_T *c8_h_x;
  real_T c8_b_ex;
  real_T c8_ex;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  int32_T c8_b_k;
  int32_T c8_first;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_idx;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  c8_emxInit_real_T(chartInstance, c8_sp, &c8_h_x, 1, &c8_d_emlrtRTEI);
  c8_i = c8_h_x->size[0];
  c8_h_x->size[0] = 83312;
  c8_emxEnsureCapacity_real_T(chartInstance, c8_sp, c8_h_x, c8_i,
    &c8_d_emlrtRTEI);
  for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
    c8_h_x->data[c8_i1] = c8_g_x[c8_i1];
  }

  c8_i_x = c8_h_x->data[0];
  c8_j_x = c8_i_x;
  c8_b = muDoubleScalarIsNaN(c8_j_x);
  c8_p = !c8_b;
  if (c8_p) {
    c8_idx = 1;
  } else {
    c8_idx = 0;
    c8_k = 2;
    c8_exitg1 = false;
    while ((!c8_exitg1) && (c8_k < 83313)) {
      c8_k_x = c8_h_x->data[c8_k - 1];
      c8_l_x = c8_k_x;
      c8_b_b = muDoubleScalarIsNaN(c8_l_x);
      c8_b_p = !c8_b_b;
      if (c8_b_p) {
        c8_idx = c8_k;
        c8_exitg1 = true;
      } else {
        c8_k++;
      }
    }
  }

  if (c8_idx == 0) {
    c8_ex = c8_h_x->data[0];
  } else {
    c8_first = c8_idx - 1;
    c8_b_ex = c8_h_x->data[c8_first];
    c8_i2 = c8_first;
    for (c8_b_k = c8_i2 + 1; c8_b_k + 1 < 83313; c8_b_k++) {
      if (c8_b_ex < c8_h_x->data[c8_b_k]) {
        c8_b_ex = c8_h_x->data[c8_b_k];
      }
    }

    c8_ex = c8_b_ex;
  }

  c8_emxFree_real_T(chartInstance, &c8_h_x);
  return c8_ex;
}

static real_T c8_minimum(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_g_x[83312])
{
  c8_emxArray_real_T *c8_h_x;
  real_T c8_b_ex;
  real_T c8_ex;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_k_x;
  real_T c8_l_x;
  int32_T c8_b_k;
  int32_T c8_first;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_idx;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  c8_emxInit_real_T(chartInstance, c8_sp, &c8_h_x, 1, &c8_e_emlrtRTEI);
  c8_i = c8_h_x->size[0];
  c8_h_x->size[0] = 83312;
  c8_emxEnsureCapacity_real_T(chartInstance, c8_sp, c8_h_x, c8_i,
    &c8_e_emlrtRTEI);
  for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
    c8_h_x->data[c8_i1] = c8_g_x[c8_i1];
  }

  c8_i_x = c8_h_x->data[0];
  c8_j_x = c8_i_x;
  c8_b = muDoubleScalarIsNaN(c8_j_x);
  c8_p = !c8_b;
  if (c8_p) {
    c8_idx = 1;
  } else {
    c8_idx = 0;
    c8_k = 2;
    c8_exitg1 = false;
    while ((!c8_exitg1) && (c8_k < 83313)) {
      c8_k_x = c8_h_x->data[c8_k - 1];
      c8_l_x = c8_k_x;
      c8_b_b = muDoubleScalarIsNaN(c8_l_x);
      c8_b_p = !c8_b_b;
      if (c8_b_p) {
        c8_idx = c8_k;
        c8_exitg1 = true;
      } else {
        c8_k++;
      }
    }
  }

  if (c8_idx == 0) {
    c8_ex = c8_h_x->data[0];
  } else {
    c8_first = c8_idx - 1;
    c8_b_ex = c8_h_x->data[c8_first];
    c8_i2 = c8_first;
    for (c8_b_k = c8_i2 + 1; c8_b_k + 1 < 83313; c8_b_k++) {
      if (c8_b_ex > c8_h_x->data[c8_b_k]) {
        c8_b_ex = c8_h_x->data[c8_b_k];
      }
    }

    c8_ex = c8_b_ex;
  }

  c8_emxFree_real_T(chartInstance, &c8_h_x);
  return c8_ex;
}

static real_T c8_mean(SFc8_untitled1InstanceStruct *chartInstance, real_T
                      c8_g_x[83312])
{
  real_T c8_c_y;
  real_T c8_s;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_ib;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    chartInstance->c8_x[c8_i] = c8_g_x[c8_i];
  }

  c8_s = c8_b_sumColumnB4(chartInstance, chartInstance->c8_x, 1);
  for (c8_ib = 0; c8_ib < 19; c8_ib++) {
    for (c8_i2 = 0; c8_i2 < 83312; c8_i2++) {
      chartInstance->c8_c_x[c8_i2] = c8_g_x[c8_i2];
    }

    c8_s += c8_b_sumColumnB4(chartInstance, chartInstance->c8_c_x, 1 + ((c8_ib +
      1) << 12));
  }

  for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
    chartInstance->c8_b_x[c8_i1] = c8_g_x[c8_i1];
  }

  c8_s += c8_c_sumColumnB(chartInstance, chartInstance->c8_b_x);
  c8_c_y = c8_s;
  return c8_c_y / 83312.0;
}

static real_T c8_b_sumColumnB4(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312], int32_T c8_vstart)
{
  real_T c8_psum1;
  real_T c8_psum2;
  real_T c8_psum3;
  real_T c8_psum4;
  int32_T c8_b_k;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_k;
  (void)chartInstance;
  c8_i2 = c8_vstart + 1023;
  c8_i3 = c8_vstart + 2047;
  c8_i4 = c8_vstart + 3071;
  c8_psum1 = c8_g_x[c8_vstart - 1];
  c8_psum2 = c8_g_x[c8_i2];
  c8_psum3 = c8_g_x[c8_i3];
  c8_psum4 = c8_g_x[c8_i4];
  for (c8_k = 0; c8_k < 1023; c8_k++) {
    c8_b_k = c8_k + 1;
    c8_psum1 += c8_g_x[(c8_vstart + c8_b_k) - 1];
    c8_psum2 += c8_g_x[c8_i2 + c8_b_k];
    c8_psum3 += c8_g_x[c8_i3 + c8_b_k];
    c8_psum4 += c8_g_x[c8_i4 + c8_b_k];
  }

  return (c8_psum1 + c8_psum2) + (c8_psum3 + c8_psum4);
}

static real_T c8_c_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312])
{
  real_T c8_b_y;
  real_T c8_c_y;
  int32_T c8_b_k;
  int32_T c8_c_k;
  int32_T c8_d_k;
  int32_T c8_k;
  (void)chartInstance;
  c8_b_y = c8_g_x[81920];
  for (c8_k = 1; c8_k - 1 < 1023; c8_k++) {
    c8_b_k = c8_k + 81920;
    c8_b_y += c8_g_x[c8_b_k];
  }

  c8_c_y = c8_g_x[82944];
  for (c8_c_k = 1; c8_c_k - 1 < 367; c8_c_k++) {
    c8_d_k = c8_c_k + 82944;
    c8_c_y += c8_g_x[c8_d_k];
  }

  c8_b_y += c8_c_y;
  return c8_b_y;
}

static void c8_imfilter(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_c_varargin_1[83312], real_T c8_b[83312])
{
  static real_T c8_kernel[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0, -1.0
  };

  static real_T c8_nonZeroKernel[6] = { 1.0, -1.0, 2.0, -2.0, 1.0, -1.0 };

  static boolean_T c8_conn[9] = { true, false, true, true, false, true, true,
    false, true };

  emlrtStack c8_st;
  real_T c8_connDimsT[2];
  real_T c8_outSizeT[2];
  real_T c8_padSizeT[2];
  real_T c8_startT[2];
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  boolean_T c8_b_modeFlag;
  boolean_T c8_c_modeFlag;
  boolean_T c8_modeFlag;
  boolean_T c8_tooBig;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_uc_emlrtRSI;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    chartInstance->c8_b_varargin_1[c8_i] = c8_c_varargin_1[c8_i];
  }

  c8_padImage(chartInstance, &c8_st, chartInstance->c8_b_varargin_1,
              chartInstance->c8_b_a);
  c8_tooBig = true;
  for (c8_b_i = 0; c8_b_i < 2; c8_b_i++) {
    c8_tooBig = false;
  }

  if (!c8_tooBig) {
    c8_modeFlag = true;
  } else {
    c8_modeFlag = false;
  }

  if (c8_modeFlag) {
    c8_b_modeFlag = true;
  } else {
    c8_b_modeFlag = false;
  }

  c8_c_modeFlag = c8_b_modeFlag;
  if (c8_c_modeFlag) {
    for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
      c8_padSizeT[c8_i2] = 256.0 + 74.0 * (real_T)c8_i2;
    }

    for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
      c8_outSizeT[c8_i4] = 254.0 + 74.0 * (real_T)c8_i4;
    }

    for (c8_i6 = 0; c8_i6 < 2; c8_i6++) {
      c8_connDimsT[c8_i6] = 3.0;
    }

    ippfilter_real64(&chartInstance->c8_b_a[0], &c8_b[0], &c8_outSizeT[0], 2.0,
                     &c8_padSizeT[0], &c8_kernel[0], &c8_connDimsT[0], false);
  } else {
    for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
      c8_padSizeT[c8_i1] = 256.0 + 74.0 * (real_T)c8_i1;
    }

    for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
      c8_outSizeT[c8_i3] = 254.0 + 74.0 * (real_T)c8_i3;
    }

    for (c8_i5 = 0; c8_i5 < 2; c8_i5++) {
      c8_connDimsT[c8_i5] = 3.0;
    }

    for (c8_i7 = 0; c8_i7 < 2; c8_i7++) {
      c8_startT[c8_i7] = 1.0;
    }

    imfilter_real64(&chartInstance->c8_b_a[0], &c8_b[0], 2.0, &c8_outSizeT[0],
                    2.0, &c8_padSizeT[0], &c8_nonZeroKernel[0], 6.0, &c8_conn[0],
                    2.0, &c8_connDimsT[0], &c8_startT[0], 2.0, true, false);
  }
}

static real_T c8_sqrt(SFc8_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T c8_g_x)
{
  real_T c8_h_x;
  c8_h_x = c8_g_x;
  c8_b_sqrt(chartInstance, c8_sp, &c8_h_x);
  return c8_h_x;
}

static void c8_padImage(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_a_tmp[83312], real_T c8_c_a[84480])
{
  static int32_T c8_idxA[660] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
    137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
    152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181,
    182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
    197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
    212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226,
    227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
    242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 254, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
    26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
    45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
    64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
    83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101,
    102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
    117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
    132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
    147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161,
    162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176,
    177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
    192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
    207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221,
    222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236,
    237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
    252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266,
    267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281,
    282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296,
    297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311,
    312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326,
    327, 328, 328 };

  emlrtStack c8_st;
  real_T c8_b_i;
  real_T c8_b_j;
  int32_T c8_c_i;
  int32_T c8_i;
  int32_T c8_j;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_wc_emlrtRSI;
  for (c8_j = 0; c8_j < 330; c8_j++) {
    c8_b_j = (real_T)c8_j + 1.0;
    for (c8_i = 0; c8_i < 256; c8_i++) {
      c8_b_i = (real_T)c8_i + 1.0;
      if ((c8_idxA[(int32_T)c8_b_i - 1] < 1) || (c8_idxA[(int32_T)c8_b_i - 1] >
           254)) {
        emlrtDynamicBoundsCheckR2012b(c8_idxA[(int32_T)c8_b_i - 1], 1, 254,
          &c8_id_emlrtBCI, &c8_st);
      }

      c8_c_i = c8_idxA[(int32_T)c8_b_j + 329];
      if ((c8_c_i < 1) || (c8_c_i > 328)) {
        emlrtDynamicBoundsCheckR2012b(c8_c_i, 1, 328, &c8_jd_emlrtBCI, &c8_st);
      }

      c8_c_a[((int32_T)c8_b_i + (((int32_T)c8_b_j - 1) << 8)) - 1] = c8_a_tmp
        [(c8_idxA[(int32_T)c8_b_i - 1] + 254 * (c8_c_i - 1)) - 1];
    }
  }
}

static void c8_b_imfilter(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_c_varargin_1[83312], real_T c8_b[83312])
{
  static real_T c8_kernel[9] = { 1.0, 2.0, 1.0, 0.0, 0.0, 0.0, -1.0, -2.0, -1.0
  };

  static real_T c8_nonZeroKernel[6] = { 1.0, 2.0, 1.0, -1.0, -2.0, -1.0 };

  static boolean_T c8_conn[9] = { true, true, true, false, false, false, true,
    true, true };

  emlrtStack c8_st;
  real_T c8_connDimsT[2];
  real_T c8_outSizeT[2];
  real_T c8_padSizeT[2];
  real_T c8_startT[2];
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  boolean_T c8_b_modeFlag;
  boolean_T c8_c_modeFlag;
  boolean_T c8_modeFlag;
  boolean_T c8_tooBig;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_uc_emlrtRSI;
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    chartInstance->c8_varargin_1[c8_i] = c8_c_varargin_1[c8_i];
  }

  c8_padImage(chartInstance, &c8_st, chartInstance->c8_varargin_1,
              chartInstance->c8_a);
  c8_tooBig = true;
  for (c8_b_i = 0; c8_b_i < 2; c8_b_i++) {
    c8_tooBig = false;
  }

  if (!c8_tooBig) {
    c8_modeFlag = true;
  } else {
    c8_modeFlag = false;
  }

  if (c8_modeFlag) {
    c8_b_modeFlag = true;
  } else {
    c8_b_modeFlag = false;
  }

  c8_c_modeFlag = c8_b_modeFlag;
  if (c8_c_modeFlag) {
    for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
      c8_padSizeT[c8_i2] = 256.0 + 74.0 * (real_T)c8_i2;
    }

    for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
      c8_outSizeT[c8_i4] = 254.0 + 74.0 * (real_T)c8_i4;
    }

    for (c8_i6 = 0; c8_i6 < 2; c8_i6++) {
      c8_connDimsT[c8_i6] = 3.0;
    }

    ippfilter_real64(&chartInstance->c8_a[0], &c8_b[0], &c8_outSizeT[0], 2.0,
                     &c8_padSizeT[0], &c8_kernel[0], &c8_connDimsT[0], false);
  } else {
    for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
      c8_padSizeT[c8_i1] = 256.0 + 74.0 * (real_T)c8_i1;
    }

    for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
      c8_outSizeT[c8_i3] = 254.0 + 74.0 * (real_T)c8_i3;
    }

    for (c8_i5 = 0; c8_i5 < 2; c8_i5++) {
      c8_connDimsT[c8_i5] = 3.0;
    }

    for (c8_i7 = 0; c8_i7 < 2; c8_i7++) {
      c8_startT[c8_i7] = 1.0;
    }

    imfilter_real64(&chartInstance->c8_a[0], &c8_b[0], 2.0, &c8_outSizeT[0], 2.0,
                    &c8_padSizeT[0], &c8_nonZeroKernel[0], 6.0, &c8_conn[0], 2.0,
                    &c8_connDimsT[0], &c8_startT[0], 2.0, true, false);
  }
}

static void c8_b_mean(SFc8_untitled1InstanceStruct *chartInstance, real_T
                      c8_g_x[83312], real_T c8_b_y[328])
{
  int32_T c8_b_col;
  int32_T c8_col;
  int32_T c8_i;
  int32_T c8_i1;
  for (c8_col = 0; c8_col < 328; c8_col++) {
    c8_b_col = c8_col;
    for (c8_i1 = 0; c8_i1 < 83312; c8_i1++) {
      chartInstance->c8_d_x[c8_i1] = c8_g_x[c8_i1];
    }

    c8_b_y[c8_b_col] = c8_d_sumColumnB(chartInstance, chartInstance->c8_d_x,
      c8_b_col + 1);
  }

  for (c8_i = 0; c8_i < 328; c8_i++) {
    c8_b_y[c8_i] /= 254.0;
  }
}

static real_T c8_d_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[83312], int32_T c8_col)
{
  real_T c8_b_y;
  int32_T c8_b_col;
  int32_T c8_b_k;
  int32_T c8_i0;
  int32_T c8_k;
  (void)chartInstance;
  c8_b_col = c8_col - 1;
  c8_i0 = c8_b_col * 254;
  c8_b_y = c8_g_x[c8_i0];
  for (c8_k = 0; c8_k < 253; c8_k++) {
    c8_b_k = c8_k;
    c8_b_y += c8_g_x[(c8_i0 + c8_b_k) + 1];
  }

  return c8_b_y;
}

static real_T c8_e_sumColumnB(SFc8_untitled1InstanceStruct *chartInstance,
  real_T c8_g_x[328])
{
  real_T c8_b_y;
  int32_T c8_b_k;
  int32_T c8_k;
  (void)chartInstance;
  c8_b_y = c8_g_x[0];
  for (c8_k = 0; c8_k < 327; c8_k++) {
    c8_b_k = c8_k;
    c8_b_y += c8_g_x[c8_b_k + 1];
  }

  return c8_b_y;
}

static void c8_power(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_c_a
                     [83312], real_T c8_b_y[83312])
{
  real_T c8_c_y;
  real_T c8_d_a;
  int32_T c8_b_k;
  int32_T c8_k;
  (void)chartInstance;
  for (c8_k = 0; c8_k < 83312; c8_k++) {
    c8_b_k = c8_k;
    c8_d_a = c8_c_a[c8_b_k];
    c8_c_y = c8_d_a * c8_d_a;
    c8_b_y[c8_b_k] = c8_c_y;
  }
}

static void c8_sum(SFc8_untitled1InstanceStruct *chartInstance, real_T c8_g_x
                   [83312], real_T c8_b_y[328])
{
  int32_T c8_b_col;
  int32_T c8_col;
  int32_T c8_i;
  for (c8_col = 0; c8_col < 328; c8_col++) {
    c8_b_col = c8_col;
    for (c8_i = 0; c8_i < 83312; c8_i++) {
      chartInstance->c8_e_x[c8_i] = c8_g_x[c8_i];
    }

    c8_b_y[c8_b_col] = c8_d_sumColumnB(chartInstance, chartInstance->c8_e_x,
      c8_b_col + 1);
  }
}

static boolean_T c8_b_fltpower_domain_error(SFc8_untitled1InstanceStruct
  *chartInstance, real_T c8_c_a, real_T c8_b)
{
  real_T c8_b_b;
  real_T c8_c_b;
  real_T c8_d_a;
  real_T c8_e_a;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_x;
  boolean_T c8_b_p;
  boolean_T c8_c_p;
  boolean_T c8_d_b;
  boolean_T c8_d_p;
  boolean_T c8_e_p;
  (void)chartInstance;
  c8_d_a = c8_c_a;
  c8_b_b = c8_b;
  c8_e_a = c8_d_a;
  c8_b_p = (c8_e_a < 0.0);
  if (c8_b_p) {
    c8_c_b = c8_b_b;
    c8_g_x = c8_c_b;
    c8_d_b = muDoubleScalarIsNaN(c8_g_x);
    if (!c8_d_b) {
      c8_h_x = c8_c_b;
      c8_i_x = c8_h_x;
      c8_i_x = muDoubleScalarFloor(c8_i_x);
      if (c8_i_x != c8_c_b) {
        c8_d_p = true;
      } else {
        c8_d_p = false;
      }
    } else {
      c8_d_p = false;
    }

    c8_e_p = c8_d_p;
    if (c8_e_p) {
      c8_c_p = true;
    } else {
      c8_c_p = false;
    }
  } else {
    c8_c_p = false;
  }

  return c8_c_p;
}

static void c8_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_b_y, const char_T *c8_identifier, uint8_T c8_c_y[83312])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_y), &c8_thisId, c8_c_y);
  sf_mex_destroy(&c8_b_y);
}

static void c8_b_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId, uint8_T c8_b_y
  [83312])
{
  int32_T c8_i;
  uint8_T c8_uv[83312];
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), c8_uv, 1, 3, 0U, 1, 0U, 2, 254,
                328);
  for (c8_i = 0; c8_i < 83312; c8_i++) {
    c8_b_y[c8_i] = c8_uv[c8_i];
  }

  sf_mex_destroy(&c8_u);
}

static uint8_T c8_c_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_b_is_active_c8_untitled1, const char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  uint8_T c8_b_y;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_b_y = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_is_active_c8_untitled1), &c8_thisId);
  sf_mex_destroy(&c8_b_is_active_c8_untitled1);
  return c8_b_y;
}

static uint8_T c8_d_emlrt_marshallIn(SFc8_untitled1InstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_b_u;
  uint8_T c8_b_y;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_b_u, 1, 3, 0U, 0, 0U, 0);
  c8_b_y = c8_b_u;
  sf_mex_destroy(&c8_u);
  return c8_b_y;
}

static void c8_chart_data_browse_helper(SFc8_untitled1InstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig)
{
  real_T c8_d;
  *c8_mxData = NULL;
  *c8_mxData = NULL;
  *c8_isValueTooBig = 0U;
  switch (c8_ssIdNumber) {
   case 4U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_IR1, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 5U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_y, 3, 0U,
      1U, 0U, 2, 254, 328), false);
    break;

   case 6U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_IR2, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 9U:
    c8_d = *chartInstance->c8_f_x;
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", &c8_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_VIS1, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 8U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_VIS2, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;
  }
}

static void c8_b_log(SFc8_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, real_T c8_g_x[83312])
{
  static char_T c8_b_cv[3] = { 'l', 'o', 'g' };

  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  real_T c8_h_x;
  real_T c8_i_x;
  int32_T c8_b_k;
  int32_T c8_c_k;
  int32_T c8_k;
  boolean_T c8_b_p;
  boolean_T c8_p;
  (void)chartInstance;
  c8_p = false;
  for (c8_k = 0; c8_k < 83312; c8_k++) {
    if (c8_p) {
      c8_b_p = true;
    } else {
      c8_b_p = false;
    }

    c8_p = c8_b_p;
  }

  if (c8_p) {
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1, 3),
                  false);
    sf_mex_call(c8_sp, &c8_d_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 2U, 14, c8_c_y, 14, c8_d_y)));
  }

  for (c8_b_k = 0; c8_b_k < 83312; c8_b_k++) {
    c8_c_k = c8_b_k;
    c8_h_x = c8_g_x[c8_c_k];
    c8_i_x = c8_h_x;
    c8_i_x = muDoubleScalarLog(c8_i_x);
    c8_g_x[c8_c_k] = c8_i_x;
  }
}

static void c8_b_exp(SFc8_untitled1InstanceStruct *chartInstance, creal_T
                     c8_g_x[83312])
{
  static creal_T c8_dc = { 0.0,        /* re */
    0.0                                /* im */
  };

  creal_T c8_h_x;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_i_x;
  real_T c8_j_x;
  real_T c8_r;
  int32_T c8_b_k;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_guard1 = false;
  (void)chartInstance;
  for (c8_k = 0; c8_k < 83312; c8_k++) {
    c8_b_k = c8_k;
    c8_h_x = c8_g_x[c8_b_k];
    if (c8_h_x.im == 0.0) {
      c8_d = c8_h_x.re;
      c8_h_x.re = muDoubleScalarExp(c8_d);
      c8_h_x.im = 0.0;
    } else {
      c8_i_x = c8_h_x.im;
      c8_b = muDoubleScalarIsInf(c8_i_x);
      c8_guard1 = false;
      if (c8_b) {
        c8_j_x = c8_h_x.re;
        c8_b_b = muDoubleScalarIsInf(c8_j_x);
        if (c8_b_b && (c8_h_x.re < 0.0)) {
          c8_h_x = c8_dc;
        } else {
          c8_guard1 = true;
        }
      } else {
        c8_guard1 = true;
      }

      if (c8_guard1) {
        c8_r = muDoubleScalarExp(c8_h_x.re / 2.0);
        c8_d1 = c8_h_x.im;
        c8_d2 = c8_h_x.im;
        c8_h_x.re = c8_r * (c8_r * muDoubleScalarCos(c8_d1));
        c8_h_x.im = c8_r * (c8_r * muDoubleScalarSin(c8_d2));
      }
    }

    c8_g_x[c8_b_k] = c8_h_x;
  }
}

static void c8_b_sqrt(SFc8_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T *c8_g_x)
{
  static char_T c8_b_cv[4] = { 's', 'q', 'r', 't' };

  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  real_T c8_h_x;
  boolean_T c8_b_p;
  boolean_T c8_p;
  (void)chartInstance;
  c8_h_x = *c8_g_x;
  if (c8_h_x < 0.0) {
    c8_p = true;
  } else {
    c8_p = false;
  }

  c8_b_p = c8_p;
  if (c8_b_p) {
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c8_sp, &c8_f_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 2U, 14, c8_c_y, 14, c8_d_y)));
  }

  *c8_g_x = muDoubleScalarSqrt(*c8_g_x);
}

static void c8_emxEnsureCapacity_real_T(SFc8_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_emxArray_real_T *c8_emxArray,
  int32_T c8_oldNumel, const emlrtRTEInfo *c8_srcLocation)
{
  int32_T c8_i;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  void *c8_newData;
  (void)chartInstance;
  if (c8_oldNumel < 0) {
    c8_oldNumel = 0;
  }

  c8_newNumel = 1;
  for (c8_i = 0; c8_i < c8_emxArray->numDimensions; c8_i++) {
    c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c8_newNumel,
      (size_t)(uint32_T)c8_emxArray->size[c8_i], c8_srcLocation, (void *)c8_sp);
  }

  if (c8_newNumel > c8_emxArray->allocatedSize) {
    c8_newCapacity = c8_emxArray->allocatedSize;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = emlrtCallocMex((uint32_T)c8_newCapacity, sizeof(real_T));
    if (c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_emxArray->data != NULL) {
      memcpy(c8_newData, c8_emxArray->data, sizeof(real_T) * (uint32_T)
             c8_oldNumel);
      if (c8_emxArray->canFreeData) {
        emlrtFreeMex(c8_emxArray->data);
      }
    }

    c8_emxArray->data = (real_T *)c8_newData;
    c8_emxArray->allocatedSize = c8_newCapacity;
    c8_emxArray->canFreeData = true;
  }
}

static void c8_emxInit_real_T(SFc8_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_emxArray_real_T **c8_pEmxArray, int32_T c8_numDimensions,
  const emlrtRTEInfo *c8_srcLocation)
{
  c8_emxArray_real_T *c8_emxArray;
  int32_T c8_i;
  (void)chartInstance;
  *c8_pEmxArray = (c8_emxArray_real_T *)emlrtMallocMex(sizeof(c8_emxArray_real_T));
  if ((void *)*c8_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
  }

  c8_emxArray = *c8_pEmxArray;
  c8_emxArray->data = (real_T *)NULL;
  c8_emxArray->numDimensions = c8_numDimensions;
  c8_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c8_numDimensions);
  if ((void *)c8_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
  }

  c8_emxArray->allocatedSize = 0;
  c8_emxArray->canFreeData = true;
  for (c8_i = 0; c8_i < c8_numDimensions; c8_i++) {
    c8_emxArray->size[c8_i] = 0;
  }
}

static void c8_emxFree_real_T(SFc8_untitled1InstanceStruct *chartInstance,
  c8_emxArray_real_T **c8_pEmxArray)
{
  (void)chartInstance;
  if (*c8_pEmxArray != (c8_emxArray_real_T *)NULL) {
    if (((*c8_pEmxArray)->data != (real_T *)NULL) && (*c8_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c8_pEmxArray)->data);
    }

    emlrtFreeMex((*c8_pEmxArray)->size);
    emlrtFreeMex(*c8_pEmxArray);
    *c8_pEmxArray = (c8_emxArray_real_T *)NULL;
  }
}

static void init_dsm_address_info(SFc8_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_untitled1InstanceStruct *chartInstance)
{
  chartInstance->c8_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_IR1 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_y = (uint8_T (*)[83312])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_IR2 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_f_x = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_VIS1 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c8_VIS2 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_untitled1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4108022322U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(320667472U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2418775337U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4275863989U);
}

mxArray *sf_c8_untitled1_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,3);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c8_untitled1_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c8_untitled1_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_untitled1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wMjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/Efg"
    "8C7hdDcT+En1kcn5hcklmWGp9sEV+aV5JZkpOaYojwFwBVVBhO"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_untitled1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sXEYAB0E4tOcOAy8SKiDcZ";
}

static void sf_opaque_initialize_c8_untitled1(void *chartInstanceVar)
{
  initialize_params_c8_untitled1((SFc8_untitled1InstanceStruct*)
    chartInstanceVar);
  initialize_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c8_untitled1(void *chartInstanceVar)
{
  enable_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c8_untitled1(void *chartInstanceVar)
{
  disable_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c8_untitled1(void *chartInstanceVar)
{
  sf_gateway_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_untitled1(SimStruct* S)
{
  return get_sim_state_c8_untitled1((SFc8_untitled1InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_untitled1(SimStruct* S, const mxArray *st)
{
  set_sim_state_c8_untitled1((SFc8_untitled1InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_untitled1(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_untitled1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled1_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_untitled1((SFc8_untitled1InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_untitled1(void *chartInstanceVar)
{
  mdl_start_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c8_untitled1(void *chartInstanceVar)
{
  mdl_terminate_c8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc8_untitled1((SFc8_untitled1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_untitled1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_untitled1((SFc8_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc8_untitled1((SFc8_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_untitled1_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV91u00gUdqIWgQSoWq3Ym0Vwx97sqish1Kvd5ldEpKRat8ByU03HJ/Eo4xkzP2nzELwDT8D",
    "z8AxccY8EnLGdNHVsp20EYtFact2xv/PNOec7c2bi1Xp7Hl638d75yfOu4fM63nUvvTazcW3hTt",
    "9veA+y8Ws0EjbaJ4pE2qu8BIngH9CSW8Ok6ImhLIQxMQQFgiI2lsqUsWkWWc7EuGsFdXz6echo6",
    "IfS8qCJtiQYCD5FttiafeRpMwXUdAECEyppR2GXk9HcY2VOWiHQsbZRVQgajG9j55bes9ywmEPn",
    "FGhPaEPQY33mm2+IgZY5LQ3TRar9GVBGMWdEFEYbEu1DjAk2cBgH+HdgDQaVh9GQKNOEkExA99k",
    "44ZQC8pxM44djJoiRihHeiXjLGS77ts/Rnz0ZAK9ICPrWVEDGsWTClOvvdzHSjiDHHNpwbEflbD",
    "68sk78ZwxOQJXmbdiSE1BkBANROmmSkM5pota8SpZhhkXwjKgGRf00BKXVi5WjfYI6wQFalMEgC",
    "bKnDxSbYHpL2WzUc5W5asnYKBVbr4IlbJ0JVKkwZ+tS0SKc61LYgYz7MAGesLaJIdWwlLUYpzUL",
    "DiQm2JV3+WqwgqHwGawlRcAK5ZrkAEnfeYqN5TySWm1k1MLibff7y5+XYT1hQA0JhaIuoAjTgDl",
    "L0lvOFjDttEcgemUS94rAaYWsQnl6aEX7RKox5qSiiZyF4BQtBUZ6hFriSjjUuGiqYE7LVThKaA",
    "iBazCMwx4uG8QW5ES71tbAdTdhZtoGTRWLC1S1uOqwDXVcQU1jOBRjIU9EV8nIz3p8ml4ArDaiB",
    "BOjJvYvNe3i7EVSuP1s2zvbz25eYD+b2eWfvy3w1Ap4vIVnso8u4G/Uz+M3c/PWZ+/cldnvLtjf",
    "ys23kbN3uC1Xn/1Pvzz6+Puh9/nuH+/fjmv5+PN+1Jb8qHmz+d/UL3cOuJ2Nf5013PkCmizVrcM",
    "+XvBro4D/zgL/VjbWLzr/NprbnYdmQAeN6Y7/hLXpy5TvQ63a33rO39n7+67zY7UldapoL8gOKG",
    "5MbLpt5/W8tiIfN7L36fXh7/Xsf97N67ixwn4L/5vm6vfq89/fXc/+6nozfURc14AjunNkBTZJD",
    "sGf5+O6an1f1s77xnb/FT//z8vXj+8i+9bmFe1qa+6T38pu3fguu39/b/iq/u/l8FvfcRzrnqu+",
    "Nv6dd7lzz71s/Nf8J04rZDwoOO1mn/HoOiz6+gPU6Re9J609",
    ""
  };

  static char newstr [1249] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_untitled1(SimStruct *S)
{
  const char* newstr = sf_c8_untitled1_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(402541682U));
  ssSetChecksum1(S,(1429076790U));
  ssSetChecksum2(S,(773717760U));
  ssSetChecksum3(S,(23834346U));
}

static void mdlRTW_c8_untitled1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_untitled1(SimStruct *S)
{
  SFc8_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc8_untitled1InstanceStruct *)utMalloc(sizeof
    (SFc8_untitled1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_untitled1InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c8_untitled1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c8_untitled1;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_untitled1;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c8_untitled1;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_untitled1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_untitled1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c8_untitled1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c8_untitled1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c8_untitled1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c8_untitled1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_untitled1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c8_untitled1;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c8_JITStateAnimation,
    chartInstance->c8_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c8_untitled1(chartInstance);
}

void c8_untitled1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_untitled1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_untitled1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_untitled1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_untitled1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
