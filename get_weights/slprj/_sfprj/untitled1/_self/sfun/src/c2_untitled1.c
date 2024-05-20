/* Include files */

#include "untitled1_sfun.h"
#include "c2_untitled1.h"
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
static emlrtMCInfo c2_emlrtMCI = { 88, /* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 41,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "log",                               /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 83,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 26, /* lineNo */
  "Fea",                               /* fcnName */
  "E:\\ShiYan\\2.1\\Fea.m"             /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 17,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 18,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 23,/* lineNo */
  "metricsEdge_intensity",             /* fcnName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 9,/* lineNo */
  "SD",                                /* fcnName */
  "E:\\ShiYan\\2.1\\SD.m"              /* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 32,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 42,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 52,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 62,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 68,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 69,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 70,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 71,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 74,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 75,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 76,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 77,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 78,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 79,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 80,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 81,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 82,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 83,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 84,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 85,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 89,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 90,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 98,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 103,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 117,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 118,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 121,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 122,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 123,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 124,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 125,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 126,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 129,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 130,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 133,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 136,/* lineNo */
  "MATLAB Function",                   /* fcnName */
  "#untitled1:1"                       /* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 369,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 372,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 376,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 379,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 573,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 16,/* lineNo */
  "any",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 433,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 451,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 39,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 71,/* lineNo */
  "sub2ind",                           /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 464,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 473,/* lineNo */
  "imresize",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 61,/* lineNo */
  "fft2",                              /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\fft2.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 31,/* lineNo */
  "fft",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\fft.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 58,/* lineNo */
  "fft",                               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\fft.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 44,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 56,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 57,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 21,/* lineNo */
  "fftw",                              /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\fftw.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 15,/* lineNo */
  "MATLABFFTWCallback",                /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\+fft\\MATLABFFTWCallback.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 54,/* lineNo */
  "Custom1DFFTCallback",               /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\Custom1DFFTCallback.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 74,/* lineNo */
  "ifft2",                             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\datafun\\ifft2.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 871,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 62,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 120,/* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 849,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 80,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 732,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 734,/* lineNo */
  "padarray",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 923,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 997,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 1025,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 1037,/* lineNo */
  "imfilter",                          /* fcnName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 491,/* lineNo */
  31,                                  /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 578,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 579,/* lineNo */
  1,                                   /* colNo */
  "imresize",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\lib\\matlab\\images\\imresize.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 175,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 185,/* lineNo */
  38,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtDCInfo c2_emlrtDCI = { 98, /* lineNo */
  10,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_emlrtBCI = { 1,  /* iFirst */
  254,                                 /* iLast */
  98,                                  /* lineNo */
  10,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 98,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_b_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  98,                                  /* lineNo */
  12,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_c_emlrtDCI = { 100,/* lineNo */
  10,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  10,                                  /* colNo */
  "H",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_d_emlrtDCI = { 100,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  12,                                  /* colNo */
  "H",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_e_emlrtDCI = { 111,/* lineNo */
  12,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  111,                                 /* lineNo */
  12,                                  /* colNo */
  "I3",                                /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_f_emlrtDCI = { 111,/* lineNo */
  14,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  111,                                 /* lineNo */
  14,                                  /* colNo */
  "I3",                                /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  111,                                 /* lineNo */
  29,                                  /* colNo */
  "I33",                               /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_g_emlrtDCI = { 111,/* lineNo */
  29,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  111,                                 /* lineNo */
  29,                                  /* colNo */
  "I33",                               /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { 1,/* iFirst */
  83312,                               /* iLast */
  115,                                 /* lineNo */
  1,                                   /* colNo */
  "Ig",                                /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_h_emlrtDCI = { 115,/* lineNo */
  1,                                   /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_i_emlrtDCI = { 100,/* lineNo */
  30,                                  /* colNo */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "D",                                 /* aName */
  "MATLAB Function",                   /* fName */
  "#untitled1:1",                      /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_j_emlrtDCI = { 19,/* lineNo */
  16,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  19,                                  /* lineNo */
  16,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_k_emlrtDCI = { 19,/* lineNo */
  18,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  19,                                  /* lineNo */
  18,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_l_emlrtDCI = { 26,/* lineNo */
  16,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  26,                                  /* lineNo */
  16,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_m_emlrtDCI = { 26,/* lineNo */
  18,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  26,                                  /* lineNo */
  18,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_n_emlrtDCI = { 33,/* lineNo */
  15,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  15,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_o_emlrtDCI = { 33,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  17,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_p_emlrtDCI = { 16,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  16,                                  /* lineNo */
  17,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_q_emlrtDCI = { 16,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  16,                                  /* lineNo */
  19,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_r_emlrtDCI = { 23,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  23,                                  /* lineNo */
  17,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_s_emlrtDCI = { 23,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_u_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  23,                                  /* lineNo */
  19,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_t_emlrtDCI = { 30,/* lineNo */
  17,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  30,                                  /* lineNo */
  17,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_u_emlrtDCI = { 30,/* lineNo */
  19,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_w_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  30,                                  /* lineNo */
  19,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_x_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  12,                                  /* lineNo */
  15,                                  /* colNo */
  "Img",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_v_emlrtDCI = { 12,/* lineNo */
  15,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_y_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  12,                                  /* lineNo */
  25,                                  /* colNo */
  "Img",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_w_emlrtDCI = { 12,/* lineNo */
  25,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ab_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  13,                                  /* lineNo */
  9,                                   /* colNo */
  "A1",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_x_emlrtDCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_bb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  13,                                  /* lineNo */
  9,                                   /* colNo */
  "A1",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_cb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_y_emlrtDCI = { 18,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_db_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  18,                                  /* lineNo */
  13,                                  /* colNo */
  "A22",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_eb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_ab_emlrtDCI = { 15,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_fb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  15,                                  /* lineNo */
  13,                                  /* colNo */
  "A2",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_gb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_bb_emlrtDCI = { 25,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_hb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "A33",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_ib_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_cb_emlrtDCI = { 22,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_jb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  22,                                  /* lineNo */
  13,                                  /* colNo */
  "A3",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_kb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  32,                                  /* lineNo */
  12,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_db_emlrtDCI = { 32,/* lineNo */
  12,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_lb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  32,                                  /* lineNo */
  12,                                  /* colNo */
  "A44",                               /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_mb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_eb_emlrtDCI = { 29,/* lineNo */
  13,                                  /* colNo */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_nb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "A4",                                /* aName */
  "Fenk",                              /* fName */
  "E:\\ShiYan\\2.1\\Fenk.m",           /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_fb_emlrtDCI = { 10,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ob_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_gb_emlrtDCI = { 10,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_pb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  10,                                  /* lineNo */
  18,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_hb_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_qb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_ib_emlrtDCI = { 12,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_rb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  12,                                  /* lineNo */
  18,                                  /* colNo */
  "BB",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_jb_emlrtDCI = { 20,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_sb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  20,                                  /* lineNo */
  16,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_kb_emlrtDCI = { 20,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_tb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  20,                                  /* lineNo */
  18,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_lb_emlrtDCI = { 22,/* lineNo */
  16,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ub_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  22,                                  /* lineNo */
  16,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_mb_emlrtDCI = { 22,/* lineNo */
  18,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_vb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  22,                                  /* lineNo */
  18,                                  /* colNo */
  "DD",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_wb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_nb_emlrtDCI = { 9,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_xb_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  9,                                   /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_yb_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_ob_emlrtDCI = { 19,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ac_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  19,                                  /* lineNo */
  12,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  30,                                  /* lineNo */
  12,                                  /* colNo */
  "EE",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_pb_emlrtDCI = { 30,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_cc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  30,                                  /* lineNo */
  12,                                  /* colNo */
  "EE",                                /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_dc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  22,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_qb_emlrtDCI = { 33,/* lineNo */
  22,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ec_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  22,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_fc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  31,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_rb_emlrtDCI = { 33,/* lineNo */
  31,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_gc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  31,                                  /* colNo */
  "A",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_hc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_sb_emlrtDCI = { 33,/* lineNo */
  13,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_ic_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_jc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  31,                                  /* lineNo */
  21,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_tb_emlrtDCI = { 31,/* lineNo */
  21,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_kc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  31,                                  /* lineNo */
  21,                                  /* colNo */
  "B",                                 /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_lc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  31,                                  /* lineNo */
  12,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_ub_emlrtDCI = { 31,/* lineNo */
  12,                                  /* colNo */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_mc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  31,                                  /* lineNo */
  12,                                  /* colNo */
  "OUT",                               /* aName */
  "Fea",                               /* fName */
  "E:\\ShiYan\\2.1\\Fea.m",            /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_vb_emlrtDCI = { 23,/* lineNo */
  23,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_nc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  23,                                  /* colNo */
  "g",                                 /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c2_wb_emlrtDCI = { 23,/* lineNo */
  25,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_oc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  25,                                  /* colNo */
  "g",                                 /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c2_pc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_xb_emlrtDCI = { 23,/* lineNo */
  37,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_qc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  37,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_rc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  47,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_yb_emlrtDCI = { 23,/* lineNo */
  47,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_sc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  47,                                  /* colNo */
  "gx",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_tc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  59,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_ac_emlrtDCI = { 23,/* lineNo */
  59,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_uc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  59,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_vc_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  23,                                  /* lineNo */
  69,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_bc_emlrtDCI = { 23,/* lineNo */
  69,                                  /* colNo */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_wc_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  23,                                  /* lineNo */
  69,                                  /* colNo */
  "gy",                                /* aName */
  "metricsEdge_intensity",             /* fName */
  "E:\\ShiYan\\2.1\\metricsEdge_intensity.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_xc_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "A",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_cc_emlrtDCI = { 10,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_yc_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  10,                                  /* lineNo */
  16,                                  /* colNo */
  "A",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ad_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  11,                                  /* lineNo */
  16,                                  /* colNo */
  "B",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_dc_emlrtDCI = { 11,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_bd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  11,                                  /* lineNo */
  16,                                  /* colNo */
  "B",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cd_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "C",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_ec_emlrtDCI = { 12,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_dd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  12,                                  /* lineNo */
  16,                                  /* colNo */
  "C",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ed_emlrtBCI = { 1,/* iFirst */
  127,                                 /* iLast */
  13,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_fc_emlrtDCI = { 13,/* lineNo */
  16,                                  /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_fd_emlrtBCI = { 1,/* iFirst */
  164,                                 /* iLast */
  13,                                  /* lineNo */
  16,                                  /* colNo */
  "D",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_gd_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  14,                                  /* lineNo */
  9,                                   /* colNo */
  "F",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_gc_emlrtDCI = { 14,/* lineNo */
  9,                                   /* colNo */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_hd_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  14,                                  /* lineNo */
  9,                                   /* colNo */
  "F",                                 /* aName */
  "Inverse_Fenk",                      /* fName */
  "E:\\ShiYan\\2.1\\Inverse_Fenk.m",   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_id_emlrtBCI = { 1,/* iFirst */
  254,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_jd_emlrtBCI = { 1,/* iFirst */
  328,                                 /* iLast */
  100,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "E:\\Matlab_2021awin00\\MATLAB\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static const char_T c2_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
  'E', 'r', 'r', 'o', 'r' };

static const char_T c2_cv1[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
  'b', '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
  'R', 'a', 'n', 'g', 'e' };

/* Function Declarations */
static void initialize_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void initialize_params_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void enable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void disable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void c2_do_animation_call_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void ext_mode_exec_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void set_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance, const mxArray *c2_st);
static void sf_gateway_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_start_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_terminate_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance);
static void initSimStructsc2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance);
static void c2_Fenk(SFc2_untitled1InstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, uint8_T c2_Img[83312], real_T c2_A1[20828],
                    real_T c2_b_A2[20828], real_T c2_b_A3[20828], real_T
                    c2_b_A4[20828], real_T c2_b_A22[20828], real_T c2_b_A33
                    [20828], real_T c2_b_A44[20828]);
static void c2_Fea(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_A[20828], real_T c2_b_B[20828], real_T
                   c2_OUT[20828]);
static real_T c2_metricsEdge_intensity(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_fused[83312]);
static void c2_Inverse_Fenk(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_C1[20828], real_T c2_b_C2[20828], real_T c2_b_C3
  [20828], real_T c2_b_C4[20828], real_T c2_b_C22[20828], real_T c2_b_C33[20828],
  real_T c2_b_C44[20828], real_T c2_F[83312]);
static real_T c2_mod(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x);
static void c2_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_b_Ain[83312], uint8_T c2_Bout[83312]);
static void c2_contributions(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_check_forloop_overflow_error(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[83312], real_T c2_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[83312]);
static int32_T c2_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2);
static void c2_b_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2]);
static void c2_b_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, uint8_T c2_in_[83312], real_T c2_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[83312]);
static real_T c2_sumColumnB4(SFc2_untitled1InstanceStruct *chartInstance, real_T
  c2_g_x[20828], int32_T c2_vstart);
static real_T c2_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance, real_T
  c2_g_x[20828]);
static real_T c2_b_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x);
static void c2_log(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_g_x[83312], real_T c2_h_x[83312]);
static void c2_fft2(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x
                    [83312], creal_T c2_b_y[83312]);
static boolean_T c2_fltpower_domain_error(SFc2_untitled1InstanceStruct
  *chartInstance);
static void c2_ifft2(SFc2_untitled1InstanceStruct *chartInstance, creal_T
                     c2_g_x[83312], creal_T c2_b_y[83312]);
static void c2_exp(SFc2_untitled1InstanceStruct *chartInstance, creal_T c2_g_x
                   [83312], creal_T c2_h_x[83312]);
static real_T c2_maximum(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_g_x[83312]);
static real_T c2_minimum(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_g_x[83312]);
static real_T c2_mean(SFc2_untitled1InstanceStruct *chartInstance, real_T
                      c2_g_x[83312]);
static real_T c2_b_sumColumnB4(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312], int32_T c2_vstart);
static real_T c2_c_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312]);
static void c2_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_varargin_1[83312], real_T c2_b[83312]);
static real_T c2_sqrt(SFc2_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, real_T c2_g_x);
static void c2_padImage(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_a_tmp[83312], real_T c2_c_a[84480]);
static void c2_b_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_varargin_1[83312], real_T c2_b[83312]);
static void c2_b_mean(SFc2_untitled1InstanceStruct *chartInstance, real_T
                      c2_g_x[83312], real_T c2_b_y[328]);
static real_T c2_d_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312], int32_T c2_col);
static real_T c2_e_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[328]);
static void c2_power(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_c_a
                     [83312], real_T c2_b_y[83312]);
static void c2_sum(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x
                   [83312], real_T c2_b_y[328]);
static boolean_T c2_b_fltpower_domain_error(SFc2_untitled1InstanceStruct
  *chartInstance, real_T c2_c_a, real_T c2_b);
static void c2_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[83312]);
static void c2_b_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y
  [83312]);
static uint8_T c2_c_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled1, const char_T *c2_identifier);
static uint8_T c2_d_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_chart_data_browse_helper(SFc2_untitled1InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig);
static void c2_b_log(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_g_x[83312]);
static void c2_b_exp(SFc2_untitled1InstanceStruct *chartInstance, creal_T
                     c2_g_x[83312]);
static void c2_b_sqrt(SFc2_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, real_T *c2_g_x);
static void c2_emxEnsureCapacity_real_T(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation);
static void c2_emxInit_real_T(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation);
static void c2_emxFree_real_T(SFc2_untitled1InstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray);
static void init_dsm_address_info(SFc2_untitled1InstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_untitled1InstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c2_st, (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_untitled1 = 0U;
}

static void initialize_params_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_st;
  c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(2, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_y, 3, 0U, 1U, 0U,
    2, 254, 328), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y",
    &chartInstance->c2_is_active_c2_untitled1, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_b_y, 1, c2_d_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  uint8_T c2_uv[83312];
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)), "y",
                      c2_uv);
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    (*chartInstance->c2_y)[c2_i] = c2_uv[c2_i];
  }

  chartInstance->c2_is_active_c2_untitled1 = c2_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)), "is_active_c2_untitled1");
  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static void sf_gateway_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  static char_T c2_b_cv[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  static char_T c2_b_cv1[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a',
    'i', 'n', 'E', 'r', 'r', 'o', 'r' };

  static char_T c2_cv2[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  real_T c2_q_x[328];
  real_T c2_E_ir;
  real_T c2_E_vis;
  real_T c2_Eta;
  real_T c2_SD_B;
  real_T c2_SD_D;
  real_T c2_We;
  real_T c2_avg;
  real_T c2_b;
  real_T c2_b_b;
  real_T c2_b_img_mean;
  real_T c2_b_j;
  real_T c2_b_k;
  real_T c2_b_y;
  real_T c2_c_a;
  real_T c2_c_b;
  real_T c2_c_i;
  real_T c2_c_k;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d6;
  real_T c2_d7;
  real_T c2_d_a;
  real_T c2_d_b;
  real_T c2_d_k;
  real_T c2_e_a;
  real_T c2_e_k;
  real_T c2_e_y;
  real_T c2_f_a;
  real_T c2_f_k;
  real_T c2_g_a;
  real_T c2_g_x;
  real_T c2_h_a;
  real_T c2_h_x;
  real_T c2_h_y;
  real_T c2_i_a;
  real_T c2_i_x;
  real_T c2_i_y;
  real_T c2_img_mean;
  real_T c2_j_a;
  real_T c2_j_x;
  real_T c2_j_y;
  real_T c2_k;
  real_T c2_k_a;
  real_T c2_k_x;
  real_T c2_k_y;
  real_T c2_l_a;
  real_T c2_l_x;
  real_T c2_l_y;
  real_T c2_m_a;
  real_T c2_m_x;
  real_T c2_m_y;
  real_T c2_ma;
  real_T c2_mi;
  real_T c2_n_a;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_r_x;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_w_x;
  int32_T c2_b_i;
  int32_T c2_c_j;
  int32_T c2_d_i;
  int32_T c2_e_i;
  int32_T c2_f_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  uint8_T c2_u;
  boolean_T c2_covSaturation;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 4U, (real_T)
                      (*chartInstance->c2_VIS2)[c2_i]);
  }

  for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 3U, (real_T)
                      (*chartInstance->c2_VIS1)[c2_i1]);
  }

  covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 2U, *chartInstance->c2_f_x);
  for (c2_i2 = 0; c2_i2 < 83312; c2_i2++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 1U, (real_T)
                      (*chartInstance->c2_IR2)[c2_i2]);
  }

  for (c2_i3 = 0; c2_i3 < 83312; c2_i3++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 0U, (real_T)
                      (*chartInstance->c2_IR1)[c2_i3]);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  for (c2_i4 = 0; c2_i4 < 83312; c2_i4++) {
    chartInstance->c2_b_IR_1[c2_i4] = (*chartInstance->c2_IR1)[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 83312; c2_i5++) {
    chartInstance->c2_IR_2[c2_i5] = (*chartInstance->c2_IR2)[c2_i5];
  }

  c2_g_x = *chartInstance->c2_f_x;
  for (c2_i6 = 0; c2_i6 < 83312; c2_i6++) {
    chartInstance->c2_VIS_1[c2_i6] = (*chartInstance->c2_VIS1)[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 83312; c2_i7++) {
    chartInstance->c2_VIS_2[c2_i7] = (*chartInstance->c2_VIS2)[c2_i7];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 0U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 1,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 1U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 2,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 2U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 3,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 3U, 1.0, 1.0, -1, 4U, 0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 4,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 4U, c2_mod(chartInstance, 254.0), 1.0, -1, 0U, c2_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 5,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 5U, c2_mod(chartInstance, 328.0), 1.0, -1, 0U, c2_mod(chartInstance,
    328.0) == 1.0));
  c2_b_st.site = &c2_f_emlrtRSI;
  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_b_IR_1,
              chartInstance->c2_ir_1);
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 6,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 6U, c2_mod(chartInstance, 254.0), 1.0, -1, 0U, c2_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 7,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 7U, c2_mod(chartInstance, 328.0), 1.0, -1, 0U, c2_mod(chartInstance,
    328.0) == 1.0));
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_IR_2,
              chartInstance->c2_b_ir_2);
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 8,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 8U, c2_mod(chartInstance, 254.0), 1.0, -1, 0U, c2_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 9,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 9U, c2_mod(chartInstance, 328.0), 1.0, -1, 0U, c2_mod(chartInstance,
    328.0) == 1.0));
  c2_b_st.site = &c2_h_emlrtRSI;
  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_VIS_1,
              chartInstance->c2_IR_2);
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 10,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 10U, c2_mod(chartInstance, 254.0), 1.0, -1, 0U, c2_mod(chartInstance,
    254.0) == 1.0));
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 11,
                 covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 4U,
    0U, 11U, c2_mod(chartInstance, 328.0), 1.0, -1, 0U, c2_mod(chartInstance,
    328.0) == 1.0));
  c2_b_st.site = &c2_i_emlrtRSI;
  c2_imresize(chartInstance, &c2_b_st, chartInstance->c2_VIS_2,
              chartInstance->c2_b_IR_1);
  c2_b_st.site = &c2_j_emlrtRSI;
  c2_Fenk(chartInstance, &c2_b_st, chartInstance->c2_ir_1, chartInstance->c2_D2,
          chartInstance->c2_A2, chartInstance->c2_A3, chartInstance->c2_A4,
          chartInstance->c2_A22, chartInstance->c2_A33, chartInstance->c2_A44);
  c2_b_st.site = &c2_k_emlrtRSI;
  for (c2_i8 = 0; c2_i8 < 83312; c2_i8++) {
    chartInstance->c2_c_ir_2[c2_i8] = chartInstance->c2_b_ir_2[c2_i8];
  }

  c2_Fenk(chartInstance, &c2_b_st, chartInstance->c2_c_ir_2,
          chartInstance->c2_B1, chartInstance->c2_B2, chartInstance->c2_B3,
          chartInstance->c2_B4, chartInstance->c2_B22, chartInstance->c2_B33,
          chartInstance->c2_B44);
  c2_b_st.site = &c2_l_emlrtRSI;
  c2_Fenk(chartInstance, &c2_b_st, chartInstance->c2_IR_2, chartInstance->c2_D2,
          chartInstance->c2_C2, chartInstance->c2_C3, chartInstance->c2_C4,
          chartInstance->c2_C22, chartInstance->c2_C33, chartInstance->c2_C44);
  c2_b_st.site = &c2_m_emlrtRSI;
  for (c2_i9 = 0; c2_i9 < 83312; c2_i9++) {
    chartInstance->c2_c_IR_1[c2_i9] = chartInstance->c2_b_IR_1[c2_i9];
  }

  c2_Fenk(chartInstance, &c2_b_st, chartInstance->c2_c_IR_1,
          chartInstance->c2_D1, chartInstance->c2_D2, chartInstance->c2_D3,
          chartInstance->c2_D4, chartInstance->c2_D22, chartInstance->c2_D33,
          chartInstance->c2_D44);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A2, chartInstance->c2_B2,
         chartInstance->c2_P2);
  c2_b_st.site = &c2_o_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A3, chartInstance->c2_B3,
         chartInstance->c2_P3);
  c2_b_st.site = &c2_p_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A4, chartInstance->c2_B4,
         chartInstance->c2_P4);
  c2_b_st.site = &c2_q_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A22, chartInstance->c2_B22,
         chartInstance->c2_P22);
  c2_b_st.site = &c2_r_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A33, chartInstance->c2_B33,
         chartInstance->c2_B22);
  c2_b_st.site = &c2_s_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_A44, chartInstance->c2_B44,
         chartInstance->c2_A4);
  c2_b_st.site = &c2_t_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C2, chartInstance->c2_D2,
         chartInstance->c2_B4);
  c2_b_st.site = &c2_u_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C3, chartInstance->c2_D3,
         chartInstance->c2_A3);
  c2_b_st.site = &c2_v_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C4, chartInstance->c2_D4,
         chartInstance->c2_B3);
  c2_b_st.site = &c2_w_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C22, chartInstance->c2_D22,
         chartInstance->c2_A2);
  c2_b_st.site = &c2_x_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C33, chartInstance->c2_D33,
         chartInstance->c2_B2);
  c2_b_st.site = &c2_y_emlrtRSI;
  c2_Fea(chartInstance, &c2_b_st, chartInstance->c2_C44, chartInstance->c2_D44,
         chartInstance->c2_D2);
  for (c2_i10 = 0; c2_i10 < 83312; c2_i10++) {
    chartInstance->c2_Ig[c2_i10] = (real_T)chartInstance->c2_b_ir_2[c2_i10];
  }

  for (c2_i11 = 0; c2_i11 < 83312; c2_i11++) {
    chartInstance->c2_I1[c2_i11] = chartInstance->c2_Ig[c2_i11] + 1.0;
  }

  c2_b_st.site = &c2_ab_emlrtRSI;
  c2_b_log(chartInstance, &c2_b_st, chartInstance->c2_I1);
  c2_b_st.site = &c2_bb_emlrtRSI;
  c2_fft2(chartInstance, chartInstance->c2_I1, chartInstance->c2_FI);
  for (c2_b_i = 0; c2_b_i < 254; c2_b_i++) {
    c2_c_i = 1.0 + (real_T)c2_b_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 1);
    for (c2_j = 0; c2_j < 328; c2_j++) {
      c2_b_j = 1.0 + (real_T)c2_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 1);
      c2_b_st.site = &c2_cb_emlrtRSI;
      c2_c_a = c2_c_i - 127.0;
      c2_c_st.site = &c2_pc_emlrtRSI;
      c2_d_a = c2_c_a;
      c2_e_a = c2_d_a;
      c2_f_a = c2_e_a;
      c2_b_y = c2_f_a * c2_f_a;
      if (c2_fltpower_domain_error(chartInstance)) {
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_c_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_d_y)));
      }

      c2_b_st.site = &c2_cb_emlrtRSI;
      c2_g_a = c2_b_j - 164.0;
      c2_c_st.site = &c2_pc_emlrtRSI;
      c2_h_a = c2_g_a;
      c2_i_a = c2_h_a;
      c2_j_a = c2_i_a;
      c2_e_y = c2_j_a * c2_j_a;
      if (c2_fltpower_domain_error(chartInstance)) {
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
          31), false);
        sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_g_y)));
      }

      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_emlrtDCI, &c2_st);
      }

      c2_i19 = (int32_T)c2_c_i;
      if ((c2_i19 < 1) || (c2_i19 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 254, &c2_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_b_emlrtDCI, &c2_st);
      }

      c2_i21 = (int32_T)c2_b_j;
      if ((c2_i21 < 1) || (c2_i21 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 328, &c2_b_emlrtBCI, &c2_st);
      }

      chartInstance->c2_I1[(c2_i19 + 254 * (c2_i21 - 1)) - 1] = c2_b_y + c2_e_y;
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_i_emlrtDCI, &c2_st);
      }

      c2_i25 = (int32_T)c2_c_i;
      if ((c2_i25 < 1) || (c2_i25 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 254, &c2_j_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_i_emlrtDCI, &c2_st);
      }

      c2_i27 = (int32_T)c2_b_j;
      if ((c2_i27 < 1) || (c2_i27 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 328, &c2_k_emlrtBCI, &c2_st);
      }

      c2_o_x = 1.0 / chartInstance->c2_I1[(c2_i25 + 254 * (c2_i27 - 1)) - 1];
      c2_p_x = c2_o_x;
      c2_p_x = muDoubleScalarExp(c2_p_x);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_c_emlrtDCI, &c2_st);
      }

      c2_i30 = (int32_T)c2_c_i;
      if ((c2_i30 < 1) || (c2_i30 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i30, 1, 254, &c2_c_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_d_emlrtDCI, &c2_st);
      }

      c2_i32 = (int32_T)c2_b_j;
      if ((c2_i32 < 1) || (c2_i32 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 328, &c2_d_emlrtBCI, &c2_st);
      }

      chartInstance->c2_b_H[(c2_i30 + 254 * (c2_i32 - 1)) - 1] = 85.0 / (1.0 +
        c2_p_x);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 0, 0);
  for (c2_i12 = 0; c2_i12 < 83312; c2_i12++) {
    chartInstance->c2_H[c2_i12].re = chartInstance->c2_b_H[c2_i12] *
      chartInstance->c2_FI[c2_i12].re;
    chartInstance->c2_H[c2_i12].im = chartInstance->c2_b_H[c2_i12] *
      chartInstance->c2_FI[c2_i12].im;
  }

  c2_b_st.site = &c2_db_emlrtRSI;
  c2_ifft2(chartInstance, chartInstance->c2_H, chartInstance->c2_FI);
  c2_b_exp(chartInstance, chartInstance->c2_FI);
  for (c2_i13 = 0; c2_i13 < 83312; c2_i13++) {
    chartInstance->c2_b_H[c2_i13] = chartInstance->c2_FI[c2_i13].re;
  }

  for (c2_i14 = 0; c2_i14 < 83312; c2_i14++) {
    chartInstance->c2_b_H[c2_i14] /= 1.0E+144;
  }

  for (c2_i15 = 0; c2_i15 < 83312; c2_i15++) {
    chartInstance->c2_I1[c2_i15] = chartInstance->c2_b_H[c2_i15];
  }

  c2_ma = c2_maximum(chartInstance, &c2_st, chartInstance->c2_I1);
  for (c2_i16 = 0; c2_i16 < 83312; c2_i16++) {
    chartInstance->c2_I1[c2_i16] = chartInstance->c2_b_H[c2_i16];
  }

  c2_mi = c2_minimum(chartInstance, &c2_st, chartInstance->c2_I1);
  for (c2_d_i = 0; c2_d_i < 254; c2_d_i++) {
    c2_c_i = 1.0 + (real_T)c2_d_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 1);
    for (c2_c_j = 0; c2_c_j < 328; c2_c_j++) {
      c2_b_j = 1.0 + (real_T)c2_c_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 3, 1);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_g_emlrtDCI, &c2_st);
      }

      c2_i18 = (int32_T)c2_c_i;
      if ((c2_i18 < 1) || (c2_i18 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 254, &c2_g_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_g_emlrtDCI, &c2_st);
      }

      c2_i20 = (int32_T)c2_b_j;
      if ((c2_i20 < 1) || (c2_i20 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 328, &c2_h_emlrtBCI, &c2_st);
      }

      c2_m_x = 255.0 * (chartInstance->c2_b_H[(c2_i18 + 254 * (c2_i20 - 1)) - 1]
                        - c2_mi) / (c2_ma - c2_mi);
      c2_n_x = c2_m_x;
      c2_n_x = muDoubleScalarRound(c2_n_x);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_e_emlrtDCI, &c2_st);
      }

      c2_i26 = (int32_T)c2_c_i;
      if ((c2_i26 < 1) || (c2_i26 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 254, &c2_e_emlrtBCI, &c2_st);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_f_emlrtDCI, &c2_st);
      }

      c2_i28 = (int32_T)c2_b_j;
      if ((c2_i28 < 1) || (c2_i28 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 328, &c2_f_emlrtBCI, &c2_st);
      }

      chartInstance->c2_I1[(c2_i26 + 254 * (c2_i28 - 1)) - 1] = c2_n_x;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 4U, 0, 2, 0);
  for (c2_i17 = 0; c2_i17 < 83312; c2_i17++) {
    chartInstance->c2_b_I1[c2_i17] = chartInstance->c2_I1[c2_i17];
  }

  c2_h_x = c2_mean(chartInstance, chartInstance->c2_b_I1);
  c2_i_x = c2_h_x;
  c2_j_x = c2_i_x;
  c2_k_x = c2_j_x;
  c2_l_x = c2_k_x;
  c2_avg = c2_b_sumColumnB(chartInstance, c2_l_x);
  c2_e_i = 0;
  while (c2_e_i <= 83311) {
    c2_e_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  c2_f_i = 0;
  while (c2_f_i <= 83311) {
    if (chartInstance->c2_I1[c2_f_i] < c2_avg) {
      c2_d = (real_T)(c2_f_i + 1);
      if (c2_d != (real_T)(int32_T)muDoubleScalarFloor(c2_d)) {
        emlrtIntegerCheckR2012b(c2_d, &c2_h_emlrtDCI, &c2_st);
      }

      c2_i24 = (int32_T)muDoubleScalarFloor(c2_d);
      if ((c2_i24 < 1) || (c2_i24 > 83312)) {
        emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 83312, &c2_i_emlrtBCI, &c2_st);
      }

      chartInstance->c2_Ig[c2_i24 - 1] = 0.0;
    }

    c2_f_i++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  for (c2_i22 = 0; c2_i22 < 83312; c2_i22++) {
    chartInstance->c2_ir_2[c2_i22] = (real_T)chartInstance->c2_b_ir_2[c2_i22];
  }

  c2_b_st.site = &c2_eb_emlrtRSI;
  c2_E_ir = c2_metricsEdge_intensity(chartInstance, &c2_b_st,
    chartInstance->c2_ir_2);
  for (c2_i23 = 0; c2_i23 < 83312; c2_i23++) {
    chartInstance->c2_IR_1[c2_i23] = (real_T)chartInstance->c2_b_IR_1[c2_i23];
  }

  c2_b_st.site = &c2_fb_emlrtRSI;
  c2_E_vis = c2_metricsEdge_intensity(chartInstance, &c2_b_st,
    chartInstance->c2_IR_1);
  c2_We = 0.5 * c2_E_ir / (c2_E_ir + c2_E_vis);
  c2_b_st.site = &c2_gb_emlrtRSI;
  c2_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d1 = 1.0 - c2_k;
  for (c2_i29 = 0; c2_i29 < 20828; c2_i29++) {
    chartInstance->c2_P2[c2_i29] = c2_k * chartInstance->c2_P2[c2_i29] + c2_d1 *
      chartInstance->c2_B4[c2_i29];
  }

  c2_b_st.site = &c2_hb_emlrtRSI;
  c2_b_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d2 = 1.0 - c2_b_k;
  for (c2_i31 = 0; c2_i31 < 20828; c2_i31++) {
    chartInstance->c2_P3[c2_i31] = c2_b_k * chartInstance->c2_P3[c2_i31] + c2_d2
      * chartInstance->c2_A3[c2_i31];
  }

  c2_b_st.site = &c2_ib_emlrtRSI;
  c2_c_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d3 = 1.0 - c2_c_k;
  for (c2_i33 = 0; c2_i33 < 20828; c2_i33++) {
    chartInstance->c2_P4[c2_i33] = c2_c_k * chartInstance->c2_P4[c2_i33] + c2_d3
      * chartInstance->c2_B3[c2_i33];
  }

  c2_b_st.site = &c2_jb_emlrtRSI;
  c2_d_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d4 = 1.0 - c2_d_k;
  for (c2_i34 = 0; c2_i34 < 20828; c2_i34++) {
    chartInstance->c2_P22[c2_i34] = c2_d_k * chartInstance->c2_P22[c2_i34] +
      c2_d4 * chartInstance->c2_A2[c2_i34];
  }

  c2_b_st.site = &c2_kb_emlrtRSI;
  c2_e_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d5 = 1.0 - c2_e_k;
  for (c2_i35 = 0; c2_i35 < 20828; c2_i35++) {
    chartInstance->c2_B22[c2_i35] = c2_e_k * chartInstance->c2_B22[c2_i35] +
      c2_d5 * chartInstance->c2_B2[c2_i35];
  }

  c2_b_st.site = &c2_lb_emlrtRSI;
  c2_f_k = c2_We;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 3, 0);
  c2_d6 = 1.0 - c2_f_k;
  for (c2_i36 = 0; c2_i36 < 20828; c2_i36++) {
    chartInstance->c2_A4[c2_i36] = c2_f_k * chartInstance->c2_A4[c2_i36] + c2_d6
      * chartInstance->c2_D2[c2_i36];
  }

  c2_b_st.site = &c2_mb_emlrtRSI;
  for (c2_i37 = 0; c2_i37 < 83312; c2_i37++) {
    chartInstance->c2_I1[c2_i37] = (real_T)chartInstance->c2_b_ir_2[c2_i37];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 4, 0);
  for (c2_i38 = 0; c2_i38 < 83312; c2_i38++) {
    chartInstance->c2_c_I1[c2_i38] = chartInstance->c2_I1[c2_i38];
  }

  c2_b_mean(chartInstance, chartInstance->c2_c_I1, c2_q_x);
  c2_h_y = c2_e_sumColumnB(chartInstance, c2_q_x);
  c2_img_mean = c2_h_y / 328.0;
  for (c2_i39 = 0; c2_i39 < 83312; c2_i39++) {
    chartInstance->c2_d_I1[c2_i39] = chartInstance->c2_I1[c2_i39] - c2_img_mean;
  }

  c2_power(chartInstance, chartInstance->c2_d_I1, chartInstance->c2_I1);
  c2_sum(chartInstance, chartInstance->c2_I1, c2_q_x);
  c2_i_y = c2_e_sumColumnB(chartInstance, c2_q_x);
  c2_SD_B = c2_i_y / 83312.0;
  c2_c_st.site = &c2_e_emlrtRSI;
  c2_b_sqrt(chartInstance, &c2_c_st, &c2_SD_B);
  c2_b_st.site = &c2_nb_emlrtRSI;
  for (c2_i40 = 0; c2_i40 < 83312; c2_i40++) {
    chartInstance->c2_I1[c2_i40] = (real_T)chartInstance->c2_b_IR_1[c2_i40];
  }

  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 4, 0);
  for (c2_i41 = 0; c2_i41 < 83312; c2_i41++) {
    chartInstance->c2_e_I1[c2_i41] = chartInstance->c2_I1[c2_i41];
  }

  c2_b_mean(chartInstance, chartInstance->c2_e_I1, c2_q_x);
  c2_j_y = c2_e_sumColumnB(chartInstance, c2_q_x);
  c2_b_img_mean = c2_j_y / 328.0;
  for (c2_i42 = 0; c2_i42 < 83312; c2_i42++) {
    chartInstance->c2_f_I1[c2_i42] = chartInstance->c2_I1[c2_i42] -
      c2_b_img_mean;
  }

  c2_power(chartInstance, chartInstance->c2_f_I1, chartInstance->c2_I1);
  c2_sum(chartInstance, chartInstance->c2_I1, c2_q_x);
  c2_k_y = c2_e_sumColumnB(chartInstance, c2_q_x);
  c2_SD_D = c2_k_y / 83312.0;
  c2_c_st.site = &c2_e_emlrtRSI;
  c2_b_sqrt(chartInstance, &c2_c_st, &c2_SD_D);
  c2_b_st.site = &c2_ob_emlrtRSI;
  c2_k_a = (c2_SD_B - c2_SD_D) / (c2_SD_B + c2_SD_D);
  c2_r_x = c2_SD_B - c2_SD_D;
  c2_s_x = c2_r_x;
  c2_t_x = c2_s_x;
  c2_l_y = muDoubleScalarAbs(c2_t_x);
  c2_b = c2_l_y / (c2_SD_B - c2_SD_D);
  c2_c_st.site = &c2_pc_emlrtRSI;
  c2_l_a = c2_k_a;
  c2_b_b = c2_b;
  c2_m_a = c2_l_a;
  c2_c_b = c2_b_b;
  c2_n_a = c2_m_a;
  c2_d_b = c2_c_b;
  c2_m_y = muDoubleScalarPower(c2_n_a, c2_d_b);
  if (c2_b_fltpower_domain_error(chartInstance, c2_l_a, c2_b_b)) {
    c2_n_y = NULL;
    sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c2_o_y = NULL;
    sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv2, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_n_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 1U, 14, c2_o_y)));
  }

  c2_u_x = c2_m_y;
  c2_Eta = c2_u_x;
  c2_Eta = muDoubleScalarExp(c2_Eta);
  c2_v_x = c2_g_x + 0.5 * c2_Eta;
  c2_w_x = c2_g_x + 0.5;
  for (c2_i43 = 0; c2_i43 < 20828; c2_i43++) {
    chartInstance->c2_B1[c2_i43] = chartInstance->c2_B1[c2_i43] * c2_v_x +
      chartInstance->c2_D1[c2_i43] * c2_w_x;
  }

  c2_b_st.site = &c2_pb_emlrtRSI;
  c2_Inverse_Fenk(chartInstance, &c2_b_st, chartInstance->c2_B1,
                  chartInstance->c2_P2, chartInstance->c2_P3,
                  chartInstance->c2_P4, chartInstance->c2_P22,
                  chartInstance->c2_B22, chartInstance->c2_A4,
                  chartInstance->c2_I1);
  for (c2_i44 = 0; c2_i44 < 83312; c2_i44++) {
    c2_d7 = muDoubleScalarRound(chartInstance->c2_I1[c2_i44] +
      chartInstance->c2_Ig[c2_i44]);
    c2_covSaturation = false;
    if (c2_d7 < 256.0) {
      if (c2_d7 >= 0.0) {
        c2_u = (uint8_T)c2_d7;
      } else {
        c2_covSaturation = true;
        c2_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 2542, 11);
      }
    } else if (c2_d7 >= 256.0) {
      c2_covSaturation = true;
      c2_u = MAX_uint8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 2542, 11);
    } else {
      c2_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 4, 0, 0, 0,
      c2_covSaturation);
    (*chartInstance->c2_y)[c2_i44] = c2_u;
  }

  c2_do_animation_call_c2_untitled1(chartInstance);
  for (c2_i45 = 0; c2_i45 < 83312; c2_i45++) {
    covrtSigUpdateFcn(chartInstance->c2_covrtInstance, 5U, (real_T)
                      (*chartInstance->c2_y)[c2_i45]);
  }
}

static void mdl_start_c2_untitled1(SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  static const int32_T c2_b_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c2_c_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c2_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c2_b_condTxtEndIdx[2] = { 497, 513 };

  static const int32_T c2_b_condTxtStartIdx[2] = { 484, 499 };

  static const int32_T c2_c_condTxtEndIdx[2] = { 680, 696 };

  static const int32_T c2_c_condTxtStartIdx[2] = { 667, 682 };

  static const int32_T c2_condTxtEndIdx[2] = { 313, 329 };

  static const int32_T c2_condTxtStartIdx[2] = { 300, 315 };

  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  chartInstance->c2_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c2_RuntimeVar,
    &chartInstance->c2_IsDebuggerActive,
    &chartInstance->c2_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c2_mlFcnLineNumber, &chartInstance->c2_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    16U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 12U, 0U,
                  1U, 0U, 4U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 2559);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 2542,
    -1, 2553);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 44, 60, 85, 107);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 108, 124, 149,
                    171);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 172, 189, 216,
                    240);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 241, 258, 285,
                    309);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 344, 361, -1,
                    382);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 383, 400, -1,
                    421);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 503, 520, -1,
                    541);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 542, 559, -1,
                    580);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 663, 680, -1,
                    701);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 702, 719, -1,
                    740);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 826, 843, -1,
                    864);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 865, 882, -1,
                    903);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 1563, 1572,
                     1749);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 1576, 1585,
                     1745);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 1852, 1861,
                     1939);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 1866, 1875,
                     1935);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 47, 60,
    -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 1U, 111,
    124, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 2U, 175,
    189, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 3U, 244,
    258, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 4U, 347,
    361, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 5U, 386,
    400, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 6U, 506,
    520, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 7U, 545,
    559, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 8U, 666,
    680, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 9U, 705,
    719, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 10U, 829,
    843, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 11U, 868,
    882, -1, 0U);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "E:/ShiYan/2.1/Fenk.m", 14U,
                  0U, 1U, 0U, 3U, 0U, 6U, 0U, 2U, 0U, 6U, 3U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, "Fenk", 0, -1,
                     851);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 350,
    -1, 363);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 423,
    -1, 436);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 2U, 534,
    -1, 547);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 3U, 607,
    -1, 620);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 4U, 717,
    -1, 730);
  covrtEmlSaturationInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 5U, 788,
    -1, 801);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 297, 329, 397,
                    472);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 481, 513, 581,
                    656);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 2U, 664, 696, 763,
                    835);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 201, 212, 847);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 217, 228, 843);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 300, 329, 2U,
                      0U, c2_condTxtStartIdx, c2_condTxtEndIdx, 3U,
                      c2_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 484, 513, 2U,
                      2U, c2_b_condTxtStartIdx, c2_b_condTxtEndIdx, 3U,
                      c2_b_postfixPredicateTree);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 2U, 667, 696, 2U,
                      4U, c2_c_condTxtStartIdx, c2_c_condTxtEndIdx, 3U,
                      c2_c_postfixPredicateTree);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 0U, 300,
    313, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 1U, 315,
    329, 0, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 2U, 484,
    497, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 3U, 499,
    513, 0, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 4U, 667,
    680, 0, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 0U, 5U, 682,
    696, 0, 0U);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "E:/ShiYan/2.1/Fea.m", 14U,
                  1U, 1U, 0U, 3U, 0U, 0U, 0U, 6U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 0U, "Fea", 0, -1,
                     570);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 0U, 162, 174, 206,
                    245);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 1U, 295, 307, 339,
                    378);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 2U, 449, 462, 499,
                    553);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 0U, 126, 137, 257);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 1U, 142, 153, 253);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 2U, 259, 270, 390);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 3U, 275, 286, 386);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 4U, 413, 424, 565);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 5U, 429, 440, 561);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 0U, 165,
    174, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 1U, 298,
    307, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 14U, 1U, 2U, 452,
    462, -1, 0U);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "E:/ShiYan/2.1/metricsEdge_intensity.m", 14U, 2U, 1U, 0U, 0U,
                  0U, 0U, 0U, 3U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 2U, 0U,
                     "metricsEdge_intensity", 344, -1, 922);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 2U, 0U, 676, 689, 879);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 2U, 1U, 703, 716, 866);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 2U, 2U, 734, 747, 849);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "E:/ShiYan/2.1/Fuse_d.m", 14U,
                  3U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 3U, 0U, "Fuse_d", 0,
                     -1, 229);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "E:/ShiYan/2.1/SD.m", 14U, 4U,
                  1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 4U, 0U, "SD", 0, -1,
                     265);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance,
                  "E:/ShiYan/2.1/Inverse_Fenk.m", 14U, 5U, 1U, 0U, 0U, 0U, 0U,
                  0U, 2U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 14U, 5U, 0U,
                     "Inverse_Fenk", 0, -1, 299);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 5U, 0U, 130, 141, 295);
  covrtEmlForInitFcn(chartInstance->c2_covrtInstance, 14U, 5U, 1U, 146, 157, 291);
}

static void mdl_cleanup_runtime_resources_c2_untitled1
  (SFc2_untitled1InstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c2_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void initSimStructsc2_untitled1(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_Fenk(SFc2_untitled1InstanceStruct *chartInstance, const
                    emlrtStack *c2_sp, uint8_T c2_Img[83312], real_T c2_A1[20828],
                    real_T c2_b_A2[20828], real_T c2_b_A3[20828], real_T
                    c2_b_A4[20828], real_T c2_b_A22[20828], real_T c2_b_A33
                    [20828], real_T c2_b_A44[20828])
{
  real_T c2_b_i;
  real_T c2_b_j;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  int32_T c2_c_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  uint32_T c2_b_q0;
  uint32_T c2_b_qY;
  uint32_T c2_c_q0;
  uint32_T c2_c_qY;
  uint32_T c2_d_q0;
  uint32_T c2_d_qY;
  uint32_T c2_e_q0;
  uint32_T c2_e_qY;
  uint32_T c2_f_q0;
  uint32_T c2_f_qY;
  uint32_T c2_q0;
  uint32_T c2_qY;
  uint32_T c2_u;
  uint32_T c2_u1;
  uint32_T c2_u2;
  uint32_T c2_u3;
  uint32_T c2_u4;
  uint32_T c2_u5;
  uint8_T c2_T[4];
  boolean_T c2_b_covSaturation;
  boolean_T c2_c_covSaturation;
  boolean_T c2_covSaturation;
  boolean_T c2_d_covSaturation;
  boolean_T c2_e_covSaturation;
  boolean_T c2_f_covSaturation;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 0, 0);
  for (c2_i = 0; c2_i < 127; c2_i++) {
    c2_b_i = 1.0 + (real_T)c2_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 0, 1);
    for (c2_j = 0; c2_j < 164; c2_j++) {
      c2_b_j = 1.0 + (real_T)c2_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 1, 1);
      c2_d = 2.0 * c2_b_i;
      c2_d1 = 2.0 * c2_b_j;
      for (c2_c_i = 0; c2_c_i < 2; c2_c_i++) {
        for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
          c2_d2 = c2_d + (real_T)(int32_T)(-1.0 + (real_T)c2_i1);
          if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
            emlrtIntegerCheckR2012b(c2_d2, &c2_v_emlrtDCI, (void *)c2_sp);
          }

          c2_i3 = (int32_T)c2_d2;
          if ((c2_i3 < 1) || (c2_i3 > 254)) {
            emlrtDynamicBoundsCheckR2012b(c2_i3, 1, 254, &c2_x_emlrtBCI, (void *)
              c2_sp);
          }

          c2_d3 = c2_d1 + (real_T)(int32_T)(-1.0 + (real_T)c2_c_i);
          if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
            emlrtIntegerCheckR2012b(c2_d3, &c2_w_emlrtDCI, (void *)c2_sp);
          }

          c2_i5 = (int32_T)c2_d3;
          if ((c2_i5 < 1) || (c2_i5 > 328)) {
            emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 328, &c2_y_emlrtBCI, (void *)
              c2_sp);
          }

          c2_T[c2_i1 + (c2_c_i << 1)] = c2_Img[(c2_i3 + 254 * (c2_i5 - 1)) - 1];
        }
      }

      if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
        emlrtIntegerCheckR2012b(c2_b_i, &c2_x_emlrtDCI, (void *)c2_sp);
      }

      c2_i2 = (int32_T)c2_b_i;
      if ((c2_i2 < 1) || (c2_i2 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i2, 1, 127, &c2_ab_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_x_emlrtDCI, (void *)c2_sp);
      }

      c2_i4 = (int32_T)c2_b_j;
      if ((c2_i4 < 1) || (c2_i4 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 164, &c2_bb_emlrtBCI, (void *)
          c2_sp);
      }

      c2_A1[(c2_i2 + 127 * (c2_i4 - 1)) - 1] = (real_T)c2_T[0];
      if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 14U, 0, 0,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c2_covrtInstance, 14U, 0U, 0U,
                            (real_T)c2_T[2], (real_T)c2_T[0], 0, 4U, c2_T[2] >
                            c2_T[0])) || covrtEmlCondEval
          (chartInstance->c2_covrtInstance, 14U, 0, 1,
           covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 14U, 0U,
            1U, (real_T)c2_T[2], (real_T)c2_T[0], 0, 0U, c2_T[0] == c2_T[2]))) {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 0, true);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 0, true);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_ab_emlrtDCI, (void *)c2_sp);
        }

        c2_i7 = (int32_T)c2_b_i;
        if ((c2_i7 < 1) || (c2_i7 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 127, &c2_eb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_ab_emlrtDCI, (void *)c2_sp);
        }

        c2_i9 = (int32_T)c2_b_j;
        if ((c2_i9 < 1) || (c2_i9 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 164, &c2_fb_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_q0 = c2_T[2];
        c2_b_qY = c2_b_q0 - (uint32_T)c2_T[0];
        c2_b_covSaturation = false;
        if (c2_b_qY > c2_b_q0) {
          c2_b_covSaturation = true;
          c2_b_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u1 = c2_b_qY;
        if (c2_u1 > 255U) {
          c2_b_covSaturation = true;
          c2_u1 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 0, 0,
          c2_b_covSaturation);
        c2_b_A2[(c2_i7 + 127 * (c2_i9 - 1)) - 1] = (real_T)(uint8_T)c2_u1;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_p_emlrtDCI, (void *)c2_sp);
        }

        c2_i11 = (int32_T)c2_b_i;
        if ((c2_i11 < 1) || (c2_i11 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 127, &c2_r_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_q_emlrtDCI, (void *)c2_sp);
        }

        c2_i13 = (int32_T)c2_b_j;
        if ((c2_i13 < 1) || (c2_i13 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i13, 1, 164, &c2_s_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A22[(c2_i11 + 127 * (c2_i13 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 0, false);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 0, false);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_y_emlrtDCI, (void *)c2_sp);
        }

        c2_i6 = (int32_T)c2_b_i;
        if ((c2_i6 < 1) || (c2_i6 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 127, &c2_cb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_y_emlrtDCI, (void *)c2_sp);
        }

        c2_i8 = (int32_T)c2_b_j;
        if ((c2_i8 < 1) || (c2_i8 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 164, &c2_db_emlrtBCI, (void *)
            c2_sp);
        }

        c2_q0 = c2_T[0];
        c2_qY = c2_q0 - (uint32_T)c2_T[2];
        c2_covSaturation = false;
        if (c2_qY > c2_q0) {
          c2_covSaturation = true;
          c2_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u = c2_qY;
        if (c2_u > 255U) {
          c2_covSaturation = true;
          c2_u = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 1, 0,
          c2_covSaturation);
        c2_b_A22[(c2_i6 + 127 * (c2_i8 - 1)) - 1] = (real_T)(uint8_T)c2_u;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_j_emlrtDCI, (void *)c2_sp);
        }

        c2_i10 = (int32_T)c2_b_i;
        if ((c2_i10 < 1) || (c2_i10 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 127, &c2_l_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_k_emlrtDCI, (void *)c2_sp);
        }

        c2_i12 = (int32_T)c2_b_j;
        if ((c2_i12 < 1) || (c2_i12 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 164, &c2_m_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A2[(c2_i10 + 127 * (c2_i12 - 1)) - 1] = 0.0;
      }

      if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 14U, 0, 2,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c2_covrtInstance, 14U, 0U, 2U,
                            (real_T)c2_T[1], (real_T)c2_T[0], 0, 4U, c2_T[1] >
                            c2_T[0])) || covrtEmlCondEval
          (chartInstance->c2_covrtInstance, 14U, 0, 3,
           covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 14U, 0U,
            3U, (real_T)c2_T[1], (real_T)c2_T[0], 0, 0U, c2_T[0] == c2_T[1]))) {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 1, true);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 1, true);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_cb_emlrtDCI, (void *)c2_sp);
        }

        c2_i15 = (int32_T)c2_b_i;
        if ((c2_i15 < 1) || (c2_i15 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 127, &c2_ib_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_cb_emlrtDCI, (void *)c2_sp);
        }

        c2_i17 = (int32_T)c2_b_j;
        if ((c2_i17 < 1) || (c2_i17 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 164, &c2_jb_emlrtBCI, (void *)
            c2_sp);
        }

        c2_d_q0 = c2_T[1];
        c2_d_qY = c2_d_q0 - (uint32_T)c2_T[0];
        c2_d_covSaturation = false;
        if (c2_d_qY > c2_d_q0) {
          c2_d_covSaturation = true;
          c2_d_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u3 = c2_d_qY;
        if (c2_u3 > 255U) {
          c2_d_covSaturation = true;
          c2_u3 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 2, 0,
          c2_d_covSaturation);
        c2_b_A3[(c2_i15 + 127 * (c2_i17 - 1)) - 1] = (real_T)(uint8_T)c2_u3;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_r_emlrtDCI, (void *)c2_sp);
        }

        c2_i19 = (int32_T)c2_b_i;
        if ((c2_i19 < 1) || (c2_i19 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 127, &c2_t_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_s_emlrtDCI, (void *)c2_sp);
        }

        c2_i21 = (int32_T)c2_b_j;
        if ((c2_i21 < 1) || (c2_i21 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 164, &c2_u_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A33[(c2_i19 + 127 * (c2_i21 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 1, false);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 1, false);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_bb_emlrtDCI, (void *)c2_sp);
        }

        c2_i14 = (int32_T)c2_b_i;
        if ((c2_i14 < 1) || (c2_i14 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 127, &c2_gb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_bb_emlrtDCI, (void *)c2_sp);
        }

        c2_i16 = (int32_T)c2_b_j;
        if ((c2_i16 < 1) || (c2_i16 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 164, &c2_hb_emlrtBCI, (void *)
            c2_sp);
        }

        c2_c_q0 = c2_T[0];
        c2_c_qY = c2_c_q0 - (uint32_T)c2_T[1];
        c2_c_covSaturation = false;
        if (c2_c_qY > c2_c_q0) {
          c2_c_covSaturation = true;
          c2_c_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u2 = c2_c_qY;
        if (c2_u2 > 255U) {
          c2_c_covSaturation = true;
          c2_u2 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 3, 0,
          c2_c_covSaturation);
        c2_b_A33[(c2_i14 + 127 * (c2_i16 - 1)) - 1] = (real_T)(uint8_T)c2_u2;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_l_emlrtDCI, (void *)c2_sp);
        }

        c2_i18 = (int32_T)c2_b_i;
        if ((c2_i18 < 1) || (c2_i18 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 127, &c2_n_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_m_emlrtDCI, (void *)c2_sp);
        }

        c2_i20 = (int32_T)c2_b_j;
        if ((c2_i20 < 1) || (c2_i20 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 164, &c2_o_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A3[(c2_i18 + 127 * (c2_i20 - 1)) - 1] = 0.0;
      }

      if (covrtEmlCondEval(chartInstance->c2_covrtInstance, 14U, 0, 4,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c2_covrtInstance, 14U, 0U, 4U,
                            (real_T)c2_T[3], (real_T)c2_T[0], 0, 4U, c2_T[3] >
                            c2_T[0])) || covrtEmlCondEval
          (chartInstance->c2_covrtInstance, 14U, 0, 5,
           covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance, 14U, 0U,
            5U, (real_T)c2_T[3], (real_T)c2_T[0], 0, 0U, c2_T[0] == c2_T[3]))) {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 2, true);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 2, true);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_eb_emlrtDCI, (void *)c2_sp);
        }

        c2_i23 = (int32_T)c2_b_i;
        if ((c2_i23 < 1) || (c2_i23 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 127, &c2_mb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_eb_emlrtDCI, (void *)c2_sp);
        }

        c2_i25 = (int32_T)c2_b_j;
        if ((c2_i25 < 1) || (c2_i25 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 164, &c2_nb_emlrtBCI, (void *)
            c2_sp);
        }

        c2_f_q0 = c2_T[3];
        c2_f_qY = c2_f_q0 - (uint32_T)c2_T[0];
        c2_f_covSaturation = false;
        if (c2_f_qY > c2_f_q0) {
          c2_f_covSaturation = true;
          c2_f_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u5 = c2_f_qY;
        if (c2_u5 > 255U) {
          c2_f_covSaturation = true;
          c2_u5 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 4, 0,
          c2_f_covSaturation);
        c2_b_A4[(c2_i23 + 127 * (c2_i25 - 1)) - 1] = (real_T)(uint8_T)c2_u5;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_t_emlrtDCI, (void *)c2_sp);
        }

        c2_i27 = (int32_T)c2_b_i;
        if ((c2_i27 < 1) || (c2_i27 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 127, &c2_v_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_u_emlrtDCI, (void *)c2_sp);
        }

        c2_i29 = (int32_T)c2_b_j;
        if ((c2_i29 < 1) || (c2_i29 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 164, &c2_w_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A44[(c2_i27 + 127 * (c2_i29 - 1)) - 1] = 0.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 14U, 0, 2, false);
        covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 0, 2, false);
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_db_emlrtDCI, (void *)c2_sp);
        }

        c2_i22 = (int32_T)c2_b_i;
        if ((c2_i22 < 1) || (c2_i22 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i22, 1, 127, &c2_kb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_db_emlrtDCI, (void *)c2_sp);
        }

        c2_i24 = (int32_T)c2_b_j;
        if ((c2_i24 < 1) || (c2_i24 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 164, &c2_lb_emlrtBCI, (void *)
            c2_sp);
        }

        c2_e_q0 = c2_T[0];
        c2_e_qY = c2_e_q0 - (uint32_T)c2_T[3];
        c2_e_covSaturation = false;
        if (c2_e_qY > c2_e_q0) {
          c2_e_covSaturation = true;
          c2_e_qY = 0U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        c2_u4 = c2_e_qY;
        if (c2_u4 > 255U) {
          c2_e_covSaturation = true;
          c2_u4 = 255U;
          sf_data_saturate_error(chartInstance->S, 0U, 0, 0);
        }

        covrtSaturationUpdateFcn(chartInstance->c2_covrtInstance, 14, 0, 5, 0,
          c2_e_covSaturation);
        c2_b_A44[(c2_i22 + 127 * (c2_i24 - 1)) - 1] = (real_T)(uint8_T)c2_u4;
        if (c2_b_i != (real_T)(int32_T)muDoubleScalarFloor(c2_b_i)) {
          emlrtIntegerCheckR2012b(c2_b_i, &c2_n_emlrtDCI, (void *)c2_sp);
        }

        c2_i26 = (int32_T)c2_b_i;
        if ((c2_i26 < 1) || (c2_i26 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 127, &c2_p_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_o_emlrtDCI, (void *)c2_sp);
        }

        c2_i28 = (int32_T)c2_b_j;
        if ((c2_i28 < 1) || (c2_i28 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 164, &c2_q_emlrtBCI, (void *)
            c2_sp);
        }

        c2_b_A4[(c2_i26 + 127 * (c2_i28 - 1)) - 1] = 0.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 0, 0, 0);
}

static void c2_Fea(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_A[20828], real_T c2_b_B[20828], real_T
                   c2_OUT[20828])
{
  static char_T c2_b_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c2_b_cv1[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  emlrtStack c2_st;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  real_T c2_Ba;
  real_T c2_Da;
  real_T c2_b_j;
  real_T c2_b_k;
  real_T c2_b_s;
  real_T c2_b_y;
  real_T c2_c_i;
  real_T c2_c_y;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d_k;
  real_T c2_d_y;
  real_T c2_e_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_s;
  int32_T c2_b_i;
  int32_T c2_b_ib;
  int32_T c2_c_j;
  int32_T c2_c_k;
  int32_T c2_d_i;
  int32_T c2_d_j;
  int32_T c2_e_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_ib;
  int32_T c2_j;
  int32_T c2_k;
  boolean_T c2_E[20828];
  boolean_T c2_bv[20828];
  boolean_T c2_b;
  boolean_T c2_b_b;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 1, 0);
  for (c2_i = 0; c2_i < 20828; c2_i++) {
    chartInstance->c2_BB[c2_i] = c2_A[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 20828; c2_i1++) {
    chartInstance->c2_b_BB[c2_i1] = chartInstance->c2_BB[c2_i1];
  }

  c2_s = c2_sumColumnB4(chartInstance, chartInstance->c2_b_BB, 1);
  for (c2_ib = 0; c2_ib < 4; c2_ib++) {
    for (c2_i2 = 0; c2_i2 < 20828; c2_i2++) {
      chartInstance->c2_c_BB[c2_i2] = chartInstance->c2_BB[c2_i2];
    }

    c2_s += c2_sumColumnB4(chartInstance, chartInstance->c2_c_BB, 1 + ((c2_ib +
      1) << 12));
  }

  c2_s += c2_sumColumnB(chartInstance, chartInstance->c2_BB);
  c2_b_y = c2_s;
  c2_c_y = c2_b_y / 20828.0;
  c2_g_x = c2_c_y;
  c2_h_x = c2_g_x;
  c2_i_x = c2_h_x;
  c2_j_x = c2_i_x;
  c2_k_x = c2_j_x;
  c2_Ba = c2_b_sumColumnB(chartInstance, c2_k_x);
  for (c2_i3 = 0; c2_i3 < 20828; c2_i3++) {
    chartInstance->c2_BB[c2_i3] = c2_b_B[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 20828; c2_i4++) {
    chartInstance->c2_d_BB[c2_i4] = chartInstance->c2_BB[c2_i4];
  }

  c2_b_s = c2_sumColumnB4(chartInstance, chartInstance->c2_d_BB, 1);
  for (c2_b_ib = 0; c2_b_ib < 4; c2_b_ib++) {
    for (c2_i5 = 0; c2_i5 < 20828; c2_i5++) {
      chartInstance->c2_e_BB[c2_i5] = chartInstance->c2_BB[c2_i5];
    }

    c2_b_s += c2_sumColumnB4(chartInstance, chartInstance->c2_e_BB, 1 +
      ((c2_b_ib + 1) << 12));
  }

  c2_b_s += c2_sumColumnB(chartInstance, chartInstance->c2_BB);
  c2_d_y = c2_b_s;
  c2_e_y = c2_d_y / 20828.0;
  c2_l_x = c2_e_y;
  c2_m_x = c2_l_x;
  c2_n_x = c2_m_x;
  c2_o_x = c2_n_x;
  c2_p_x = c2_o_x;
  c2_Da = c2_b_sumColumnB(chartInstance, c2_p_x);
  for (c2_b_i = 0; c2_b_i < 127; c2_b_i++) {
    c2_c_i = 1.0 + (real_T)c2_b_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 0, 1);
    for (c2_j = 0; c2_j < 164; c2_j++) {
      c2_b_j = 1.0 + (real_T)c2_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 1, 1);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_nb_emlrtDCI, (void *)c2_sp);
      }

      c2_i6 = (int32_T)c2_c_i;
      if ((c2_i6 < 1) || (c2_i6 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 127, &c2_wb_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_nb_emlrtDCI, (void *)c2_sp);
      }

      c2_i10 = (int32_T)c2_b_j;
      if ((c2_i10 < 1) || (c2_i10 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 164, &c2_xb_emlrtBCI, (void *)
          c2_sp);
      }

      c2_d = c2_A[(c2_i6 + 127 * (c2_i10 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 1, 0,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 14U, 1U, 0U, c2_d,
                          c2_Ba, -1, 2U, c2_d < c2_Ba))) {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_fb_emlrtDCI, (void *)c2_sp);
        }

        c2_i15 = (int32_T)c2_c_i;
        if ((c2_i15 < 1) || (c2_i15 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 127, &c2_ob_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_gb_emlrtDCI, (void *)c2_sp);
        }

        c2_i19 = (int32_T)c2_b_j;
        if ((c2_i19 < 1) || (c2_i19 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i19, 1, 164, &c2_pb_emlrtBCI, (void *)
            c2_sp);
        }

        chartInstance->c2_BB[(c2_i15 + 127 * (c2_i19 - 1)) - 1] = 0.0;
      } else {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_hb_emlrtDCI, (void *)c2_sp);
        }

        c2_i14 = (int32_T)c2_c_i;
        if ((c2_i14 < 1) || (c2_i14 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 127, &c2_qb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_ib_emlrtDCI, (void *)c2_sp);
        }

        c2_i18 = (int32_T)c2_b_j;
        if ((c2_i18 < 1) || (c2_i18 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i18, 1, 164, &c2_rb_emlrtBCI, (void *)
            c2_sp);
        }

        chartInstance->c2_BB[(c2_i14 + 127 * (c2_i18 - 1)) - 1] = 1.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 0, 0);
  for (c2_d_i = 0; c2_d_i < 127; c2_d_i++) {
    c2_c_i = 1.0 + (real_T)c2_d_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 2, 1);
    for (c2_c_j = 0; c2_c_j < 164; c2_c_j++) {
      c2_b_j = 1.0 + (real_T)c2_c_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 3, 1);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_ob_emlrtDCI, (void *)c2_sp);
      }

      c2_i8 = (int32_T)c2_c_i;
      if ((c2_i8 < 1) || (c2_i8 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 127, &c2_yb_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_ob_emlrtDCI, (void *)c2_sp);
      }

      c2_i13 = (int32_T)c2_b_j;
      if ((c2_i13 < 1) || (c2_i13 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i13, 1, 164, &c2_ac_emlrtBCI, (void *)
          c2_sp);
      }

      c2_d1 = c2_b_B[(c2_i8 + 127 * (c2_i13 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 1, 1,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 14U, 1U, 1U, c2_d1,
                          c2_Da, -1, 2U, c2_d1 < c2_Da))) {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_jb_emlrtDCI, (void *)c2_sp);
        }

        c2_i17 = (int32_T)c2_c_i;
        if ((c2_i17 < 1) || (c2_i17 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i17, 1, 127, &c2_sb_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_kb_emlrtDCI, (void *)c2_sp);
        }

        c2_i22 = (int32_T)c2_b_j;
        if ((c2_i22 < 1) || (c2_i22 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i22, 1, 164, &c2_tb_emlrtBCI, (void *)
            c2_sp);
        }

        chartInstance->c2_DD[(c2_i17 + 127 * (c2_i22 - 1)) - 1] = 0.0;
      } else {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_lb_emlrtDCI, (void *)c2_sp);
        }

        c2_i16 = (int32_T)c2_c_i;
        if ((c2_i16 < 1) || (c2_i16 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i16, 1, 127, &c2_ub_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_mb_emlrtDCI, (void *)c2_sp);
        }

        c2_i21 = (int32_T)c2_b_j;
        if ((c2_i21 < 1) || (c2_i21 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i21, 1, 164, &c2_vb_emlrtBCI, (void *)
            c2_sp);
        }

        chartInstance->c2_DD[(c2_i16 + 127 * (c2_i21 - 1)) - 1] = 1.0;
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 3, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 2, 0);
  c2_st.site = &c2_emlrtRSI;
  for (c2_k = 0; c2_k < 20828; c2_k++) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_q_x = chartInstance->c2_BB[(int32_T)c2_b_k - 1];
    c2_b = muDoubleScalarIsNaN(c2_q_x);
    if (c2_b) {
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      sf_mex_call(&c2_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_g_y)));
    }
  }

  c2_st.site = &c2_emlrtRSI;
  for (c2_c_k = 0; c2_c_k < 20828; c2_c_k++) {
    c2_d_k = (real_T)c2_c_k + 1.0;
    c2_r_x = chartInstance->c2_DD[(int32_T)c2_d_k - 1];
    c2_b_b = muDoubleScalarIsNaN(c2_r_x);
    if (c2_b_b) {
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1,
        19), false);
      sf_mex_call(&c2_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
    }
  }

  for (c2_i7 = 0; c2_i7 < 20828; c2_i7++) {
    c2_E[c2_i7] = (chartInstance->c2_BB[c2_i7] != 0.0);
  }

  for (c2_i9 = 0; c2_i9 < 20828; c2_i9++) {
    c2_bv[c2_i9] = (chartInstance->c2_DD[c2_i9] != 0.0);
  }

  for (c2_i11 = 0; c2_i11 < 20828; c2_i11++) {
    c2_E[c2_i11] = (c2_E[c2_i11] || c2_bv[c2_i11]);
  }

  for (c2_i12 = 0; c2_i12 < 20828; c2_i12++) {
    chartInstance->c2_DD[c2_i12] = (real_T)c2_E[c2_i12] - chartInstance->
      c2_DD[c2_i12];
  }

  for (c2_e_i = 0; c2_e_i < 127; c2_e_i++) {
    c2_c_i = 1.0 + (real_T)c2_e_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 4, 1);
    for (c2_d_j = 0; c2_d_j < 164; c2_d_j++) {
      c2_b_j = 1.0 + (real_T)c2_d_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 5, 1);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_pb_emlrtDCI, (void *)c2_sp);
      }

      c2_i20 = (int32_T)c2_c_i;
      if ((c2_i20 < 1) || (c2_i20 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i20, 1, 127, &c2_bc_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_pb_emlrtDCI, (void *)c2_sp);
      }

      c2_i23 = (int32_T)c2_b_j;
      if ((c2_i23 < 1) || (c2_i23 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i23, 1, 164, &c2_cc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_d2 = chartInstance->c2_DD[(c2_i20 + 127 * (c2_i23 - 1)) - 1];
      if (covrtEmlIfEval(chartInstance->c2_covrtInstance, 14U, 1, 2,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c2_covrtInstance, 14U, 1U, 2U, c2_d2,
                          0.0, -1, 0U, c2_d2 == 0.0))) {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_tb_emlrtDCI, (void *)c2_sp);
        }

        c2_i25 = (int32_T)c2_c_i;
        if ((c2_i25 < 1) || (c2_i25 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i25, 1, 127, &c2_jc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_tb_emlrtDCI, (void *)c2_sp);
        }

        c2_i27 = (int32_T)c2_b_j;
        if ((c2_i27 < 1) || (c2_i27 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i27, 1, 164, &c2_kc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_ub_emlrtDCI, (void *)c2_sp);
        }

        c2_i29 = (int32_T)c2_c_i;
        if ((c2_i29 < 1) || (c2_i29 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i29, 1, 127, &c2_lc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_ub_emlrtDCI, (void *)c2_sp);
        }

        c2_i31 = (int32_T)c2_b_j;
        if ((c2_i31 < 1) || (c2_i31 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i31, 1, 164, &c2_mc_emlrtBCI, (void *)
            c2_sp);
        }

        c2_OUT[(c2_i29 + 127 * (c2_i31 - 1)) - 1] = c2_b_B[(c2_i25 + 127 *
          (c2_i27 - 1)) - 1];
      } else {
        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_qb_emlrtDCI, (void *)c2_sp);
        }

        c2_i24 = (int32_T)c2_c_i;
        if ((c2_i24 < 1) || (c2_i24 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i24, 1, 127, &c2_dc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_qb_emlrtDCI, (void *)c2_sp);
        }

        c2_i26 = (int32_T)c2_b_j;
        if ((c2_i26 < 1) || (c2_i26 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i26, 1, 164, &c2_ec_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_rb_emlrtDCI, (void *)c2_sp);
        }

        c2_i28 = (int32_T)c2_c_i;
        if ((c2_i28 < 1) || (c2_i28 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i28, 1, 127, &c2_fc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_rb_emlrtDCI, (void *)c2_sp);
        }

        c2_i30 = (int32_T)c2_b_j;
        if ((c2_i30 < 1) || (c2_i30 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i30, 1, 164, &c2_gc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
          emlrtIntegerCheckR2012b(c2_c_i, &c2_sb_emlrtDCI, (void *)c2_sp);
        }

        c2_i32 = (int32_T)c2_c_i;
        if ((c2_i32 < 1) || (c2_i32 > 127)) {
          emlrtDynamicBoundsCheckR2012b(c2_i32, 1, 127, &c2_hc_emlrtBCI, (void *)
            c2_sp);
        }

        if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
          emlrtIntegerCheckR2012b(c2_b_j, &c2_sb_emlrtDCI, (void *)c2_sp);
        }

        c2_i33 = (int32_T)c2_b_j;
        if ((c2_i33 < 1) || (c2_i33 > 164)) {
          emlrtDynamicBoundsCheckR2012b(c2_i33, 1, 164, &c2_ic_emlrtBCI, (void *)
            c2_sp);
        }

        c2_OUT[(c2_i32 + 127 * (c2_i33 - 1)) - 1] = c2_b_B[(c2_i24 + 127 *
          (c2_i26 - 1)) - 1] + 0.0 * c2_A[(c2_i28 + 127 * (c2_i30 - 1)) - 1];
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 5, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 1, 4, 0);
}

static real_T c2_metricsEdge_intensity(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, real_T c2_c_fused[83312])
{
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  emlrtStack c2_st;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  real_T c2_c_y[328];
  real_T c2_b_m;
  real_T c2_b_n;
  real_T c2_b_y;
  real_T c2_d_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_x;
  int32_T c2_b_col;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_m;
  int32_T c2_n;
  boolean_T c2_b_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 2, 0);
  c2_st.site = &c2_b_emlrtRSI;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    chartInstance->c2_fused[c2_i] = c2_c_fused[c2_i];
  }

  c2_imfilter(chartInstance, &c2_st, chartInstance->c2_fused,
              chartInstance->c2_gx);
  c2_st.site = &c2_c_emlrtRSI;
  for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
    chartInstance->c2_b_fused[c2_i1] = c2_c_fused[c2_i1];
  }

  c2_b_imfilter(chartInstance, &c2_st, chartInstance->c2_b_fused,
                chartInstance->c2_gy);
  for (c2_m = 0; c2_m < 254; c2_m++) {
    c2_b_m = 1.0 + (real_T)c2_m;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 0, 1);
    for (c2_n = 0; c2_n < 328; c2_n++) {
      c2_b_n = 1.0 + (real_T)c2_n;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 1, 1);
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 2, 1);
      c2_st.site = &c2_d_emlrtRSI;
      if (c2_b_m != (real_T)(int32_T)muDoubleScalarFloor(c2_b_m)) {
        emlrtIntegerCheckR2012b(c2_b_m, &c2_xb_emlrtDCI, &c2_st);
      }

      c2_i4 = (int32_T)c2_b_m;
      if ((c2_i4 < 1) || (c2_i4 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 254, &c2_pc_emlrtBCI, &c2_st);
      }

      if (c2_b_n != (real_T)(int32_T)muDoubleScalarFloor(c2_b_n)) {
        emlrtIntegerCheckR2012b(c2_b_n, &c2_xb_emlrtDCI, &c2_st);
      }

      c2_i5 = (int32_T)c2_b_n;
      if ((c2_i5 < 1) || (c2_i5 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 328, &c2_qc_emlrtBCI, &c2_st);
      }

      if (c2_b_m != (real_T)(int32_T)muDoubleScalarFloor(c2_b_m)) {
        emlrtIntegerCheckR2012b(c2_b_m, &c2_yb_emlrtDCI, &c2_st);
      }

      c2_i6 = (int32_T)c2_b_m;
      if ((c2_i6 < 1) || (c2_i6 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 254, &c2_rc_emlrtBCI, &c2_st);
      }

      if (c2_b_n != (real_T)(int32_T)muDoubleScalarFloor(c2_b_n)) {
        emlrtIntegerCheckR2012b(c2_b_n, &c2_yb_emlrtDCI, &c2_st);
      }

      c2_i7 = (int32_T)c2_b_n;
      if ((c2_i7 < 1) || (c2_i7 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 328, &c2_sc_emlrtBCI, &c2_st);
      }

      if (c2_b_m != (real_T)(int32_T)muDoubleScalarFloor(c2_b_m)) {
        emlrtIntegerCheckR2012b(c2_b_m, &c2_ac_emlrtDCI, &c2_st);
      }

      c2_i8 = (int32_T)c2_b_m;
      if ((c2_i8 < 1) || (c2_i8 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 254, &c2_tc_emlrtBCI, &c2_st);
      }

      if (c2_b_n != (real_T)(int32_T)muDoubleScalarFloor(c2_b_n)) {
        emlrtIntegerCheckR2012b(c2_b_n, &c2_ac_emlrtDCI, &c2_st);
      }

      c2_i9 = (int32_T)c2_b_n;
      if ((c2_i9 < 1) || (c2_i9 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 328, &c2_uc_emlrtBCI, &c2_st);
      }

      if (c2_b_m != (real_T)(int32_T)muDoubleScalarFloor(c2_b_m)) {
        emlrtIntegerCheckR2012b(c2_b_m, &c2_bc_emlrtDCI, &c2_st);
      }

      c2_i10 = (int32_T)c2_b_m;
      if ((c2_i10 < 1) || (c2_i10 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 254, &c2_vc_emlrtBCI, &c2_st);
      }

      if (c2_b_n != (real_T)(int32_T)muDoubleScalarFloor(c2_b_n)) {
        emlrtIntegerCheckR2012b(c2_b_n, &c2_bc_emlrtDCI, &c2_st);
      }

      c2_i11 = (int32_T)c2_b_n;
      if ((c2_i11 < 1) || (c2_i11 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 328, &c2_wc_emlrtBCI, &c2_st);
      }

      c2_l_x = chartInstance->c2_gx[(c2_i4 + 254 * (c2_i5 - 1)) - 1] *
        chartInstance->c2_gx[(c2_i6 + 254 * (c2_i7 - 1)) - 1] +
        chartInstance->c2_gy[(c2_i8 + 254 * (c2_i9 - 1)) - 1] *
        chartInstance->c2_gy[(c2_i10 + 254 * (c2_i11 - 1)) - 1];
      c2_m_x = c2_l_x;
      c2_n_x = c2_m_x;
      if (c2_n_x < 0.0) {
        c2_p = true;
      } else {
        c2_p = false;
      }

      c2_b_p = c2_p;
      if (c2_b_p) {
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1,
          4), false);
        sf_mex_call(&c2_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                    sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_st, NULL, "message", 1U, 2U, 14, c2_f_y, 14, c2_g_y)));
      }

      c2_m_x = muDoubleScalarSqrt(c2_m_x);
      if (c2_b_m != (real_T)(int32_T)muDoubleScalarFloor(c2_b_m)) {
        emlrtIntegerCheckR2012b(c2_b_m, &c2_vb_emlrtDCI, (void *)c2_sp);
      }

      c2_i12 = (int32_T)c2_b_m;
      if ((c2_i12 < 1) || (c2_i12 > 254)) {
        emlrtDynamicBoundsCheckR2012b(c2_i12, 1, 254, &c2_nc_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_n != (real_T)(int32_T)muDoubleScalarFloor(c2_b_n)) {
        emlrtIntegerCheckR2012b(c2_b_n, &c2_wb_emlrtDCI, (void *)c2_sp);
      }

      c2_i13 = (int32_T)c2_b_n;
      if ((c2_i13 < 1) || (c2_i13 > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_i13, 1, 328, &c2_oc_emlrtBCI, (void *)
          c2_sp);
      }

      chartInstance->c2_b_g[(c2_i12 + 254 * (c2_i13 - 1)) - 1] = c2_m_x;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 2, 0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 2, 0, 0);
  for (c2_col = 0; c2_col < 328; c2_col++) {
    c2_b_col = c2_col;
    for (c2_i3 = 0; c2_i3 < 83312; c2_i3++) {
      chartInstance->c2_g[c2_i3] = chartInstance->c2_b_g[c2_i3];
    }

    c2_c_y[c2_b_col] = c2_d_sumColumnB(chartInstance, chartInstance->c2_g,
      c2_b_col + 1);
  }

  for (c2_i2 = 0; c2_i2 < 328; c2_i2++) {
    c2_c_y[c2_i2] /= 254.0;
  }

  c2_b_y = c2_e_sumColumnB(chartInstance, c2_c_y);
  c2_d_y = c2_b_y / 328.0;
  c2_g_x = c2_d_y;
  c2_h_x = c2_g_x;
  c2_i_x = c2_h_x;
  c2_j_x = c2_i_x;
  c2_k_x = c2_j_x;
  return c2_b_sumColumnB(chartInstance, c2_k_x);
}

static void c2_Inverse_Fenk(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_C1[20828], real_T c2_b_C2[20828], real_T c2_b_C3
  [20828], real_T c2_b_C4[20828], real_T c2_b_C22[20828], real_T c2_b_C33[20828],
  real_T c2_b_C44[20828], real_T c2_F[83312])
{
  real_T c2_T[4];
  real_T c2_b_j;
  real_T c2_c_i;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_j;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 14U, 5, 0);
  for (c2_i = 0; c2_i < 20828; c2_i++) {
    chartInstance->c2_B[c2_i] = (c2_C1[c2_i] + c2_b_C2[c2_i]) - c2_b_C22[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 20828; c2_i1++) {
    chartInstance->c2_C[c2_i1] = (c2_C1[c2_i1] + c2_b_C3[c2_i1]) -
      c2_b_C33[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 20828; c2_i2++) {
    chartInstance->c2_D[c2_i2] = (c2_C1[c2_i2] + c2_b_C4[c2_i2]) -
      c2_b_C44[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 83312; c2_i3++) {
    c2_F[c2_i3] = 0.0;
  }

  for (c2_b_i = 0; c2_b_i < 127; c2_b_i++) {
    c2_c_i = 1.0 + (real_T)c2_b_i;
    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 5, 0, 1);
    for (c2_j = 0; c2_j < 164; c2_j++) {
      c2_b_j = 1.0 + (real_T)c2_j;
      covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 5, 1, 1);
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_cc_emlrtDCI, (void *)c2_sp);
      }

      c2_i4 = (int32_T)c2_c_i;
      if ((c2_i4 < 1) || (c2_i4 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i4, 1, 127, &c2_xc_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_cc_emlrtDCI, (void *)c2_sp);
      }

      c2_i5 = (int32_T)c2_b_j;
      if ((c2_i5 < 1) || (c2_i5 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, 164, &c2_yc_emlrtBCI, (void *)
          c2_sp);
      }

      c2_T[0] = c2_C1[(c2_i4 + 127 * (c2_i5 - 1)) - 1];
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_dc_emlrtDCI, (void *)c2_sp);
      }

      c2_i6 = (int32_T)c2_c_i;
      if ((c2_i6 < 1) || (c2_i6 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i6, 1, 127, &c2_ad_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_dc_emlrtDCI, (void *)c2_sp);
      }

      c2_i7 = (int32_T)c2_b_j;
      if ((c2_i7 < 1) || (c2_i7 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i7, 1, 164, &c2_bd_emlrtBCI, (void *)
          c2_sp);
      }

      c2_T[2] = chartInstance->c2_B[(c2_i6 + 127 * (c2_i7 - 1)) - 1];
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_ec_emlrtDCI, (void *)c2_sp);
      }

      c2_i8 = (int32_T)c2_c_i;
      if ((c2_i8 < 1) || (c2_i8 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i8, 1, 127, &c2_cd_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_ec_emlrtDCI, (void *)c2_sp);
      }

      c2_i9 = (int32_T)c2_b_j;
      if ((c2_i9 < 1) || (c2_i9 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i9, 1, 164, &c2_dd_emlrtBCI, (void *)
          c2_sp);
      }

      c2_T[1] = chartInstance->c2_C[(c2_i8 + 127 * (c2_i9 - 1)) - 1];
      if (c2_c_i != (real_T)(int32_T)muDoubleScalarFloor(c2_c_i)) {
        emlrtIntegerCheckR2012b(c2_c_i, &c2_fc_emlrtDCI, (void *)c2_sp);
      }

      c2_i10 = (int32_T)c2_c_i;
      if ((c2_i10 < 1) || (c2_i10 > 127)) {
        emlrtDynamicBoundsCheckR2012b(c2_i10, 1, 127, &c2_ed_emlrtBCI, (void *)
          c2_sp);
      }

      if (c2_b_j != (real_T)(int32_T)muDoubleScalarFloor(c2_b_j)) {
        emlrtIntegerCheckR2012b(c2_b_j, &c2_fc_emlrtDCI, (void *)c2_sp);
      }

      c2_i11 = (int32_T)c2_b_j;
      if ((c2_i11 < 1) || (c2_i11 > 164)) {
        emlrtDynamicBoundsCheckR2012b(c2_i11, 1, 164, &c2_fd_emlrtBCI, (void *)
          c2_sp);
      }

      c2_T[3] = chartInstance->c2_D[(c2_i10 + 127 * (c2_i11 - 1)) - 1];
      c2_d = 2.0 * c2_c_i;
      c2_d1 = 2.0 * c2_b_j;
      for (c2_i12 = 0; c2_i12 < 2; c2_i12++) {
        for (c2_i13 = 0; c2_i13 < 2; c2_i13++) {
          c2_d2 = c2_d + (real_T)(int32_T)(-1.0 + (real_T)c2_i13);
          if (c2_d2 != (real_T)(int32_T)muDoubleScalarFloor(c2_d2)) {
            emlrtIntegerCheckR2012b(c2_d2, &c2_gc_emlrtDCI, (void *)c2_sp);
          }

          c2_i14 = (int32_T)c2_d2;
          if ((c2_i14 < 1) || (c2_i14 > 254)) {
            emlrtDynamicBoundsCheckR2012b(c2_i14, 1, 254, &c2_gd_emlrtBCI, (void
              *)c2_sp);
          }

          c2_d3 = c2_d1 + (real_T)(int32_T)(-1.0 + (real_T)c2_i12);
          if (c2_d3 != (real_T)(int32_T)muDoubleScalarFloor(c2_d3)) {
            emlrtIntegerCheckR2012b(c2_d3, &c2_gc_emlrtDCI, (void *)c2_sp);
          }

          c2_i15 = (int32_T)c2_d3;
          if ((c2_i15 < 1) || (c2_i15 > 328)) {
            emlrtDynamicBoundsCheckR2012b(c2_i15, 1, 328, &c2_hd_emlrtBCI, (void
              *)c2_sp);
          }

          c2_F[(c2_i14 + 254 * (c2_i15 - 1)) - 1] = c2_T[c2_i13 + (c2_i12 << 1)];
        }
      }

      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 5, 1, 0);
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c2_covrtInstance, 14U, 5, 0, 0);
}

const mxArray *sf_c2_untitled1_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char_T *c2_data[7] = {
    "789c6360f4f465646060e06380800e3908cd0bc44b8058002acec4800ad0e519a1341b127f09927a560616b83e64f5fd503a393faf24b5a204c2c94bcc4d85eb"
    "4cc9cfcdcc4bcc2b09a92c4865284a2dcecf294b4d01cba465e6a48664e6a6062373fc40bc5c37242938072405623b67a426670797e632146514235c9883cc81",
    "874702927f1990fccb42203cd0017a7880d425329450cd3e46347598f6b180ed734bcdcba6a67dac38ed6305db579a99576281645f0585f689e3b40f129e30f9"
    "68d75857ab98e08cccc8c4bc18233dc31890c7f57209fa9b9f487720d34b50d473302c030aaa68dc022ba1977dafdf3feba7a77d303050f6519a8ec470d82780",
    "269fe658e2641ee117e4e1e59d98eb5f629651186450ea8c7047000e77203919af3b1890f8c8eea097f90938cca746f9860ca855de30e3b40f22e3969a4855fb"
    "70d56702509994fcd2a49c54faa74b2ce55b22b078a35b7ebc6a4edff28dfb3ddf0d7ada0703c3bd7cb3f072320b378d8828ce0c75730b0b08cd74cf2b2e7219",
    "2ddfd001b1e51ba5f1264ac03e987c6e6a49516672b16b4a7a6a3cb089959a579c5952c93070e55e0785f669e0b40f551ea3dcc31a107ab9f4cab70b4ce95b0e"
    "be0af93cdace63a07e7e724ccf2e773329750c352c8ff4f22df52c0e482b3367182d07d101bdda7984ca1fb7d2e2d4f894812bef1a28b44f12a77da8f298ed3c",
    "b0c7414d3d30a057be9c4fe772ce6cfdbf147ada070343b59c23b6bd579916951e59905ae4e368e49b58565a9a1d6cec94ea3e5acea1037a95734c487c54fb20"
    "32c12ed4b58fdefd5962eb5f8c722ed8055cc6d12b3fca7fbc49d7f2ad7a4256383ded8381e15ebe595a86789ae585643afa26077ae638971804166716788c96",
    "6fe880d8f2ad804cfb60fee121601f4cde33af2cb508d8b2a1f6fc04bddb75f238ed4395c728ef9003808ef3145a749ea7d871eed76c7ada0703c3bddc33320d"
    "cf724c0e292aacf28e88f20a0faef0f348751e06ed3a007c8061b4", "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&c2_data[0], 7840U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static real_T c2_mod(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x)
{
  real_T c2_c_a;
  real_T c2_h_x;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_r;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_rEQ0;
  (void)chartInstance;
  c2_c_a = c2_g_x;
  c2_h_x = c2_c_a;
  c2_i_x = c2_h_x;
  c2_j_x = c2_i_x;
  c2_b = muDoubleScalarIsNaN(c2_j_x);
  if (c2_b) {
    c2_r = rtNaN;
  } else {
    c2_k_x = c2_i_x;
    c2_b_b = muDoubleScalarIsInf(c2_k_x);
    if (c2_b_b) {
      c2_r = rtNaN;
    } else {
      c2_r = muDoubleScalarRem(c2_i_x, 2.0);
      c2_rEQ0 = (c2_r == 0.0);
      if (c2_rEQ0) {
        c2_r = 0.0;
      }
    }
  }

  return c2_r;
}

static void c2_imresize(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_b_Ain[83312], uint8_T c2_Bout[83312])
{
  emlrtStack c2_st;
  real_T c2_b_weights_data[1968];
  real_T c2_weights_data[1524];
  int32_T c2_b_indices_data[1968];
  int32_T c2_indices_data[1524];
  int32_T c2_b_indices_size[2];
  int32_T c2_b_weights_size[2];
  int32_T c2_indices_size[2];
  int32_T c2_weights_size[2];
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_qb_emlrtRSI;
  c2_contributions(chartInstance, &c2_st, c2_weights_data, c2_weights_size,
                   c2_indices_data, c2_indices_size);
  c2_st.site = &c2_rb_emlrtRSI;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    chartInstance->c2_Ain[c2_i] = c2_b_Ain[c2_i];
  }

  c2_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_Ain,
                    c2_weights_data, c2_weights_size, c2_indices_data,
                    chartInstance->c2_APartialResize);
  c2_st.site = &c2_sb_emlrtRSI;
  c2_b_contributions(chartInstance, &c2_st, c2_b_weights_data, c2_b_weights_size,
                     c2_b_indices_data, c2_b_indices_size);
  c2_st.site = &c2_tb_emlrtRSI;
  c2_b_resizeAlongDim(chartInstance, &c2_st, chartInstance->c2_APartialResize,
                      c2_b_weights_data, c2_b_weights_size, c2_b_indices_data,
                      c2_Bout);
}

static void c2_contributions(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_absx[1524];
  real_T c2_absx2[1524];
  real_T c2_absx3[1524];
  real_T c2_e_y[1524];
  real_T c2_f[1524];
  real_T c2_f_y[1524];
  real_T c2_g_y[254];
  real_T c2_b_y;
  real_T c2_c_a;
  real_T c2_c_y;
  real_T c2_d_a;
  real_T c2_d_i;
  real_T c2_d_y;
  real_T c2_f_a;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_a;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_k;
  real_T c2_oldIdx;
  int32_T c2_indices[1524];
  int32_T c2_aux[508];
  int32_T c2_b_tmp_data[6];
  int32_T c2_tmp_data[6];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_b;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_1;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_a;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_i;
  int32_T c2_h_k;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_i_k;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_a;
  int32_T c2_j_k;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_k_k;
  int32_T c2_l_a;
  int32_T c2_l_k;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_m_k;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_bv[1524];
  boolean_T c2_bv1[1524];
  boolean_T c2_copyCols[6];
  boolean_T c2_b_b;
  boolean_T c2_c_b;
  boolean_T c2_exitg1;
  boolean_T c2_f_b;
  boolean_T c2_g_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 6; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_c_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_d_k = 0; c2_d_k < 254; c2_d_k++) {
      c2_ia = c2_d_k;
      c2_c_ic = c2_d_k;
      c2_e_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_c_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_e_a = -1 + c2_c_varargin_3;
      c2_b = c2_varargin_6;
      c2_c = c2_e_a + c2_b;
      c2_indices[c2_e_varargin_1 + 254 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1524; c2_i++) {
    c2_absx2[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 6; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_d_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_i_k = 0; c2_i_k < 254; c2_i_k++) {
      c2_b_ia = c2_i_k;
      c2_c_ib = c2_i_k;
      c2_d_ic = c2_i_k;
      c2_f_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_d_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_absx3[c2_f_varargin_1 + 254 * c2_b_varargin_2] = (1.0 + (real_T)
        c2_d_varargin_3) - c2_absx2[c2_varargin_5 + 254 * c2_b_varargin_6];
    }
  }

  for (c2_c_k = 0; c2_c_k < 1524; c2_c_k++) {
    c2_f_k = c2_c_k;
    c2_g_x = c2_absx3[c2_f_k];
    c2_b_y = muDoubleScalarAbs(c2_g_x);
    c2_absx[c2_f_k] = c2_b_y;
  }

  for (c2_e_k = 0; c2_e_k < 1524; c2_e_k++) {
    c2_h_k = c2_e_k;
    c2_c_a = c2_absx[c2_h_k];
    c2_c_y = c2_c_a * c2_c_a;
    c2_absx2[c2_h_k] = c2_c_y;
  }

  for (c2_g_k = 0; c2_g_k < 1524; c2_g_k++) {
    c2_j_k = c2_g_k;
    c2_d_a = c2_absx[c2_j_k];
    c2_d_y = muDoubleScalarPower(c2_d_a, 3.0);
    c2_absx3[c2_j_k] = c2_d_y;
  }

  for (c2_i1 = 0; c2_i1 < 1524; c2_i1++) {
    c2_bv[c2_i1] = (1.0 < c2_absx[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 1524; c2_i2++) {
    c2_bv1[c2_i2] = (c2_absx[c2_i2] <= 2.0);
  }

  for (c2_i3 = 0; c2_i3 < 1524; c2_i3++) {
    c2_f[c2_i3] = 1.5 * c2_absx3[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 1524; c2_i4++) {
    c2_e_y[c2_i4] = 2.5 * c2_absx2[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 1524; c2_i5++) {
    c2_absx3[c2_i5] *= -0.5;
  }

  for (c2_i6 = 0; c2_i6 < 1524; c2_i6++) {
    c2_absx2[c2_i6] *= 2.5;
  }

  for (c2_i7 = 0; c2_i7 < 1524; c2_i7++) {
    c2_f_y[c2_i7] = 4.0 * c2_absx[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 1524; c2_i8++) {
    c2_f[c2_i8] = ((c2_f[c2_i8] - c2_e_y[c2_i8]) + 1.0) * (real_T)(c2_absx[c2_i8]
      <= 1.0) + (((c2_absx3[c2_i8] + c2_absx2[c2_i8]) - c2_f_y[c2_i8]) + 2.0) *
      (real_T)(c2_bv[c2_i8] && c2_bv1[c2_i8]);
  }

  for (c2_xj = 0; c2_xj < 254; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_g_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_k_k = 0; c2_k_k < 5; c2_k_k++) {
    c2_xoffset = (c2_k_k + 1) * 254;
    for (c2_c_xj = 0; c2_c_xj < 254; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_g_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i9 = 0; c2_i9 < 1524; c2_i9++) {
    c2_absx2[c2_i9] = c2_f[c2_i9];
  }

  for (c2_l_k = 0; c2_l_k < 6; c2_l_k++) {
    c2_c_ia = c2_l_k;
    c2_e_ic = c2_l_k;
    c2_g_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_m_k = 0; c2_m_k < 254; c2_m_k++) {
      c2_d_ia = c2_m_k;
      c2_d_ib = c2_m_k;
      c2_f_ic = c2_m_k;
      c2_h_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_g_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_h_varargin_1 + 254 * c2_d_varargin_2] = c2_absx2[c2_e_varargin_3 +
        254 * c2_varargin_4] / c2_g_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[254] = 254;
  for (c2_b_i = 0; c2_b_i < 253; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 255] = c2_aux[c2_b_i + 254] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1524; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_h_x = c2_oldIdx - 1.0;
    c2_f_a = c2_h_x;
    c2_i_x = c2_f_a;
    c2_j_x = c2_i_x;
    c2_k_x = c2_j_x;
    c2_b_b = muDoubleScalarIsNaN(c2_k_x);
    if (c2_b_b) {
      c2_n_k = rtNaN;
    } else {
      c2_l_x = c2_j_x;
      c2_c_b = muDoubleScalarIsInf(c2_l_x);
      if (c2_c_b) {
        c2_n_k = rtNaN;
      } else if (c2_j_x == 0.0) {
        c2_n_k = 0.0;
      } else {
        c2_n_k = muDoubleScalarRem(c2_j_x, 508.0);
        c2_rEQ0 = (c2_n_k == 0.0);
        if (c2_rEQ0) {
          c2_n_k = 0.0;
        } else if (c2_j_x < 0.0) {
          c2_n_k += 508.0;
        }
      }
    }

    c2_i_a = c2_n_k;
    c2_b_c = (int32_T)c2_i_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_ub_emlrtRSI;
  c2_b_st.site = &c2_vb_emlrtRSI;
  for (c2_i10 = 0; c2_i10 < 6; c2_i10++) {
    c2_copyCols[c2_i10] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 6; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_g_a = c2_b_i2 + 253;
    c2_b_i2 = c2_g_a;
    c2_h_a = c2_b_i1 + 1;
    c2_b_i1 = c2_h_a;
    c2_j_a = c2_b_i2 + 1;
    c2_b_i2 = c2_j_a;
    c2_k_a = c2_iy + 1;
    c2_iy = c2_k_a;
    c2_c_st.site = &c2_wb_emlrtRSI;
    c2_l_a = c2_b_i1;
    c2_d_b = c2_b_i2;
    c2_m_a = c2_l_a;
    c2_e_b = c2_d_b;
    if (c2_m_a > c2_e_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_e_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_xb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_f[c2_b_ix] == 0.0) {
        c2_f_b = true;
      } else {
        c2_m_x = c2_f[c2_b_ix];
        c2_g_b = muDoubleScalarIsNaN(c2_m_x);
        if (c2_g_b) {
          c2_f_b = true;
        } else {
          c2_f_b = false;
        }
      }

      if (!c2_f_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 6; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 6; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 254;
  for (c2_i11 = 0; c2_i11 < 254; c2_i11++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_loop_ub; c2_i12++) {
      c2_weights_data[c2_i12 + c2_weights_size[0] * c2_i11] = c2_f[c2_i11 + 254 *
        (c2_tmp_data[c2_i12] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 6; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 6; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 254;
  for (c2_i13 = 0; c2_i13 < 254; c2_i13++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_b_loop_ub; c2_i14++) {
      c2_indices_data[c2_i14 + c2_indices_size[0] * c2_i13] = c2_indices[c2_i13
        + 254 * (c2_b_tmp_data[c2_i14] - 1)];
    }
  }
}

static void c2_check_forloop_overflow_error(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14, sf_mex_call
              (c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c2_sp, NULL,
    "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
}

static void c2_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, uint8_T c2_in_[83312], real_T c2_weights_data[], int32_T
  c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[83312])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  real_T c2_siz[2];
  real_T c2_b_inCInd;
  real_T c2_b_outRInd;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_ndx;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_c_a;
  int32_T c2_c_inCInd;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_inCInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outRInd;
  uint8_T c2_inCol[254];
  uint8_T c2_u;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_yb_emlrtRSI;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  for (c2_inCInd = 0; c2_inCInd < 328; c2_inCInd++) {
    c2_b_inCInd = (real_T)c2_inCInd + 1.0;
    c2_c_inCInd = (int32_T)c2_b_inCInd - 1;
    for (c2_i = 0; c2_i < 254; c2_i++) {
      c2_inCol[c2_i] = c2_in_[c2_i + 254 * c2_c_inCInd];
    }

    for (c2_outRInd = 0; c2_outRInd < 254; c2_outRInd++) {
      c2_b_outRInd = (real_T)c2_outRInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_ac_emlrtRSI;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_siz[c2_i1] = (real_T)c2_weights_size[c2_i1];
      }

      c2_varargin_2 = c2_b_outRInd;
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_b_siz[c2_i2] = (int32_T)c2_siz[c2_i2];
      }

      c2_c_st.site = &c2_bc_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i3 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i3; c2_k++) {
        c2_sumVal1 += c2_weights_data[c2_linearInds] * (real_T)
          c2_inCol[c2_indices_data[c2_linearInds] - 1];
        c2_c_a = c2_linearInds + 1;
        c2_linearInds = c2_c_a;
      }

      c2_d1 = muDoubleScalarRound(c2_sumVal1);
      if (c2_d1 < 256.0) {
        if (c2_d1 >= 0.0) {
          c2_u = (uint8_T)c2_d1;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d1 >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_out_[((int32_T)c2_b_outRInd + 254 * ((int32_T)c2_b_inCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static int32_T c2_eml_sub2ind(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_siz[2], real_T c2_varargin_2)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_g_x;
  int32_T c2_b_hi;
  int32_T c2_c_hi;
  int32_T c2_hi;
  int32_T c2_psiz;
  boolean_T c2_b;
  boolean_T c2_b1;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_hi = c2_siz[0];
  c2_b_hi = c2_hi;
  if (1.0 <= (real_T)c2_b_hi) {
    c2_b = true;
  } else {
    c2_b = false;
  }

  if (!c2_b) {
    c2_p = false;
  } else {
    c2_p = true;
  }

  if (!c2_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c2_sp, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_hi = c2_siz[1];
  c2_g_x = c2_varargin_2;
  c2_c_hi = c2_hi;
  if (c2_g_x <= (real_T)c2_c_hi) {
    c2_b1 = true;
  } else {
    c2_b1 = false;
  }

  if (!c2_b1) {
    c2_b_p = false;
  } else {
    c2_b_p = true;
  }

  if (!c2_b_p) {
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_e_y = NULL;
    sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c2_sp, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 1U, 14, c2_e_y)));
  }

  c2_psiz = c2_siz[0];
  return 1 + c2_psiz * ((int32_T)c2_varargin_2 - 1);
}

static void c2_b_contributions(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, real_T c2_weights_data[], int32_T c2_weights_size[2],
  int32_T c2_indices_data[], int32_T c2_indices_size[2])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  real_T c2_absx[1968];
  real_T c2_absx2[1968];
  real_T c2_absx3[1968];
  real_T c2_e_y[1968];
  real_T c2_f[1968];
  real_T c2_f_y[1968];
  real_T c2_g_y[328];
  real_T c2_b_y;
  real_T c2_c_a;
  real_T c2_c_y;
  real_T c2_d_a;
  real_T c2_d_i;
  real_T c2_d_y;
  real_T c2_f_a;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_a;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_m_x;
  real_T c2_n_k;
  real_T c2_oldIdx;
  int32_T c2_indices[1968];
  int32_T c2_aux[656];
  int32_T c2_b_tmp_data[6];
  int32_T c2_tmp_data[6];
  int32_T c2_b_tmp_size[2];
  int32_T c2_tmp_size[2];
  int32_T c2_b;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i1;
  int32_T c2_b_i2;
  int32_T c2_b_ia;
  int32_T c2_b_ib;
  int32_T c2_b_ic;
  int32_T c2_b_ix;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_2;
  int32_T c2_b_varargin_3;
  int32_T c2_b_varargin_5;
  int32_T c2_b_varargin_6;
  int32_T c2_b_xj;
  int32_T c2_c;
  int32_T c2_c_i;
  int32_T c2_c_ia;
  int32_T c2_c_ib;
  int32_T c2_c_ic;
  int32_T c2_c_k;
  int32_T c2_c_varargin_1;
  int32_T c2_c_varargin_2;
  int32_T c2_c_varargin_3;
  int32_T c2_c_xj;
  int32_T c2_d_b;
  int32_T c2_d_ia;
  int32_T c2_d_ib;
  int32_T c2_d_ic;
  int32_T c2_d_k;
  int32_T c2_d_varargin_1;
  int32_T c2_d_varargin_2;
  int32_T c2_d_varargin_3;
  int32_T c2_e_a;
  int32_T c2_e_b;
  int32_T c2_e_i;
  int32_T c2_e_ic;
  int32_T c2_e_k;
  int32_T c2_e_varargin_1;
  int32_T c2_e_varargin_3;
  int32_T c2_f_i;
  int32_T c2_f_ic;
  int32_T c2_f_k;
  int32_T c2_f_varargin_1;
  int32_T c2_g_a;
  int32_T c2_g_i;
  int32_T c2_g_k;
  int32_T c2_g_varargin_1;
  int32_T c2_h_a;
  int32_T c2_h_i;
  int32_T c2_h_k;
  int32_T c2_h_varargin_1;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_i_k;
  int32_T c2_ia;
  int32_T c2_ib;
  int32_T c2_ic;
  int32_T c2_ix;
  int32_T c2_iy;
  int32_T c2_j_a;
  int32_T c2_j_k;
  int32_T c2_k;
  int32_T c2_k_a;
  int32_T c2_k_k;
  int32_T c2_l_a;
  int32_T c2_l_k;
  int32_T c2_loop_ub;
  int32_T c2_m_a;
  int32_T c2_m_k;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  int32_T c2_varargin_2;
  int32_T c2_varargin_3;
  int32_T c2_varargin_4;
  int32_T c2_varargin_5;
  int32_T c2_varargin_6;
  int32_T c2_xj;
  int32_T c2_xoffset;
  boolean_T c2_bv[1968];
  boolean_T c2_bv1[1968];
  boolean_T c2_copyCols[6];
  boolean_T c2_b_b;
  boolean_T c2_c_b;
  boolean_T c2_exitg1;
  boolean_T c2_f_b;
  boolean_T c2_g_b;
  boolean_T c2_overflow;
  boolean_T c2_rEQ0;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  for (c2_k = 0; c2_k < 6; c2_k++) {
    c2_ib = c2_k;
    c2_ic = c2_k;
    c2_c_varargin_1 = c2_ic + 1;
    c2_varargin_3 = c2_ib + 1;
    for (c2_d_k = 0; c2_d_k < 328; c2_d_k++) {
      c2_ia = c2_d_k;
      c2_c_ic = c2_d_k;
      c2_e_varargin_1 = c2_c_ic;
      c2_varargin_2 = c2_c_varargin_1 - 1;
      c2_c_varargin_3 = c2_ia;
      c2_varargin_6 = c2_varargin_3 - 1;
      c2_e_a = -1 + c2_c_varargin_3;
      c2_b = c2_varargin_6;
      c2_c = c2_e_a + c2_b;
      c2_indices[c2_e_varargin_1 + 328 * c2_varargin_2] = c2_c;
    }
  }

  for (c2_i = 0; c2_i < 1968; c2_i++) {
    c2_absx2[c2_i] = (real_T)c2_indices[c2_i];
  }

  for (c2_b_k = 0; c2_b_k < 6; c2_b_k++) {
    c2_b_ib = c2_b_k;
    c2_b_ic = c2_b_k;
    c2_d_varargin_1 = c2_b_ic + 1;
    c2_b_varargin_3 = c2_b_ib + 1;
    for (c2_i_k = 0; c2_i_k < 328; c2_i_k++) {
      c2_b_ia = c2_i_k;
      c2_c_ib = c2_i_k;
      c2_d_ic = c2_i_k;
      c2_f_varargin_1 = c2_d_ic;
      c2_b_varargin_2 = c2_d_varargin_1 - 1;
      c2_d_varargin_3 = c2_b_ia;
      c2_varargin_5 = c2_c_ib;
      c2_b_varargin_6 = c2_b_varargin_3 - 1;
      c2_absx3[c2_f_varargin_1 + 328 * c2_b_varargin_2] = (1.0 + (real_T)
        c2_d_varargin_3) - c2_absx2[c2_varargin_5 + 328 * c2_b_varargin_6];
    }
  }

  for (c2_c_k = 0; c2_c_k < 1968; c2_c_k++) {
    c2_f_k = c2_c_k;
    c2_g_x = c2_absx3[c2_f_k];
    c2_b_y = muDoubleScalarAbs(c2_g_x);
    c2_absx[c2_f_k] = c2_b_y;
  }

  for (c2_e_k = 0; c2_e_k < 1968; c2_e_k++) {
    c2_h_k = c2_e_k;
    c2_c_a = c2_absx[c2_h_k];
    c2_c_y = c2_c_a * c2_c_a;
    c2_absx2[c2_h_k] = c2_c_y;
  }

  for (c2_g_k = 0; c2_g_k < 1968; c2_g_k++) {
    c2_j_k = c2_g_k;
    c2_d_a = c2_absx[c2_j_k];
    c2_d_y = muDoubleScalarPower(c2_d_a, 3.0);
    c2_absx3[c2_j_k] = c2_d_y;
  }

  for (c2_i1 = 0; c2_i1 < 1968; c2_i1++) {
    c2_bv[c2_i1] = (1.0 < c2_absx[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 1968; c2_i2++) {
    c2_bv1[c2_i2] = (c2_absx[c2_i2] <= 2.0);
  }

  for (c2_i3 = 0; c2_i3 < 1968; c2_i3++) {
    c2_f[c2_i3] = 1.5 * c2_absx3[c2_i3];
  }

  for (c2_i4 = 0; c2_i4 < 1968; c2_i4++) {
    c2_e_y[c2_i4] = 2.5 * c2_absx2[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 1968; c2_i5++) {
    c2_absx3[c2_i5] *= -0.5;
  }

  for (c2_i6 = 0; c2_i6 < 1968; c2_i6++) {
    c2_absx2[c2_i6] *= 2.5;
  }

  for (c2_i7 = 0; c2_i7 < 1968; c2_i7++) {
    c2_f_y[c2_i7] = 4.0 * c2_absx[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 1968; c2_i8++) {
    c2_f[c2_i8] = ((c2_f[c2_i8] - c2_e_y[c2_i8]) + 1.0) * (real_T)(c2_absx[c2_i8]
      <= 1.0) + (((c2_absx3[c2_i8] + c2_absx2[c2_i8]) - c2_f_y[c2_i8]) + 2.0) *
      (real_T)(c2_bv[c2_i8] && c2_bv1[c2_i8]);
  }

  for (c2_xj = 0; c2_xj < 328; c2_xj++) {
    c2_b_xj = c2_xj;
    c2_g_y[c2_b_xj] = c2_f[c2_b_xj];
  }

  for (c2_k_k = 0; c2_k_k < 5; c2_k_k++) {
    c2_xoffset = (c2_k_k + 1) * 328;
    for (c2_c_xj = 0; c2_c_xj < 328; c2_c_xj++) {
      c2_b_xj = c2_c_xj;
      c2_ix = c2_xoffset + c2_b_xj;
      c2_g_y[c2_b_xj] += c2_f[c2_ix];
    }
  }

  for (c2_i9 = 0; c2_i9 < 1968; c2_i9++) {
    c2_absx2[c2_i9] = c2_f[c2_i9];
  }

  for (c2_l_k = 0; c2_l_k < 6; c2_l_k++) {
    c2_c_ia = c2_l_k;
    c2_e_ic = c2_l_k;
    c2_g_varargin_1 = c2_e_ic + 1;
    c2_c_varargin_2 = c2_c_ia + 1;
    for (c2_m_k = 0; c2_m_k < 328; c2_m_k++) {
      c2_d_ia = c2_m_k;
      c2_d_ib = c2_m_k;
      c2_f_ic = c2_m_k;
      c2_h_varargin_1 = c2_f_ic;
      c2_d_varargin_2 = c2_g_varargin_1 - 1;
      c2_e_varargin_3 = c2_d_ia;
      c2_varargin_4 = c2_c_varargin_2 - 1;
      c2_b_varargin_5 = c2_d_ib;
      c2_f[c2_h_varargin_1 + 328 * c2_d_varargin_2] = c2_absx2[c2_e_varargin_3 +
        328 * c2_varargin_4] / c2_g_y[c2_b_varargin_5];
    }
  }

  c2_aux[0] = 1;
  c2_aux[328] = 328;
  for (c2_b_i = 0; c2_b_i < 327; c2_b_i++) {
    c2_aux[c2_b_i + 1] = c2_aux[c2_b_i] + 1;
    c2_aux[c2_b_i + 329] = c2_aux[c2_b_i + 328] - 1;
  }

  for (c2_c_i = 0; c2_c_i < 1968; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_oldIdx = (real_T)c2_indices[(int32_T)c2_d_i - 1];
    c2_h_x = c2_oldIdx - 1.0;
    c2_f_a = c2_h_x;
    c2_i_x = c2_f_a;
    c2_j_x = c2_i_x;
    c2_k_x = c2_j_x;
    c2_b_b = muDoubleScalarIsNaN(c2_k_x);
    if (c2_b_b) {
      c2_n_k = rtNaN;
    } else {
      c2_l_x = c2_j_x;
      c2_c_b = muDoubleScalarIsInf(c2_l_x);
      if (c2_c_b) {
        c2_n_k = rtNaN;
      } else if (c2_j_x == 0.0) {
        c2_n_k = 0.0;
      } else {
        c2_n_k = muDoubleScalarRem(c2_j_x, 656.0);
        c2_rEQ0 = (c2_n_k == 0.0);
        if (c2_rEQ0) {
          c2_n_k = 0.0;
        } else if (c2_j_x < 0.0) {
          c2_n_k += 656.0;
        }
      }
    }

    c2_i_a = c2_n_k;
    c2_b_c = (int32_T)c2_i_a;
    c2_indices[(int32_T)c2_d_i - 1] = c2_aux[c2_b_c];
  }

  c2_st.site = &c2_ub_emlrtRSI;
  c2_b_st.site = &c2_vb_emlrtRSI;
  for (c2_i10 = 0; c2_i10 < 6; c2_i10++) {
    c2_copyCols[c2_i10] = false;
  }

  c2_b_i2 = 0;
  c2_iy = -1;
  for (c2_e_i = 0; c2_e_i < 6; c2_e_i++) {
    c2_b_i1 = c2_b_i2;
    c2_g_a = c2_b_i2 + 327;
    c2_b_i2 = c2_g_a;
    c2_h_a = c2_b_i1 + 1;
    c2_b_i1 = c2_h_a;
    c2_j_a = c2_b_i2 + 1;
    c2_b_i2 = c2_j_a;
    c2_k_a = c2_iy + 1;
    c2_iy = c2_k_a;
    c2_c_st.site = &c2_wb_emlrtRSI;
    c2_l_a = c2_b_i1;
    c2_d_b = c2_b_i2;
    c2_m_a = c2_l_a;
    c2_e_b = c2_d_b;
    if (c2_m_a > c2_e_b) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_e_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_xb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_b_ix = c2_b_i1 - 1;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_b_ix + 1 <= c2_b_i2)) {
      if (c2_f[c2_b_ix] == 0.0) {
        c2_f_b = true;
      } else {
        c2_m_x = c2_f[c2_b_ix];
        c2_g_b = muDoubleScalarIsNaN(c2_m_x);
        if (c2_g_b) {
          c2_f_b = true;
        } else {
          c2_f_b = false;
        }
      }

      if (!c2_f_b) {
        c2_copyCols[c2_iy] = true;
        c2_exitg1 = true;
      } else {
        c2_b_ix++;
      }
    }
  }

  c2_trueCount = 0;
  for (c2_f_i = 0; c2_f_i < 6; c2_f_i++) {
    if (c2_copyCols[c2_f_i]) {
      c2_trueCount++;
    }
  }

  c2_tmp_size[1] = c2_trueCount;
  c2_partialTrueCount = 0;
  for (c2_g_i = 0; c2_g_i < 6; c2_g_i++) {
    if (c2_copyCols[c2_g_i]) {
      c2_tmp_data[c2_partialTrueCount] = c2_g_i + 1;
      c2_partialTrueCount++;
    }
  }

  c2_weights_size[0] = c2_tmp_size[1];
  c2_weights_size[1] = 328;
  for (c2_i11 = 0; c2_i11 < 328; c2_i11++) {
    c2_loop_ub = c2_tmp_size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_loop_ub; c2_i12++) {
      c2_weights_data[c2_i12 + c2_weights_size[0] * c2_i11] = c2_f[c2_i11 + 328 *
        (c2_tmp_data[c2_i12] - 1)];
    }
  }

  c2_b_trueCount = 0;
  for (c2_h_i = 0; c2_h_i < 6; c2_h_i++) {
    if (c2_copyCols[c2_h_i]) {
      c2_b_trueCount++;
    }
  }

  c2_b_tmp_size[1] = c2_b_trueCount;
  c2_b_partialTrueCount = 0;
  for (c2_i_i = 0; c2_i_i < 6; c2_i_i++) {
    if (c2_copyCols[c2_i_i]) {
      c2_b_tmp_data[c2_b_partialTrueCount] = c2_i_i + 1;
      c2_b_partialTrueCount++;
    }
  }

  c2_indices_size[0] = c2_b_tmp_size[1];
  c2_indices_size[1] = 328;
  for (c2_i13 = 0; c2_i13 < 328; c2_i13++) {
    c2_b_loop_ub = c2_b_tmp_size[1] - 1;
    for (c2_i14 = 0; c2_i14 <= c2_b_loop_ub; c2_i14++) {
      c2_indices_data[c2_i14 + c2_indices_size[0] * c2_i13] = c2_indices[c2_i13
        + 328 * (c2_b_tmp_data[c2_i14] - 1)];
    }
  }
}

static void c2_b_resizeAlongDim(SFc2_untitled1InstanceStruct *chartInstance,
  const emlrtStack *c2_sp, uint8_T c2_in_[83312], real_T c2_weights_data[],
  int32_T c2_weights_size[2], int32_T c2_indices_data[], uint8_T c2_out_[83312])
{
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_siz[2];
  real_T c2_b_inRInd;
  real_T c2_b_outCInd;
  real_T c2_c_varargin_1;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d_varargin_1;
  real_T c2_e_a;
  real_T c2_g_x;
  real_T c2_ndx;
  real_T c2_rowStart;
  real_T c2_sumVal1;
  real_T c2_varargin_2;
  int32_T c2_b_siz[2];
  int32_T c2_b_b;
  int32_T c2_b_c;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_d_a;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_idx;
  int32_T c2_inRInd;
  int32_T c2_k;
  int32_T c2_linearInds;
  int32_T c2_outCInd;
  int32_T c2_pixelIndex;
  uint8_T c2_pixelValue;
  uint8_T c2_u;
  boolean_T c2_b;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_yb_emlrtRSI;
  for (c2_inRInd = 0; c2_inRInd < 254; c2_inRInd++) {
    c2_b_inRInd = (real_T)c2_inRInd + 1.0;
    c2_b_st.site = &c2_ec_emlrtRSI;
    c2_c_varargin_1 = c2_b_inRInd;
    c2_c_st.site = &c2_bc_emlrtRSI;
    c2_d_varargin_1 = c2_c_varargin_1;
    c2_g_x = c2_d_varargin_1;
    if (c2_g_x <= 254.0) {
      c2_b = true;
    } else {
      c2_b = false;
    }

    if (!c2_b) {
      c2_p = false;
    } else {
      c2_p = true;
    }

    if (!c2_p) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_c_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_idx = (int32_T)c2_d_varargin_1;
    c2_rowStart = (real_T)c2_idx;
    for (c2_outCInd = 0; c2_outCInd < 328; c2_outCInd++) {
      c2_b_outCInd = (real_T)c2_outCInd + 1.0;
      c2_sumVal1 = 0.0;
      c2_b_st.site = &c2_fc_emlrtRSI;
      for (c2_i = 0; c2_i < 2; c2_i++) {
        c2_siz[c2_i] = (real_T)c2_weights_size[c2_i];
      }

      c2_varargin_2 = c2_b_outCInd;
      for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
        c2_b_siz[c2_i1] = (int32_T)c2_siz[c2_i1];
      }

      c2_c_st.site = &c2_bc_emlrtRSI;
      c2_ndx = (real_T)c2_eml_sub2ind(chartInstance, &c2_c_st, c2_b_siz,
        c2_varargin_2);
      c2_linearInds = (int32_T)c2_ndx - 1;
      c2_d = (real_T)c2_weights_size[0];
      c2_i2 = (int32_T)c2_d - 1;
      for (c2_k = 0; c2_k <= c2_i2; c2_k++) {
        c2_c_a = c2_indices_data[c2_linearInds] - 1;
        c2_c = c2_c_a;
        c2_d_a = c2_c;
        c2_b_c = c2_d_a * 254;
        c2_e_a = c2_rowStart;
        c2_b_b = c2_b_c;
        c2_pixelIndex = ((int32_T)c2_e_a + c2_b_b) - 1;
        c2_pixelValue = c2_in_[c2_pixelIndex];
        c2_sumVal1 += c2_weights_data[c2_linearInds] * (real_T)c2_pixelValue;
        c2_linearInds++;
      }

      c2_d1 = muDoubleScalarRound(c2_sumVal1);
      if (c2_d1 < 256.0) {
        if (c2_d1 >= 0.0) {
          c2_u = (uint8_T)c2_d1;
        } else {
          c2_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
        }
      } else if (c2_d1 >= 256.0) {
        c2_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
      } else {
        c2_u = 0U;
      }

      c2_out_[((int32_T)c2_b_inRInd + 254 * ((int32_T)c2_b_outCInd - 1)) - 1] =
        c2_u;
    }
  }
}

static real_T c2_sumColumnB4(SFc2_untitled1InstanceStruct *chartInstance, real_T
  c2_g_x[20828], int32_T c2_vstart)
{
  real_T c2_psum1;
  real_T c2_psum2;
  real_T c2_psum3;
  real_T c2_psum4;
  int32_T c2_b_k;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  (void)chartInstance;
  c2_i2 = c2_vstart + 1023;
  c2_i3 = c2_vstart + 2047;
  c2_i4 = c2_vstart + 3071;
  c2_psum1 = c2_g_x[c2_vstart - 1];
  c2_psum2 = c2_g_x[c2_i2];
  c2_psum3 = c2_g_x[c2_i3];
  c2_psum4 = c2_g_x[c2_i4];
  for (c2_k = 0; c2_k < 1023; c2_k++) {
    c2_b_k = c2_k + 1;
    c2_psum1 += c2_g_x[(c2_vstart + c2_b_k) - 1];
    c2_psum2 += c2_g_x[c2_i2 + c2_b_k];
    c2_psum3 += c2_g_x[c2_i3 + c2_b_k];
    c2_psum4 += c2_g_x[c2_i4 + c2_b_k];
  }

  return (c2_psum1 + c2_psum2) + (c2_psum3 + c2_psum4);
}

static real_T c2_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance, real_T
  c2_g_x[20828])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_g_x[20480];
  for (c2_k = 0; c2_k < 347; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_g_x[c2_b_k + 20481];
  }

  return c2_b_y;
}

static real_T c2_b_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x)
{
  real_T c2_h_x;
  (void)chartInstance;
  c2_h_x = c2_g_x;
  return c2_h_x;
}

static void c2_log(SFc2_untitled1InstanceStruct *chartInstance, const emlrtStack
                   *c2_sp, real_T c2_g_x[83312], real_T c2_h_x[83312])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    c2_h_x[c2_i] = c2_g_x[c2_i];
  }

  c2_b_log(chartInstance, c2_sp, c2_h_x);
}

static void c2_fft2(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x
                    [83312], creal_T c2_b_y[83312])
{
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_R2C(&c2_g_x[0], (real_T *)&chartInstance->c2_b_acc[0], 1, 254,
                   254, 328, -1);
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&chartInstance->c2_b_acc[0], (real_T *)&c2_b_y[0],
                   254, 328, 328, 254, -1);
}

static boolean_T c2_fltpower_domain_error(SFc2_untitled1InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
  return false;
}

static void c2_ifft2(SFc2_untitled1InstanceStruct *chartInstance, creal_T
                     c2_g_x[83312], creal_T c2_b_y[83312])
{
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&c2_g_x[0], (real_T *)&chartInstance->c2_acc[0], 1,
                   254, 254, 328, 1);
  emlrtFFTWSetNumThreads(6);
  emlrtFFTW_1D_C2C((real_T *)&chartInstance->c2_acc[0], (real_T *)&c2_b_y[0],
                   254, 328, 328, 254, 1);
}

static void c2_exp(SFc2_untitled1InstanceStruct *chartInstance, creal_T c2_g_x
                   [83312], creal_T c2_h_x[83312])
{
  int32_T c2_i;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    c2_h_x[c2_i] = c2_g_x[c2_i];
  }

  c2_b_exp(chartInstance, c2_h_x);
}

static real_T c2_maximum(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_g_x[83312])
{
  c2_emxArray_real_T *c2_h_x;
  real_T c2_b_ex;
  real_T c2_ex;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_b_k;
  int32_T c2_first;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_idx;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_exitg1;
  boolean_T c2_p;
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_h_x, 1, &c2_d_emlrtRTEI);
  c2_i = c2_h_x->size[0];
  c2_h_x->size[0] = 83312;
  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_h_x, c2_i,
    &c2_d_emlrtRTEI);
  for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
    c2_h_x->data[c2_i1] = c2_g_x[c2_i1];
  }

  c2_i_x = c2_h_x->data[0];
  c2_j_x = c2_i_x;
  c2_b = muDoubleScalarIsNaN(c2_j_x);
  c2_p = !c2_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k < 83313)) {
      c2_k_x = c2_h_x->data[c2_k - 1];
      c2_l_x = c2_k_x;
      c2_b_b = muDoubleScalarIsNaN(c2_l_x);
      c2_b_p = !c2_b_b;
      if (c2_b_p) {
        c2_idx = c2_k;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_ex = c2_h_x->data[0];
  } else {
    c2_first = c2_idx - 1;
    c2_b_ex = c2_h_x->data[c2_first];
    c2_i2 = c2_first;
    for (c2_b_k = c2_i2 + 1; c2_b_k + 1 < 83313; c2_b_k++) {
      if (c2_b_ex < c2_h_x->data[c2_b_k]) {
        c2_b_ex = c2_h_x->data[c2_b_k];
      }
    }

    c2_ex = c2_b_ex;
  }

  c2_emxFree_real_T(chartInstance, &c2_h_x);
  return c2_ex;
}

static real_T c2_minimum(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_g_x[83312])
{
  c2_emxArray_real_T *c2_h_x;
  real_T c2_b_ex;
  real_T c2_ex;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_k_x;
  real_T c2_l_x;
  int32_T c2_b_k;
  int32_T c2_first;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_idx;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_exitg1;
  boolean_T c2_p;
  c2_emxInit_real_T(chartInstance, c2_sp, &c2_h_x, 1, &c2_e_emlrtRTEI);
  c2_i = c2_h_x->size[0];
  c2_h_x->size[0] = 83312;
  c2_emxEnsureCapacity_real_T(chartInstance, c2_sp, c2_h_x, c2_i,
    &c2_e_emlrtRTEI);
  for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
    c2_h_x->data[c2_i1] = c2_g_x[c2_i1];
  }

  c2_i_x = c2_h_x->data[0];
  c2_j_x = c2_i_x;
  c2_b = muDoubleScalarIsNaN(c2_j_x);
  c2_p = !c2_b;
  if (c2_p) {
    c2_idx = 1;
  } else {
    c2_idx = 0;
    c2_k = 2;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k < 83313)) {
      c2_k_x = c2_h_x->data[c2_k - 1];
      c2_l_x = c2_k_x;
      c2_b_b = muDoubleScalarIsNaN(c2_l_x);
      c2_b_p = !c2_b_b;
      if (c2_b_p) {
        c2_idx = c2_k;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }
  }

  if (c2_idx == 0) {
    c2_ex = c2_h_x->data[0];
  } else {
    c2_first = c2_idx - 1;
    c2_b_ex = c2_h_x->data[c2_first];
    c2_i2 = c2_first;
    for (c2_b_k = c2_i2 + 1; c2_b_k + 1 < 83313; c2_b_k++) {
      if (c2_b_ex > c2_h_x->data[c2_b_k]) {
        c2_b_ex = c2_h_x->data[c2_b_k];
      }
    }

    c2_ex = c2_b_ex;
  }

  c2_emxFree_real_T(chartInstance, &c2_h_x);
  return c2_ex;
}

static real_T c2_mean(SFc2_untitled1InstanceStruct *chartInstance, real_T
                      c2_g_x[83312])
{
  real_T c2_c_y;
  real_T c2_s;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_ib;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    chartInstance->c2_x[c2_i] = c2_g_x[c2_i];
  }

  c2_s = c2_b_sumColumnB4(chartInstance, chartInstance->c2_x, 1);
  for (c2_ib = 0; c2_ib < 19; c2_ib++) {
    for (c2_i2 = 0; c2_i2 < 83312; c2_i2++) {
      chartInstance->c2_c_x[c2_i2] = c2_g_x[c2_i2];
    }

    c2_s += c2_b_sumColumnB4(chartInstance, chartInstance->c2_c_x, 1 + ((c2_ib +
      1) << 12));
  }

  for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
    chartInstance->c2_b_x[c2_i1] = c2_g_x[c2_i1];
  }

  c2_s += c2_c_sumColumnB(chartInstance, chartInstance->c2_b_x);
  c2_c_y = c2_s;
  return c2_c_y / 83312.0;
}

static real_T c2_b_sumColumnB4(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312], int32_T c2_vstart)
{
  real_T c2_psum1;
  real_T c2_psum2;
  real_T c2_psum3;
  real_T c2_psum4;
  int32_T c2_b_k;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_k;
  (void)chartInstance;
  c2_i2 = c2_vstart + 1023;
  c2_i3 = c2_vstart + 2047;
  c2_i4 = c2_vstart + 3071;
  c2_psum1 = c2_g_x[c2_vstart - 1];
  c2_psum2 = c2_g_x[c2_i2];
  c2_psum3 = c2_g_x[c2_i3];
  c2_psum4 = c2_g_x[c2_i4];
  for (c2_k = 0; c2_k < 1023; c2_k++) {
    c2_b_k = c2_k + 1;
    c2_psum1 += c2_g_x[(c2_vstart + c2_b_k) - 1];
    c2_psum2 += c2_g_x[c2_i2 + c2_b_k];
    c2_psum3 += c2_g_x[c2_i3 + c2_b_k];
    c2_psum4 += c2_g_x[c2_i4 + c2_b_k];
  }

  return (c2_psum1 + c2_psum2) + (c2_psum3 + c2_psum4);
}

static real_T c2_c_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312])
{
  real_T c2_b_y;
  real_T c2_c_y;
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_d_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_g_x[81920];
  for (c2_k = 1; c2_k - 1 < 1023; c2_k++) {
    c2_b_k = c2_k + 81920;
    c2_b_y += c2_g_x[c2_b_k];
  }

  c2_c_y = c2_g_x[82944];
  for (c2_c_k = 1; c2_c_k - 1 < 367; c2_c_k++) {
    c2_d_k = c2_c_k + 82944;
    c2_c_y += c2_g_x[c2_d_k];
  }

  c2_b_y += c2_c_y;
  return c2_b_y;
}

static void c2_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_varargin_1[83312], real_T c2_b[83312])
{
  static real_T c2_kernel[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0, -1.0
  };

  static real_T c2_nonZeroKernel[6] = { 1.0, -1.0, 2.0, -2.0, 1.0, -1.0 };

  static boolean_T c2_conn[9] = { true, false, true, true, false, true, true,
    false, true };

  emlrtStack c2_st;
  real_T c2_connDimsT[2];
  real_T c2_outSizeT[2];
  real_T c2_padSizeT[2];
  real_T c2_startT[2];
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  boolean_T c2_modeFlag;
  boolean_T c2_tooBig;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_uc_emlrtRSI;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    chartInstance->c2_b_varargin_1[c2_i] = c2_c_varargin_1[c2_i];
  }

  c2_padImage(chartInstance, &c2_st, chartInstance->c2_b_varargin_1,
              chartInstance->c2_b_a);
  c2_tooBig = true;
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    c2_tooBig = false;
  }

  if (!c2_tooBig) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 256.0 + 74.0 * (real_T)c2_i2;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 254.0 + 74.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 3.0;
    }

    ippfilter_real64(&chartInstance->c2_b_a[0], &c2_b[0], &c2_outSizeT[0], 2.0,
                     &c2_padSizeT[0], &c2_kernel[0], &c2_connDimsT[0], false);
  } else {
    for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
      c2_padSizeT[c2_i1] = 256.0 + 74.0 * (real_T)c2_i1;
    }

    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_outSizeT[c2_i3] = 254.0 + 74.0 * (real_T)c2_i3;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_connDimsT[c2_i5] = 3.0;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_startT[c2_i7] = 1.0;
    }

    imfilter_real64(&chartInstance->c2_b_a[0], &c2_b[0], 2.0, &c2_outSizeT[0],
                    2.0, &c2_padSizeT[0], &c2_nonZeroKernel[0], 6.0, &c2_conn[0],
                    2.0, &c2_connDimsT[0], &c2_startT[0], 2.0, true, false);
  }
}

static real_T c2_sqrt(SFc2_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, real_T c2_g_x)
{
  real_T c2_h_x;
  c2_h_x = c2_g_x;
  c2_b_sqrt(chartInstance, c2_sp, &c2_h_x);
  return c2_h_x;
}

static void c2_padImage(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_a_tmp[83312], real_T c2_c_a[84480])
{
  static int32_T c2_idxA[660] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
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

  emlrtStack c2_st;
  real_T c2_b_i;
  real_T c2_b_j;
  int32_T c2_c_i;
  int32_T c2_i;
  int32_T c2_j;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_wc_emlrtRSI;
  for (c2_j = 0; c2_j < 330; c2_j++) {
    c2_b_j = (real_T)c2_j + 1.0;
    for (c2_i = 0; c2_i < 256; c2_i++) {
      c2_b_i = (real_T)c2_i + 1.0;
      if ((c2_idxA[(int32_T)c2_b_i - 1] < 1) || (c2_idxA[(int32_T)c2_b_i - 1] >
           254)) {
        emlrtDynamicBoundsCheckR2012b(c2_idxA[(int32_T)c2_b_i - 1], 1, 254,
          &c2_id_emlrtBCI, &c2_st);
      }

      c2_c_i = c2_idxA[(int32_T)c2_b_j + 329];
      if ((c2_c_i < 1) || (c2_c_i > 328)) {
        emlrtDynamicBoundsCheckR2012b(c2_c_i, 1, 328, &c2_jd_emlrtBCI, &c2_st);
      }

      c2_c_a[((int32_T)c2_b_i + (((int32_T)c2_b_j - 1) << 8)) - 1] = c2_a_tmp
        [(c2_idxA[(int32_T)c2_b_i - 1] + 254 * (c2_c_i - 1)) - 1];
    }
  }
}

static void c2_b_imfilter(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real_T c2_c_varargin_1[83312], real_T c2_b[83312])
{
  static real_T c2_kernel[9] = { 1.0, 2.0, 1.0, 0.0, 0.0, 0.0, -1.0, -2.0, -1.0
  };

  static real_T c2_nonZeroKernel[6] = { 1.0, 2.0, 1.0, -1.0, -2.0, -1.0 };

  static boolean_T c2_conn[9] = { true, true, true, false, false, false, true,
    true, true };

  emlrtStack c2_st;
  real_T c2_connDimsT[2];
  real_T c2_outSizeT[2];
  real_T c2_padSizeT[2];
  real_T c2_startT[2];
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  boolean_T c2_b_modeFlag;
  boolean_T c2_c_modeFlag;
  boolean_T c2_modeFlag;
  boolean_T c2_tooBig;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_uc_emlrtRSI;
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    chartInstance->c2_varargin_1[c2_i] = c2_c_varargin_1[c2_i];
  }

  c2_padImage(chartInstance, &c2_st, chartInstance->c2_varargin_1,
              chartInstance->c2_a);
  c2_tooBig = true;
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    c2_tooBig = false;
  }

  if (!c2_tooBig) {
    c2_modeFlag = true;
  } else {
    c2_modeFlag = false;
  }

  if (c2_modeFlag) {
    c2_b_modeFlag = true;
  } else {
    c2_b_modeFlag = false;
  }

  c2_c_modeFlag = c2_b_modeFlag;
  if (c2_c_modeFlag) {
    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_padSizeT[c2_i2] = 256.0 + 74.0 * (real_T)c2_i2;
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_outSizeT[c2_i4] = 254.0 + 74.0 * (real_T)c2_i4;
    }

    for (c2_i6 = 0; c2_i6 < 2; c2_i6++) {
      c2_connDimsT[c2_i6] = 3.0;
    }

    ippfilter_real64(&chartInstance->c2_a[0], &c2_b[0], &c2_outSizeT[0], 2.0,
                     &c2_padSizeT[0], &c2_kernel[0], &c2_connDimsT[0], false);
  } else {
    for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
      c2_padSizeT[c2_i1] = 256.0 + 74.0 * (real_T)c2_i1;
    }

    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_outSizeT[c2_i3] = 254.0 + 74.0 * (real_T)c2_i3;
    }

    for (c2_i5 = 0; c2_i5 < 2; c2_i5++) {
      c2_connDimsT[c2_i5] = 3.0;
    }

    for (c2_i7 = 0; c2_i7 < 2; c2_i7++) {
      c2_startT[c2_i7] = 1.0;
    }

    imfilter_real64(&chartInstance->c2_a[0], &c2_b[0], 2.0, &c2_outSizeT[0], 2.0,
                    &c2_padSizeT[0], &c2_nonZeroKernel[0], 6.0, &c2_conn[0], 2.0,
                    &c2_connDimsT[0], &c2_startT[0], 2.0, true, false);
  }
}

static void c2_b_mean(SFc2_untitled1InstanceStruct *chartInstance, real_T
                      c2_g_x[83312], real_T c2_b_y[328])
{
  int32_T c2_b_col;
  int32_T c2_col;
  int32_T c2_i;
  int32_T c2_i1;
  for (c2_col = 0; c2_col < 328; c2_col++) {
    c2_b_col = c2_col;
    for (c2_i1 = 0; c2_i1 < 83312; c2_i1++) {
      chartInstance->c2_d_x[c2_i1] = c2_g_x[c2_i1];
    }

    c2_b_y[c2_b_col] = c2_d_sumColumnB(chartInstance, chartInstance->c2_d_x,
      c2_b_col + 1);
  }

  for (c2_i = 0; c2_i < 328; c2_i++) {
    c2_b_y[c2_i] /= 254.0;
  }
}

static real_T c2_d_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[83312], int32_T c2_col)
{
  real_T c2_b_y;
  int32_T c2_b_col;
  int32_T c2_b_k;
  int32_T c2_i0;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_col = c2_col - 1;
  c2_i0 = c2_b_col * 254;
  c2_b_y = c2_g_x[c2_i0];
  for (c2_k = 0; c2_k < 253; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_g_x[(c2_i0 + c2_b_k) + 1];
  }

  return c2_b_y;
}

static real_T c2_e_sumColumnB(SFc2_untitled1InstanceStruct *chartInstance,
  real_T c2_g_x[328])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = c2_g_x[0];
  for (c2_k = 0; c2_k < 327; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += c2_g_x[c2_b_k + 1];
  }

  return c2_b_y;
}

static void c2_power(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_c_a
                     [83312], real_T c2_b_y[83312])
{
  real_T c2_c_y;
  real_T c2_d_a;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 83312; c2_k++) {
    c2_b_k = c2_k;
    c2_d_a = c2_c_a[c2_b_k];
    c2_c_y = c2_d_a * c2_d_a;
    c2_b_y[c2_b_k] = c2_c_y;
  }
}

static void c2_sum(SFc2_untitled1InstanceStruct *chartInstance, real_T c2_g_x
                   [83312], real_T c2_b_y[328])
{
  int32_T c2_b_col;
  int32_T c2_col;
  int32_T c2_i;
  for (c2_col = 0; c2_col < 328; c2_col++) {
    c2_b_col = c2_col;
    for (c2_i = 0; c2_i < 83312; c2_i++) {
      chartInstance->c2_e_x[c2_i] = c2_g_x[c2_i];
    }

    c2_b_y[c2_b_col] = c2_d_sumColumnB(chartInstance, chartInstance->c2_e_x,
      c2_b_col + 1);
  }
}

static boolean_T c2_b_fltpower_domain_error(SFc2_untitled1InstanceStruct
  *chartInstance, real_T c2_c_a, real_T c2_b)
{
  real_T c2_b_b;
  real_T c2_c_b;
  real_T c2_d_a;
  real_T c2_e_a;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_i_x;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  (void)chartInstance;
  c2_d_a = c2_c_a;
  c2_b_b = c2_b;
  c2_e_a = c2_d_a;
  c2_b_p = (c2_e_a < 0.0);
  if (c2_b_p) {
    c2_c_b = c2_b_b;
    c2_g_x = c2_c_b;
    c2_d_b = muDoubleScalarIsNaN(c2_g_x);
    if (!c2_d_b) {
      c2_h_x = c2_c_b;
      c2_i_x = c2_h_x;
      c2_i_x = muDoubleScalarFloor(c2_i_x);
      if (c2_i_x != c2_c_b) {
        c2_d_p = true;
      } else {
        c2_d_p = false;
      }
    } else {
      c2_d_p = false;
    }

    c2_e_p = c2_d_p;
    if (c2_e_p) {
      c2_c_p = true;
    } else {
      c2_c_p = false;
    }
  } else {
    c2_c_p = false;
  }

  return c2_c_p;
}

static void c2_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_y, const char_T *c2_identifier, uint8_T c2_c_y[83312])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_y), &c2_thisId, c2_c_y);
  sf_mex_destroy(&c2_b_y);
}

static void c2_b_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint8_T c2_b_y
  [83312])
{
  int32_T c2_i;
  uint8_T c2_uv[83312];
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_uv, 1, 3, 0U, 1, 0U, 2, 254,
                328);
  for (c2_i = 0; c2_i < 83312; c2_i++) {
    c2_b_y[c2_i] = c2_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static uint8_T c2_c_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_untitled1, const char_T *c2_identifier)
{
  emlrtMsgIdentifier c2_thisId;
  uint8_T c2_b_y;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_untitled1), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_untitled1);
  return c2_b_y;
}

static uint8_T c2_d_emlrt_marshallIn(SFc2_untitled1InstanceStruct *chartInstance,
  const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_b_u;
  uint8_T c2_b_y;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_b_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_b_y;
}

static void c2_chart_data_browse_helper(SFc2_untitled1InstanceStruct
  *chartInstance, int32_T c2_ssIdNumber, const mxArray **c2_mxData, uint8_T
  *c2_isValueTooBig)
{
  real_T c2_d;
  *c2_mxData = NULL;
  *c2_mxData = NULL;
  *c2_isValueTooBig = 0U;
  switch (c2_ssIdNumber) {
   case 4U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_IR1, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 5U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_y, 3, 0U,
      1U, 0U, 2, 254, 328), false);
    break;

   case 6U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_IR2, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 7U:
    c2_d = *chartInstance->c2_f_x;
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 8U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_VIS1, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;

   case 9U:
    sf_mex_assign(c2_mxData, sf_mex_create("mxData", *chartInstance->c2_VIS2, 3,
      0U, 1U, 0U, 2, 254, 328), false);
    break;
  }
}

static void c2_b_log(SFc2_untitled1InstanceStruct *chartInstance, const
                     emlrtStack *c2_sp, real_T c2_g_x[83312])
{
  static char_T c2_b_cv[3] = { 'l', 'o', 'g' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  real_T c2_h_x;
  real_T c2_i_x;
  int32_T c2_b_k;
  int32_T c2_c_k;
  int32_T c2_k;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_p = false;
  for (c2_k = 0; c2_k < 83312; c2_k++) {
    if (c2_p) {
      c2_b_p = true;
    } else {
      c2_b_p = false;
    }

    c2_p = c2_b_p;
  }

  if (c2_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 3),
                  false);
    sf_mex_call(c2_sp, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  for (c2_b_k = 0; c2_b_k < 83312; c2_b_k++) {
    c2_c_k = c2_b_k;
    c2_h_x = c2_g_x[c2_c_k];
    c2_i_x = c2_h_x;
    c2_i_x = muDoubleScalarLog(c2_i_x);
    c2_g_x[c2_c_k] = c2_i_x;
  }
}

static void c2_b_exp(SFc2_untitled1InstanceStruct *chartInstance, creal_T
                     c2_g_x[83312])
{
  static creal_T c2_dc = { 0.0,        /* re */
    0.0                                /* im */
  };

  creal_T c2_h_x;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_r;
  int32_T c2_b_k;
  int32_T c2_k;
  boolean_T c2_b;
  boolean_T c2_b_b;
  boolean_T c2_guard1 = false;
  (void)chartInstance;
  for (c2_k = 0; c2_k < 83312; c2_k++) {
    c2_b_k = c2_k;
    c2_h_x = c2_g_x[c2_b_k];
    if (c2_h_x.im == 0.0) {
      c2_d = c2_h_x.re;
      c2_h_x.re = muDoubleScalarExp(c2_d);
      c2_h_x.im = 0.0;
    } else {
      c2_i_x = c2_h_x.im;
      c2_b = muDoubleScalarIsInf(c2_i_x);
      c2_guard1 = false;
      if (c2_b) {
        c2_j_x = c2_h_x.re;
        c2_b_b = muDoubleScalarIsInf(c2_j_x);
        if (c2_b_b && (c2_h_x.re < 0.0)) {
          c2_h_x = c2_dc;
        } else {
          c2_guard1 = true;
        }
      } else {
        c2_guard1 = true;
      }

      if (c2_guard1) {
        c2_r = muDoubleScalarExp(c2_h_x.re / 2.0);
        c2_d1 = c2_h_x.im;
        c2_d2 = c2_h_x.im;
        c2_h_x.re = c2_r * (c2_r * muDoubleScalarCos(c2_d1));
        c2_h_x.im = c2_r * (c2_r * muDoubleScalarSin(c2_d2));
      }
    }

    c2_g_x[c2_b_k] = c2_h_x;
  }
}

static void c2_b_sqrt(SFc2_untitled1InstanceStruct *chartInstance, const
                      emlrtStack *c2_sp, real_T *c2_g_x)
{
  static char_T c2_b_cv[4] = { 's', 'q', 'r', 't' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  real_T c2_h_x;
  boolean_T c2_b_p;
  boolean_T c2_p;
  (void)chartInstance;
  c2_h_x = *c2_g_x;
  if (c2_h_x < 0.0) {
    c2_p = true;
  } else {
    c2_p = false;
  }

  c2_b_p = c2_p;
  if (c2_b_p) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c2_sp, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c2_sp, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  *c2_g_x = muDoubleScalarSqrt(*c2_g_x);
}

static void c2_emxEnsureCapacity_real_T(SFc2_untitled1InstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_emxArray_real_T *c2_emxArray,
  int32_T c2_oldNumel, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  void *c2_newData;
  (void)chartInstance;
  if (c2_oldNumel < 0) {
    c2_oldNumel = 0;
  }

  c2_newNumel = 1;
  for (c2_i = 0; c2_i < c2_emxArray->numDimensions; c2_i++) {
    c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c2_newNumel,
      (size_t)(uint32_T)c2_emxArray->size[c2_i], c2_srcLocation, (void *)c2_sp);
  }

  if (c2_newNumel > c2_emxArray->allocatedSize) {
    c2_newCapacity = c2_emxArray->allocatedSize;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = emlrtCallocMex((uint32_T)c2_newCapacity, sizeof(real_T));
    if (c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_emxArray->data != NULL) {
      memcpy(c2_newData, c2_emxArray->data, sizeof(real_T) * (uint32_T)
             c2_oldNumel);
      if (c2_emxArray->canFreeData) {
        emlrtFreeMex(c2_emxArray->data);
      }
    }

    c2_emxArray->data = (real_T *)c2_newData;
    c2_emxArray->allocatedSize = c2_newCapacity;
    c2_emxArray->canFreeData = true;
  }
}

static void c2_emxInit_real_T(SFc2_untitled1InstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_emxArray_real_T **c2_pEmxArray, int32_T c2_numDimensions,
  const emlrtRTEInfo *c2_srcLocation)
{
  c2_emxArray_real_T *c2_emxArray;
  int32_T c2_i;
  (void)chartInstance;
  *c2_pEmxArray = (c2_emxArray_real_T *)emlrtMallocMex(sizeof(c2_emxArray_real_T));
  if ((void *)*c2_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray = *c2_pEmxArray;
  c2_emxArray->data = (real_T *)NULL;
  c2_emxArray->numDimensions = c2_numDimensions;
  c2_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c2_numDimensions);
  if ((void *)c2_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
  }

  c2_emxArray->allocatedSize = 0;
  c2_emxArray->canFreeData = true;
  for (c2_i = 0; c2_i < c2_numDimensions; c2_i++) {
    c2_emxArray->size[c2_i] = 0;
  }
}

static void c2_emxFree_real_T(SFc2_untitled1InstanceStruct *chartInstance,
  c2_emxArray_real_T **c2_pEmxArray)
{
  (void)chartInstance;
  if (*c2_pEmxArray != (c2_emxArray_real_T *)NULL) {
    if (((*c2_pEmxArray)->data != (real_T *)NULL) && (*c2_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c2_pEmxArray)->data);
    }

    emlrtFreeMex((*c2_pEmxArray)->size);
    emlrtFreeMex(*c2_pEmxArray);
    *c2_pEmxArray = (c2_emxArray_real_T *)NULL;
  }
}

static void init_dsm_address_info(SFc2_untitled1InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_untitled1InstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_IR1 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_y = (uint8_T (*)[83312])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_IR2 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_f_x = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_VIS1 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_VIS2 = (uint8_T (*)[83312])ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_untitled1_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3239228717U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(392010933U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(478239837U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(983279403U);
}

mxArray *sf_c2_untitled1_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,3);
  mxSetCell(mxcell3p, 0, mxCreateString("coder.internal.blas.BLASApi"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_untitled1_jit_fallback_info(void)
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

mxArray *sf_c2_untitled1_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_untitled1(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wMjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/Efg"
    "8C7hdDcT+En1kcn5hcklmWGp9sFF+aV5JZkpOaYojwFwBU1hhI"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_untitled1_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s96KdP5RWbmBeKdL9pYZXuH";
}

static void sf_opaque_initialize_c2_untitled1(void *chartInstanceVar)
{
  initialize_params_c2_untitled1((SFc2_untitled1InstanceStruct*)
    chartInstanceVar);
  initialize_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_untitled1(void *chartInstanceVar)
{
  enable_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_untitled1(void *chartInstanceVar)
{
  disable_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_untitled1(void *chartInstanceVar)
{
  sf_gateway_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_untitled1(SimStruct* S)
{
  return get_sim_state_c2_untitled1((SFc2_untitled1InstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_untitled1(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_untitled1((SFc2_untitled1InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_untitled1(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_untitled1InstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled1_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_untitled1((SFc2_untitled1InstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_untitled1(void *chartInstanceVar)
{
  mdl_start_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_untitled1(void *chartInstanceVar)
{
  mdl_terminate_c2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_untitled1((SFc2_untitled1InstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_untitled1(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_untitled1((SFc2_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc2_untitled1((SFc2_untitled1InstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_untitled1_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [18] = {
    "eNrtV81u00AQdkKLQAJUIVQuSPQGB5AACQQXKPlTI1Ja4Za/S7W1J/Eq612zP25z4cSVJ+AAR3g",
    "FnoTH4AWQmHWcNHVsp20EAsRKrrveb2Zn5pud2TiV9rqD4wI+9y86zml8n8Gn6gzHYjqvTDzD7w",
    "vOtXT+HoW4CTeJJKFySgcnITwDJZjRVPA274pcGOVdkMA9xEZC6iJtioaGUd5vGe5ZfepFQL3AD",
    "YRhfg1lib/B2QC1RUZvop4GleDpFoCvAylML2gx0htbLPVePQCvr0xY5oIC7ZrImqXWDdM0YtDc",
    "B6/NlSZosTqwzdVEQ13vF7ppPVXuCCjCiFHCc70NiHIhwgBr2I58/LthNDqVhXkBkboGAYlBdWg",
    "/0Sk4ZHVShQu7lBMtJCWsGbK6FZy2bZOhPevCB1YSELStJoH0I0G5LubfbaGnTU52GTRg1/SKtb",
    "nwxljyn1PYA1kYt25dxCBJDzZ44aZJQJr7CVvjLJmGaRrCcyIfe8ifAr8wezFzlEuQJ9hCiSIYJ",
    "E621ZakMYa3UJsJ2zYzZx0ZEw7JVrNgibZmDGUsjLW1PF4njKlC2JaIOhADS7Q2iCblsKHWfJxS",
    "1N8SGGCb3sWnwXCKxKewuuA+zaUrzgCSuvMUC8thpGeUFmEdk7fR6UwvT8PaXIPsEg/yqoAkVAH",
    "GLAlvsTafKss9AtEqnZiXBx5myCyUo7qGN/aE7GNMSorIgQuW0UJgqHrIJZ6EbYWHpgxmuZyF84",
    "gXgG8LDGWwjscGsTkxUba0PcZzF1M9aIDyJI1yWDV46rAMNW1CDSLY5n0u9nhLitBNa/wwvACYb",
    "URyyns1rF9y0MLd86iw/eyWc9DPzh2hn43ksu/rE3oqOXqciXfSRyfwZ6uH8YuZfaujb3ak8qsT",
    "8ucz+y1k5C1uCZ93pz5eugFv737gP25+/fwlzvqftaMyZUfFGe3/qXq8e8CFdH5lVHDHByieylu",
    "LXZuwayFH/+UJ/UvpXD2498TfvPvsxW5Ygyd+50H06vVLs5bo+14pt7easXf0fcVWfsy2JE+l1/",
    "bTC4qdEzNs21k+T8+Ix9n0+3B8fzSf/KXVLI8LM+SX8L9BJn9Pvv/K6nzyR+N7OcP3ctLfd4itG",
    "rDj3dkxHIskA//2Yb9Omt/HlXN+s9zfYuf/uPx6/47StxZPKFeZs0/+Lrl5/Ttu//7T8GX138ng",
    "l/5gP+a9V/1q/DfnePeeq+n84fgnTj2gzM+57abLeHXt5q3+A3n6E0zFrjQ=",
    ""
  };

  static char newstr [1261] = "";
  newstr[0] = '\0';
  for (i = 0; i < 18; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_untitled1(SimStruct *S)
{
  const char* newstr = sf_c2_untitled1_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(345965444U));
  ssSetChecksum1(S,(897475884U));
  ssSetChecksum2(S,(771583643U));
  ssSetChecksum3(S,(1990830266U));
}

static void mdlRTW_c2_untitled1(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_untitled1(SimStruct *S)
{
  SFc2_untitled1InstanceStruct *chartInstance;
  chartInstance = (SFc2_untitled1InstanceStruct *)utMalloc(sizeof
    (SFc2_untitled1InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_untitled1InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_untitled1;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_untitled1;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_untitled1;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_untitled1;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_untitled1;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_untitled1;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_untitled1;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_untitled1;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_untitled1;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_untitled1;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_untitled1;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_untitled1;
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
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_untitled1(chartInstance);
}

void c2_untitled1_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_untitled1(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_untitled1(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_untitled1(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_untitled1_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
