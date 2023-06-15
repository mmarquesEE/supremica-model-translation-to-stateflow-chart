/* Include files */

#include "model_sfun.h"
#include "c1_model.h"
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
static emlrtMCInfo c1_emlrtMCI = { 122,/* lineNo */
  13,                                  /* colNo */
  "rng",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 158,/* lineNo */
  17,                                  /* colNo */
  "eml_rand_mt19937ar",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 4,  /* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#model:3"                           /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 9,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#model:3"                           /* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 10,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#model:3"                           /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 54,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 113,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 114,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 116,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 118,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 120,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 273,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 275,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 277,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 278,/* lineNo */
  "rng",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rng.m"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 45,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 69,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 19,/* lineNo */
  "eml_rand_mcg16807_stateful",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 49,/* lineNo */
  "eml_rand_mcg16807",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 81,/* lineNo */
  "randi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 107,/* lineNo */
  "rand",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 41,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 43,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 45,/* lineNo */
  "eml_rand",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 23,/* lineNo */
  "eml_rand_shr3cong_stateful",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong_stateful.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 29,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 64,/* lineNo */
  "eml_rand_shr3cong",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 23,/* lineNo */
  "eml_rand_mt19937ar_stateful",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 51,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 151,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 257,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 263,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 268,/* lineNo */
  "eml_rand_mt19937ar",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\randfun\\eml_rand_mt19937ar.m"/* pathName */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  11,                                  /* lineNo */
  7,                                   /* colNo */
  "y",                                 /* aName */
  "MATLAB Function1",                  /* fName */
  "#model:3",                          /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_emlrtDCI = { 11, /* lineNo */
  7,                                   /* colNo */
  "MATLAB Function1",                  /* fName */
  "#model:3",                          /* pName */
  1                                    /* checkKind */
};

static uint32_T c1_uv[625] = { 5489U, 1301868182U, 2938499221U, 2950281878U,
  1875628136U, 751856242U, 944701696U, 2243192071U, 694061057U, 219885934U,
  2066767472U, 3182869408U, 485472502U, 2336857883U, 1071588843U, 3418470598U,
  951210697U, 3693558366U, 2923482051U, 1793174584U, 2982310801U, 1586906132U,
  1951078751U, 1808158765U, 1733897588U, 431328322U, 4202539044U, 530658942U,
  1714810322U, 3025256284U, 3342585396U, 1937033938U, 2640572511U, 1654299090U,
  3692403553U, 4233871309U, 3497650794U, 862629010U, 2943236032U, 2426458545U,
  1603307207U, 1133453895U, 3099196360U, 2208657629U, 2747653927U, 931059398U,
  761573964U, 3157853227U, 785880413U, 730313442U, 124945756U, 2937117055U,
  3295982469U, 1724353043U, 3021675344U, 3884886417U, 4010150098U, 4056961966U,
  699635835U, 2681338818U, 1339167484U, 720757518U, 2800161476U, 2376097373U,
  1532957371U, 3902664099U, 1238982754U, 3725394514U, 3449176889U, 3570962471U,
  4287636090U, 4087307012U, 3603343627U, 202242161U, 2995682783U, 1620962684U,
  3704723357U, 371613603U, 2814834333U, 2111005706U, 624778151U, 2094172212U,
  4284947003U, 1211977835U, 991917094U, 1570449747U, 2962370480U, 1259410321U,
  170182696U, 146300961U, 2836829791U, 619452428U, 2723670296U, 1881399711U,
  1161269684U, 1675188680U, 4132175277U, 780088327U, 3409462821U, 1036518241U,
  1834958505U, 3048448173U, 161811569U, 618488316U, 44795092U, 3918322701U,
  1924681712U, 3239478144U, 383254043U, 4042306580U, 2146983041U, 3992780527U,
  3518029708U, 3545545436U, 3901231469U, 1896136409U, 2028528556U, 2339662006U,
  501326714U, 2060962201U, 2502746480U, 561575027U, 581893337U, 3393774360U,
  1778912547U, 3626131687U, 2175155826U, 319853231U, 986875531U, 819755096U,
  2915734330U, 2688355739U, 3482074849U, 2736559U, 2296975761U, 1029741190U,
  2876812646U, 690154749U, 579200347U, 4027461746U, 1285330465U, 2701024045U,
  4117700889U, 759495121U, 3332270341U, 2313004527U, 2277067795U, 4131855432U,
  2722057515U, 1264804546U, 3848622725U, 2211267957U, 4100593547U, 959123777U,
  2130745407U, 3194437393U, 486673947U, 1377371204U, 17472727U, 352317554U,
  3955548058U, 159652094U, 1232063192U, 3835177280U, 49423123U, 3083993636U,
  733092U, 2120519771U, 2573409834U, 1112952433U, 3239502554U, 761045320U,
  1087580692U, 2540165110U, 641058802U, 1792435497U, 2261799288U, 1579184083U,
  627146892U, 2165744623U, 2200142389U, 2167590760U, 2381418376U, 1793358889U,
  3081659520U, 1663384067U, 2009658756U, 2689600308U, 739136266U, 2304581039U,
  3529067263U, 591360555U, 525209271U, 3131882996U, 294230224U, 2076220115U,
  3113580446U, 1245621585U, 1386885462U, 3203270426U, 123512128U, 12350217U,
  354956375U, 4282398238U, 3356876605U, 3888857667U, 157639694U, 2616064085U,
  1563068963U, 2762125883U, 4045394511U, 4180452559U, 3294769488U, 1684529556U,
  1002945951U, 3181438866U, 22506664U, 691783457U, 2685221343U, 171579916U,
  3878728600U, 2475806724U, 2030324028U, 3331164912U, 1708711359U, 1970023127U,
  2859691344U, 2588476477U, 2748146879U, 136111222U, 2967685492U, 909517429U,
  2835297809U, 3206906216U, 3186870716U, 341264097U, 2542035121U, 3353277068U,
  548223577U, 3170936588U, 1678403446U, 297435620U, 2337555430U, 466603495U,
  1132321815U, 1208589219U, 696392160U, 894244439U, 2562678859U, 470224582U,
  3306867480U, 201364898U, 2075966438U, 1767227936U, 2929737987U, 3674877796U,
  2654196643U, 3692734598U, 3528895099U, 2796780123U, 3048728353U, 842329300U,
  191554730U, 2922459673U, 3489020079U, 3979110629U, 1022523848U, 2202932467U,
  3583655201U, 3565113719U, 587085778U, 4176046313U, 3013713762U, 950944241U,
  396426791U, 3784844662U, 3477431613U, 3594592395U, 2782043838U, 3392093507U,
  3106564952U, 2829419931U, 1358665591U, 2206918825U, 3170783123U, 31522386U,
  2988194168U, 1782249537U, 1105080928U, 843500134U, 1225290080U, 1521001832U,
  3605886097U, 2802786495U, 2728923319U, 3996284304U, 903417639U, 1171249804U,
  1020374987U, 2824535874U, 423621996U, 1988534473U, 2493544470U, 1008604435U,
  1756003503U, 1488867287U, 1386808992U, 732088248U, 1780630732U, 2482101014U,
  976561178U, 1543448953U, 2602866064U, 2021139923U, 1952599828U, 2360242564U,
  2117959962U, 2753061860U, 2388623612U, 4138193781U, 2962920654U, 2284970429U,
  766920861U, 3457264692U, 2879611383U, 815055854U, 2332929068U, 1254853997U,
  3740375268U, 3799380844U, 4091048725U, 2006331129U, 1982546212U, 686850534U,
  1907447564U, 2682801776U, 2780821066U, 998290361U, 1342433871U, 4195430425U,
  607905174U, 3902331779U, 2454067926U, 1708133115U, 1170874362U, 2008609376U,
  3260320415U, 2211196135U, 433538229U, 2728786374U, 2189520818U, 262554063U,
  1182318347U, 3710237267U, 1221022450U, 715966018U, 2417068910U, 2591870721U,
  2870691989U, 3418190842U, 4238214053U, 1540704231U, 1575580968U, 2095917976U,
  4078310857U, 2313532447U, 2110690783U, 4056346629U, 4061784526U, 1123218514U,
  551538993U, 597148360U, 4120175196U, 3581618160U, 3181170517U, 422862282U,
  3227524138U, 1713114790U, 662317149U, 1230418732U, 928171837U, 1324564878U,
  1928816105U, 1786535431U, 2878099422U, 3290185549U, 539474248U, 1657512683U,
  552370646U, 1671741683U, 3655312128U, 1552739510U, 2605208763U, 1441755014U,
  181878989U, 3124053868U, 1447103986U, 3183906156U, 1728556020U, 3502241336U,
  3055466967U, 1013272474U, 818402132U, 1715099063U, 2900113506U, 397254517U,
  4194863039U, 1009068739U, 232864647U, 2540223708U, 2608288560U, 2415367765U,
  478404847U, 3455100648U, 3182600021U, 2115988978U, 434269567U, 4117179324U,
  3461774077U, 887256537U, 3545801025U, 286388911U, 3451742129U, 1981164769U,
  786667016U, 3310123729U, 3097811076U, 2224235657U, 2959658883U, 3370969234U,
  2514770915U, 3345656436U, 2677010851U, 2206236470U, 271648054U, 2342188545U,
  4292848611U, 3646533909U, 3754009956U, 3803931226U, 4160647125U, 1477814055U,
  4043852216U, 1876372354U, 3133294443U, 3871104810U, 3177020907U, 2074304428U,
  3479393793U, 759562891U, 164128153U, 1839069216U, 2114162633U, 3989947309U,
  3611054956U, 1333547922U, 835429831U, 494987340U, 171987910U, 1252001001U,
  370809172U, 3508925425U, 2535703112U, 1276855041U, 1922855120U, 835673414U,
  3030664304U, 613287117U, 171219893U, 3423096126U, 3376881639U, 2287770315U,
  1658692645U, 1262815245U, 3957234326U, 1168096164U, 2968737525U, 2655813712U,
  2132313144U, 3976047964U, 326516571U, 353088456U, 3679188938U, 3205649712U,
  2654036126U, 1249024881U, 880166166U, 691800469U, 2229503665U, 1673458056U,
  4032208375U, 1851778863U, 2563757330U, 376742205U, 1794655231U, 340247333U,
  1505873033U, 396524441U, 879666767U, 3335579166U, 3260764261U, 3335999539U,
  506221798U, 4214658741U, 975887814U, 2080536343U, 3360539560U, 571586418U,
  138896374U, 4234352651U, 2737620262U, 3928362291U, 1516365296U, 38056726U,
  3599462320U, 3585007266U, 3850961033U, 471667319U, 1536883193U, 2310166751U,
  1861637689U, 2530999841U, 4139843801U, 2710569485U, 827578615U, 2012334720U,
  2907369459U, 3029312804U, 2820112398U, 1965028045U, 35518606U, 2478379033U,
  643747771U, 1924139484U, 4123405127U, 3811735531U, 3429660832U, 3285177704U,
  1948416081U, 1311525291U, 1183517742U, 1739192232U, 3979815115U, 2567840007U,
  4116821529U, 213304419U, 4125718577U, 1473064925U, 2442436592U, 1893310111U,
  4195361916U, 3747569474U, 828465101U, 2991227658U, 750582866U, 1205170309U,
  1409813056U, 678418130U, 1171531016U, 3821236156U, 354504587U, 4202874632U,
  3882511497U, 1893248677U, 1903078632U, 26340130U, 2069166240U, 3657122492U,
  3725758099U, 831344905U, 811453383U, 3447711422U, 2434543565U, 4166886888U,
  3358210805U, 4142984013U, 2988152326U, 3527824853U, 982082992U, 2809155763U,
  190157081U, 3340214818U, 2365432395U, 2548636180U, 2894533366U, 3474657421U,
  2372634704U, 2845748389U, 43024175U, 2774226648U, 1987702864U, 3186502468U,
  453610222U, 4204736567U, 1392892630U, 2471323686U, 2470534280U, 3541393095U,
  4269885866U, 3909911300U, 759132955U, 1482612480U, 667715263U, 1795580598U,
  2337923983U, 3390586366U, 581426223U, 1515718634U, 476374295U, 705213300U,
  363062054U, 2084697697U, 2407503428U, 2292957699U, 2426213835U, 2199989172U,
  1987356470U, 4026755612U, 2147252133U, 270400031U, 1367820199U, 2369854699U,
  2844269403U, 79981964U, 624U };

/* Function Declarations */
static void initialize_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void initialize_params_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void mdl_start_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void mdl_terminate_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_model(SFc1_modelInstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c1_model(SFc1_modelInstanceStruct
  *chartInstance);
static void enable_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void disable_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void sf_gateway_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void ext_mode_exec_c1_model(SFc1_modelInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_model(SFc1_modelInstanceStruct
  *chartInstance);
static void c1_do_animation_call_c1_model(SFc1_modelInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_model(SFc1_modelInstanceStruct
  *chartInstance);
static void set_sim_state_c1_model(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_st);
static void initSimStructsc1_model(SFc1_modelInstanceStruct *chartInstance);
static real_T c1_now(SFc1_modelInstanceStruct *chartInstance);
static real_T c1_mod(SFc1_modelInstanceStruct *chartInstance, real_T c1_x);
static real_T c1_rand(SFc1_modelInstanceStruct *chartInstance, const emlrtStack *
                      c1_sp);
static void c1_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_b_y, const char_T *c1_identifier, real_T c1_c_y[10]);
static void c1_b_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_b_y[10]);
static uint32_T c1_c_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_method, const char_T *c1_identifier, boolean_T *c1_svPtr);
static uint32_T c1_d_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr);
static real_T c1_e_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_start, const char_T *c1_identifier, boolean_T *c1_svPtr);
static real_T c1_f_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr);
static void c1_g_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_d_state, const char_T *c1_identifier, boolean_T *c1_svPtr,
  uint32_T c1_b_y[625]);
static void c1_h_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr,
  uint32_T c1_b_y[625]);
static void c1_i_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_d_state, const char_T *c1_identifier, boolean_T *c1_svPtr,
  uint32_T c1_b_y[2]);
static void c1_j_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr,
  uint32_T c1_b_y[2]);
static uint8_T c1_k_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_model, const char_T *c1_identifier);
static uint8_T c1_l_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers(SFc1_modelInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_modelInstanceStruct *chartInstance,
  int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T *c1_isValueTooBig);
static void init_dsm_address_info(SFc1_modelInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_modelInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_start_not_empty = false;
  chartInstance->c1_seed_not_empty = false;
  chartInstance->c1_method_not_empty = false;
  chartInstance->c1_state_not_empty = false;
  chartInstance->c1_b_state_not_empty = false;
  chartInstance->c1_c_state_not_empty = false;
  chartInstance->c1_is_active_c1_model = 0U;
}

static void initialize_params_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_model(SFc1_modelInstanceStruct
  *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    14U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 2U, 0U,
                  1U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 166);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 79, -1,
    93);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 48, 65, -1, 98,
                    false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 118, 125, -1,
                    166, false);
}

static void mdl_cleanup_runtime_resources_c1_model(SFc1_modelInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  static char_T c1_cv1[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'n', 'g',
    ':', 'b', 'a', 'd', 'S', 'e', 't', 't', 'i', 'n', 'g', 's' };

  static char_T c1_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  time_t c1_b_eTime;
  time_t c1_eTime;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  real_T c1_b_mti;
  real_T c1_b_next;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_idx;
  real_T c1_s;
  real_T c1_s0;
  real_T c1_x;
  int32_T c1_exitg1;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_mti;
  int32_T c1_prevEpochTime;
  int32_T c1_t;
  uint32_T c1_arg3;
  uint32_T c1_b_arg3;
  uint32_T c1_b_r;
  uint32_T c1_b_s;
  uint32_T c1_b_seed;
  uint32_T c1_b_t;
  uint32_T c1_b_varargin_1;
  uint32_T c1_c_arg3;
  uint32_T c1_c_seed;
  uint32_T c1_c_varargin_1;
  uint32_T c1_d_state;
  uint32_T c1_method2;
  uint32_T c1_r;
  uint32_T c1_u;
  uint32_T c1_u1;
  uint32_T c1_varargin_1;
  boolean_T c1_b;
  boolean_T c1_covSaturation;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, *chartInstance->c1_next);
  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_b_next = *chartInstance->c1_next;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     !chartInstance->c1_start_not_empty)) {
    chartInstance->c1_start = 0.0;
    chartInstance->c1_start_not_empty = true;
    c1_b_st.site = &c1_emlrtRSI;
    if (!chartInstance->c1_seed_not_empty) {
      chartInstance->c1_seed = 0U;
      chartInstance->c1_seed_not_empty = true;
    }

    c1_c_st.site = &c1_d_emlrtRSI;
    if (!chartInstance->c1_method_not_empty) {
      chartInstance->c1_method = 7U;
      chartInstance->c1_method_not_empty = true;
    }

    c1_c_st.site = &c1_e_emlrtRSI;
    c1_c_x = c1_now(chartInstance) * 8.64E+6;
    c1_d_x = c1_c_x;
    c1_d_x = muDoubleScalarFloor(c1_d_x);
    c1_s = c1_mod(chartInstance, c1_d_x);
    c1_eTime = time(NULL);
    c1_prevEpochTime = (int32_T)c1_eTime + 1;
    do {
      c1_exitg1 = 0;
      c1_b_eTime = time(NULL);
      c1_t = (int32_T)c1_b_eTime;
      if (c1_t <= c1_prevEpochTime) {
        c1_g_x = c1_now(chartInstance) * 8.64E+6;
        c1_h_x = c1_g_x;
        c1_h_x = muDoubleScalarFloor(c1_h_x);
        c1_s0 = c1_mod(chartInstance, c1_h_x);
        if (c1_s != c1_s0) {
          c1_exitg1 = 1;
        }
      } else {
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);

    c1_d = muDoubleScalarRound(c1_s);
    c1_covSaturation = false;
    if (c1_d < 4.294967296E+9) {
      if (c1_d >= 0.0) {
        c1_u = (uint32_T)c1_d;
      } else {
        c1_covSaturation = true;
        c1_u = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 79, 14);
      }
    } else if (c1_d >= 4.294967296E+9) {
      c1_covSaturation = true;
      c1_u = MAX_uint32_T;
      sf_data_saturate_error(chartInstance->S, 1U, 79, 14);
    } else {
      c1_u = 0U;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 0, 0,
      c1_covSaturation);
    chartInstance->c1_seed = c1_u;
    c1_c_st.site = &c1_f_emlrtRSI;
    if (!chartInstance->c1_method_not_empty) {
      chartInstance->c1_method = 7U;
      chartInstance->c1_method_not_empty = true;
    }

    c1_method2 = chartInstance->c1_method;
    if (c1_method2 == 7U) {
      c1_c_st.site = &c1_g_emlrtRSI;
      c1_varargin_1 = chartInstance->c1_seed;
      if (!chartInstance->c1_state_not_empty) {
        for (c1_i3 = 0; c1_i3 < 625; c1_i3++) {
          chartInstance->c1_state[c1_i3] = c1_uv[c1_i3];
        }

        chartInstance->c1_state_not_empty = true;
      }

      c1_arg3 = c1_varargin_1;
      c1_b_seed = c1_arg3;
      c1_r = c1_b_seed;
      chartInstance->c1_state[0] = c1_b_seed;
      for (c1_mti = 0; c1_mti < 623; c1_mti++) {
        c1_b_mti = 2.0 + (real_T)c1_mti;
        c1_d1 = muDoubleScalarRound(c1_b_mti - 1.0);
        if (c1_d1 < 4.294967296E+9) {
          if (c1_d1 >= 0.0) {
            c1_u1 = (uint32_T)c1_d1;
          } else {
            c1_u1 = 0U;
            sf_data_saturate_error(chartInstance->S, 1U, 79, 14);
          }
        } else if (c1_d1 >= 4.294967296E+9) {
          c1_u1 = MAX_uint32_T;
          sf_data_saturate_error(chartInstance->S, 1U, 79, 14);
        } else {
          c1_u1 = 0U;
        }

        c1_r = (c1_r ^ c1_r >> 30U) * 1812433253U + c1_u1;
        chartInstance->c1_state[(int32_T)c1_b_mti - 1] = c1_r;
      }

      chartInstance->c1_state[624] = 624U;
    } else if (c1_method2 == 5U) {
      c1_c_st.site = &c1_h_emlrtRSI;
      c1_b_varargin_1 = chartInstance->c1_seed;
      if (!chartInstance->c1_b_state_not_empty) {
        for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
          chartInstance->c1_b_state[c1_i4] = 362436069U + 158852560U * (uint32_T)
            c1_i4;
        }

        chartInstance->c1_b_state_not_empty = true;
      }

      c1_b_arg3 = c1_b_varargin_1;
      c1_b_s = c1_b_arg3;
      chartInstance->c1_b_state[0] = 362436069U;
      chartInstance->c1_b_state[1] = c1_b_s;
      if ((real_T)chartInstance->c1_b_state[1] == 0.0) {
        chartInstance->c1_b_state[1] = 521288629U;
      }
    } else if (c1_method2 == 4U) {
      c1_c_st.site = &c1_i_emlrtRSI;
      c1_c_varargin_1 = chartInstance->c1_seed;
      if (!chartInstance->c1_c_state_not_empty) {
        chartInstance->c1_c_state = 1144108930U;
        chartInstance->c1_c_state_not_empty = true;
      }

      c1_c_arg3 = c1_c_varargin_1;
      c1_c_seed = c1_c_arg3;
      c1_b_r = c1_c_seed >> 16U;
      c1_b_t = c1_c_seed & 32768U;
      c1_d_state = c1_b_r << 16U;
      c1_d_state = c1_c_seed - c1_d_state;
      c1_d_state -= c1_b_t;
      c1_d_state <<= 16U;
      c1_d_state += c1_b_t;
      c1_d_state += c1_b_r;
      if ((real_T)c1_d_state < 1.0) {
        c1_d_state = 1144108930U;
      } else if (c1_d_state > 2147483646U) {
        c1_d_state = 2147483646U;
      }

      chartInstance->c1_c_state = c1_d_state;
    } else {
      c1_d_y = NULL;
      sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 22),
                    false);
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 22),
                    false);
      sf_mex_call(&c1_b_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 1U, 14, c1_e_y)));
    }
  }

  for (c1_i = 0; c1_i < 10; c1_i++) {
    (*chartInstance->c1_y)[c1_i] = 0.0;
  }

  c1_b_st.site = &c1_b_emlrtRSI;
  c1_x = c1_b_next;
  c1_b_x = c1_x;
  c1_b = muDoubleScalarIsNaN(c1_b_x);
  if (c1_b) {
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c1_b_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_b_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
  }

  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1, c1_b_next != 0.0))
  {
    c1_b_st.site = &c1_c_emlrtRSI;
    c1_c_st.site = &c1_r_emlrtRSI;
    c1_idx = c1_rand(chartInstance, &c1_c_st);
    c1_e_x = c1_idx * 10.0;
    c1_f_x = c1_e_x;
    c1_f_x = muDoubleScalarFloor(c1_f_x);
    c1_idx = 1.0 + c1_f_x;
    if (c1_idx != (real_T)(int32_T)muDoubleScalarFloor(c1_idx)) {
      emlrtIntegerCheckR2012b(c1_idx, &c1_emlrtDCI, &c1_st);
    }

    c1_i2 = (int32_T)c1_idx;
    if ((c1_i2 < 1) || (c1_i2 > 10)) {
      emlrtDynamicBoundsCheckR2012b(c1_i2, 1, 10, &c1_emlrtBCI, &c1_st);
    }

    (*chartInstance->c1_y)[c1_i2 - 1] = 1.0;
  }

  c1_do_animation_call_c1_model(chartInstance);
  for (c1_i1 = 0; c1_i1 < 10; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (*chartInstance->c1_y)
                      [c1_i1]);
  }
}

static void ext_mode_exec_c1_model(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_model(SFc1_modelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_model(SFc1_modelInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_model(SFc1_modelInstanceStruct
  *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_st;
  c1_st = NULL;
  c1_st = NULL;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_createcellmatrix(8, 1), false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_y, 0, 0U, 1U, 0U,
    2, 1, 10), false);
  sf_mex_setcell(c1_b_y, 0, c1_c_y);
  c1_d_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", &chartInstance->c1_method, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_b_y, 1, c1_d_y);
  c1_e_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", &chartInstance->c1_seed, 7, 0U, 0U,
      0U, 0), false);
  }

  sf_mex_setcell(c1_b_y, 2, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_start_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", &chartInstance->c1_start, 0, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_b_y, 3, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_c_state, 7, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_b_y, 4, c1_g_y);
  c1_h_y = NULL;
  if (!chartInstance->c1_state_not_empty) {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", chartInstance->c1_state, 7, 0U, 1U,
      0U, 1, 625), false);
  }

  sf_mex_setcell(c1_b_y, 5, c1_h_y);
  c1_i_y = NULL;
  if (!chartInstance->c1_b_state_not_empty) {
    sf_mex_assign(&c1_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_i_y, sf_mex_create("y", chartInstance->c1_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c1_b_y, 6, c1_i_y);
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_model, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_b_y, 7, c1_j_y);
  sf_mex_assign(&c1_st, c1_b_y, false);
  return c1_st;
}

static void set_sim_state_c1_model(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv[10];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  uint32_T c1_b_uv[625];
  uint32_T c1_uv1[2];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "y",
                      c1_dv);
  for (c1_i = 0; c1_i < 10; c1_i++) {
    (*chartInstance->c1_y)[c1_i] = c1_dv[c1_i];
  }

  chartInstance->c1_method = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 1)), "method", &chartInstance->c1_method_not_empty);
  chartInstance->c1_seed = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 2)), "seed", &chartInstance->c1_seed_not_empty);
  chartInstance->c1_start = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 3)), "start", &chartInstance->c1_start_not_empty);
  chartInstance->c1_c_state = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_u, 4)), "state", &chartInstance->c1_c_state_not_empty);
  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 5)),
                        "state", &chartInstance->c1_state_not_empty, c1_b_uv);
  for (c1_i1 = 0; c1_i1 < 625; c1_i1++) {
    chartInstance->c1_state[c1_i1] = c1_b_uv[c1_i1];
  }

  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 6)),
                        "state", &chartInstance->c1_b_state_not_empty, c1_uv1);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    chartInstance->c1_b_state[c1_i2] = c1_uv1[c1_i2];
  }

  chartInstance->c1_is_active_c1_model = c1_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 7)), "is_active_c1_model");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_model(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c1_model_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static real_T c1_now(SFc1_modelInstanceStruct *chartInstance)
{
  time_t c1_rawtime;
  c1_sxaDueAh1f53T9ESYg9Uc4E c1_timeinfoDouble;
  struct tm c1_timeinfo;
  real_T c1_cDaysMonthWise[12];
  real_T c1_a;
  real_T c1_b_a;
  real_T c1_b_r;
  real_T c1_b_x;
  real_T c1_c_a;
  real_T c1_c_r;
  real_T c1_c_x;
  real_T c1_dDateNum;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_l_x;
  real_T c1_m_x;
  real_T c1_n_x;
  real_T c1_o_x;
  real_T c1_p_x;
  real_T c1_q_x;
  real_T c1_r;
  real_T c1_r_x;
  real_T c1_s_x;
  real_T c1_t_x;
  real_T c1_u_x;
  real_T c1_x;
  boolean_T c1_b;
  boolean_T c1_b_b;
  boolean_T c1_b_rEQ0;
  boolean_T c1_c_b;
  boolean_T c1_c_rEQ0;
  boolean_T c1_d_b;
  boolean_T c1_e_b;
  boolean_T c1_f_b;
  boolean_T c1_guard1 = false;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_cDaysMonthWise[0] = 0.0;
  c1_cDaysMonthWise[1] = 31.0;
  c1_cDaysMonthWise[2] = 59.0;
  c1_cDaysMonthWise[3] = 90.0;
  c1_cDaysMonthWise[4] = 120.0;
  c1_cDaysMonthWise[5] = 151.0;
  c1_cDaysMonthWise[6] = 181.0;
  c1_cDaysMonthWise[7] = 212.0;
  c1_cDaysMonthWise[8] = 243.0;
  c1_cDaysMonthWise[9] = 273.0;
  c1_cDaysMonthWise[10] = 304.0;
  c1_cDaysMonthWise[11] = 334.0;
  time(&c1_rawtime);
  c1_timeinfo = *localtime(&c1_rawtime);
  c1_timeinfo.tm_year += 1900;
  c1_timeinfo.tm_mon++;
  c1_timeinfoDouble.tm_min = (real_T)c1_timeinfo.tm_min;
  c1_timeinfoDouble.tm_sec = (real_T)c1_timeinfo.tm_sec;
  c1_timeinfoDouble.tm_hour = (real_T)c1_timeinfo.tm_hour;
  c1_timeinfoDouble.tm_mday = (real_T)c1_timeinfo.tm_mday;
  c1_timeinfoDouble.tm_mon = (real_T)c1_timeinfo.tm_mon;
  c1_timeinfoDouble.tm_year = (real_T)c1_timeinfo.tm_year;
  c1_x = c1_timeinfoDouble.tm_year / 4.0;
  c1_b_x = c1_x;
  c1_b_x = muDoubleScalarCeil(c1_b_x);
  c1_c_x = c1_timeinfoDouble.tm_year / 100.0;
  c1_d_x = c1_c_x;
  c1_d_x = muDoubleScalarCeil(c1_d_x);
  c1_e_x = c1_timeinfoDouble.tm_year / 400.0;
  c1_f_x = c1_e_x;
  c1_f_x = muDoubleScalarCeil(c1_f_x);
  c1_dDateNum = ((((365.0 * c1_timeinfoDouble.tm_year + c1_b_x) - c1_d_x) +
                  c1_f_x) + c1_cDaysMonthWise[(int32_T)c1_timeinfoDouble.tm_mon
                 - 1]) + c1_timeinfoDouble.tm_mday;
  if (c1_timeinfoDouble.tm_mon > 2.0) {
    c1_g_x = c1_timeinfoDouble.tm_year;
    c1_a = c1_g_x;
    c1_h_x = c1_a;
    c1_i_x = c1_h_x;
    c1_j_x = c1_i_x;
    c1_b = muDoubleScalarIsNaN(c1_j_x);
    if (c1_b) {
      c1_r = rtNaN;
    } else {
      c1_k_x = c1_i_x;
      c1_b_b = muDoubleScalarIsInf(c1_k_x);
      if (c1_b_b) {
        c1_r = rtNaN;
      } else if (c1_i_x == 0.0) {
        c1_r = 0.0;
      } else {
        c1_r = muDoubleScalarRem(c1_i_x, 4.0);
        c1_rEQ0 = (c1_r == 0.0);
        if (c1_rEQ0) {
          c1_r = 0.0;
        } else if (c1_i_x < 0.0) {
          c1_r += 4.0;
        }
      }
    }

    c1_guard1 = false;
    if (c1_r == 0.0) {
      c1_l_x = c1_timeinfoDouble.tm_year;
      c1_b_a = c1_l_x;
      c1_m_x = c1_b_a;
      c1_o_x = c1_m_x;
      c1_p_x = c1_o_x;
      c1_c_b = muDoubleScalarIsNaN(c1_p_x);
      if (c1_c_b) {
        c1_b_r = rtNaN;
      } else {
        c1_t_x = c1_o_x;
        c1_e_b = muDoubleScalarIsInf(c1_t_x);
        if (c1_e_b) {
          c1_b_r = rtNaN;
        } else if (c1_o_x == 0.0) {
          c1_b_r = 0.0;
        } else {
          c1_b_r = muDoubleScalarRem(c1_o_x, 100.0);
          c1_b_rEQ0 = (c1_b_r == 0.0);
          if (c1_b_rEQ0) {
            c1_b_r = 0.0;
          } else if (c1_o_x < 0.0) {
            c1_b_r += 100.0;
          }
        }
      }

      if (c1_b_r != 0.0) {
        c1_dDateNum++;
      } else {
        c1_guard1 = true;
      }
    } else {
      c1_guard1 = true;
    }

    if (c1_guard1) {
      c1_n_x = c1_timeinfoDouble.tm_year;
      c1_c_a = c1_n_x;
      c1_q_x = c1_c_a;
      c1_r_x = c1_q_x;
      c1_s_x = c1_r_x;
      c1_d_b = muDoubleScalarIsNaN(c1_s_x);
      if (c1_d_b) {
        c1_c_r = rtNaN;
      } else {
        c1_u_x = c1_r_x;
        c1_f_b = muDoubleScalarIsInf(c1_u_x);
        if (c1_f_b) {
          c1_c_r = rtNaN;
        } else if (c1_r_x == 0.0) {
          c1_c_r = 0.0;
        } else {
          c1_c_r = muDoubleScalarRem(c1_r_x, 400.0);
          c1_c_rEQ0 = (c1_c_r == 0.0);
          if (c1_c_rEQ0) {
            c1_c_r = 0.0;
          } else if (c1_r_x < 0.0) {
            c1_c_r += 400.0;
          }
        }
      }

      if (c1_c_r == 0.0) {
        c1_dDateNum++;
      }
    }
  }

  c1_dDateNum += ((c1_timeinfoDouble.tm_hour * 3600.0 + c1_timeinfoDouble.tm_min
                   * 60.0) + c1_timeinfoDouble.tm_sec) / 86400.0;
  return c1_dDateNum;
}

static real_T c1_mod(SFc1_modelInstanceStruct *chartInstance, real_T c1_x)
{
  real_T c1_a;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_r;
  boolean_T c1_b;
  boolean_T c1_b_b;
  boolean_T c1_rEQ0;
  (void)chartInstance;
  c1_a = c1_x;
  c1_b_x = c1_a;
  c1_c_x = c1_b_x;
  c1_d_x = c1_c_x;
  c1_b = muDoubleScalarIsNaN(c1_d_x);
  if (c1_b) {
    c1_r = rtNaN;
  } else {
    c1_e_x = c1_c_x;
    c1_b_b = muDoubleScalarIsInf(c1_e_x);
    if (c1_b_b) {
      c1_r = rtNaN;
    } else if (c1_c_x == 0.0) {
      c1_r = 0.0;
    } else {
      c1_r = muDoubleScalarRem(c1_c_x, 2.147483647E+9);
      c1_rEQ0 = (c1_r == 0.0);
      if (c1_rEQ0) {
        c1_r = 0.0;
      } else if (c1_c_x < 0.0) {
        c1_r += 2.147483647E+9;
      }
    }
  }

  return c1_r;
}

static real_T c1_rand(SFc1_modelInstanceStruct *chartInstance, const emlrtStack *
                      c1_sp)
{
  static char_T c1_cv[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  real_T c1_b_j;
  real_T c1_b_r;
  real_T c1_c_kk;
  real_T c1_c_r;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d_r;
  real_T c1_e_r;
  real_T c1_r;
  int32_T c1_b_a;
  int32_T c1_b_kk;
  int32_T c1_exitg1;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_kk;
  uint32_T c1_b_u[2];
  uint32_T c1_a;
  uint32_T c1_b;
  uint32_T c1_b_y;
  uint32_T c1_c_y;
  uint32_T c1_d_state;
  uint32_T c1_d_y;
  uint32_T c1_e_state;
  uint32_T c1_e_y;
  uint32_T c1_f_state;
  uint32_T c1_f_y;
  uint32_T c1_g_state;
  uint32_T c1_g_y;
  uint32_T c1_h_state;
  uint32_T c1_h_y;
  uint32_T c1_hi;
  uint32_T c1_icng;
  uint32_T c1_jsr;
  uint32_T c1_lo;
  uint32_T c1_mti;
  uint32_T c1_s;
  uint32_T c1_test1;
  uint32_T c1_test2;
  uint32_T c1_u;
  uint32_T c1_u1;
  uint32_T c1_ui;
  boolean_T c1_b_isvalid;
  boolean_T c1_exitg2;
  boolean_T c1_isvalid;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  c1_st.site = &c1_s_emlrtRSI;
  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  if (chartInstance->c1_method == 4U) {
    c1_b_st.site = &c1_t_emlrtRSI;
    if (!chartInstance->c1_c_state_not_empty) {
      chartInstance->c1_c_state = 1144108930U;
      chartInstance->c1_c_state_not_empty = true;
    }

    c1_d_state = chartInstance->c1_c_state;
    c1_e_state = c1_d_state;
    c1_f_state = c1_e_state;
    c1_g_state = c1_f_state;
    c1_s = c1_g_state;
    c1_hi = c1_s / 127773U;
    c1_lo = c1_s - c1_hi * 127773U;
    c1_test1 = 16807U * c1_lo;
    c1_test2 = 2836U * c1_hi;
    c1_a = c1_test1;
    c1_b = c1_test2;
    if (c1_a < c1_b) {
      c1_h_state = c1_b - c1_a;
      c1_h_state = ~c1_h_state;
      c1_h_state &= 2147483647U;
    } else {
      c1_h_state = c1_a - c1_b;
    }

    c1_c_r = (real_T)c1_h_state * 4.6566128752457969E-10;
    c1_g_state = c1_h_state;
    c1_d1 = c1_c_r;
    c1_e_state = c1_g_state;
    c1_d_r = c1_d1;
    c1_r = c1_d_r;
    chartInstance->c1_c_state = c1_e_state;
  } else if (chartInstance->c1_method == 5U) {
    c1_b_st.site = &c1_u_emlrtRSI;
    if (!chartInstance->c1_b_state_not_empty) {
      for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
        chartInstance->c1_b_state[c1_i1] = 362436069U + 158852560U * (uint32_T)
          c1_i1;
      }

      chartInstance->c1_b_state_not_empty = true;
    }

    c1_c_st.site = &c1_w_emlrtRSI;
    c1_d_st.site = &c1_x_emlrtRSI;
    c1_icng = chartInstance->c1_b_state[0];
    c1_jsr = chartInstance->c1_b_state[1];
    c1_u = c1_jsr;
    c1_u1 = c1_icng;
    c1_u1 = 69069U * c1_u1 + 1234567U;
    c1_u ^= c1_u << 13;
    c1_u ^= c1_u >> 17;
    c1_u ^= c1_u << 5;
    c1_ui = c1_u1 + c1_u;
    chartInstance->c1_b_state[0] = c1_u1;
    chartInstance->c1_b_state[1] = c1_u;
    c1_b_r = (real_T)c1_ui * 2.328306436538696E-10;
    c1_d = c1_b_r;
    c1_r = c1_d;
  } else {
    c1_b_st.site = &c1_v_emlrtRSI;
    if (!chartInstance->c1_state_not_empty) {
      for (c1_i = 0; c1_i < 625; c1_i++) {
        chartInstance->c1_state[c1_i] = c1_uv[c1_i];
      }

      chartInstance->c1_state_not_empty = true;
    }

    c1_c_st.site = &c1_ab_emlrtRSI;
    c1_d_st.site = &c1_bb_emlrtRSI;

    /* ========================= COPYRIGHT NOTICE ============================ */
    /*  This is a uniform (0,1) pseudorandom number generator based on:        */
    /*                                                                         */
    /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
    /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
    /*                                                                         */
    /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
    /*  All rights reserved.                                                   */
    /*                                                                         */
    /*  Redistribution and use in source and binary forms, with or without     */
    /*  modification, are permitted provided that the following conditions     */
    /*  are met:                                                               */
    /*                                                                         */
    /*    1. Redistributions of source code must retain the above copyright    */
    /*       notice, this list of conditions and the following disclaimer.     */
    /*                                                                         */
    /*    2. Redistributions in binary form must reproduce the above copyright */
    /*       notice, this list of conditions and the following disclaimer      */
    /*       in the documentation and/or other materials provided with the     */
    /*       distribution.                                                     */
    /*                                                                         */
    /*    3. The names of its contributors may not be used to endorse or       */
    /*       promote products derived from this software without specific      */
    /*       prior written permission.                                         */
    /*                                                                         */
    /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
    /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
    /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
    /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
    /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
    /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
    /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
    /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
    /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
    /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
    /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
    /*                                                                         */
    /* =============================   END   ================================= */
    do {
      c1_exitg1 = 0;
      for (c1_j = 0; c1_j < 2; c1_j++) {
        c1_b_j = 1.0 + (real_T)c1_j;
        c1_mti = chartInstance->c1_state[624] + 1U;
        if ((real_T)c1_mti >= 625.0) {
          for (c1_kk = 0; c1_kk < 227; c1_kk++) {
            c1_c_kk = 1.0 + (real_T)c1_kk;
            c1_b_y = (chartInstance->c1_state[(int32_T)c1_c_kk - 1] &
                      2147483648U) | (chartInstance->c1_state[(int32_T)(c1_c_kk
              + 1.0) - 1] & 2147483647U);
            c1_c_y = c1_b_y;
            c1_e_y = c1_c_y;
            if ((c1_e_y & 1U) == 0U) {
              c1_e_y >>= 1U;
            } else {
              c1_e_y = c1_e_y >> 1U ^ 2567483615U;
            }

            chartInstance->c1_state[(int32_T)c1_c_kk - 1] =
              chartInstance->c1_state[(int32_T)(c1_c_kk + 397.0) - 1] ^ c1_e_y;
          }

          for (c1_b_kk = 0; c1_b_kk < 396; c1_b_kk++) {
            c1_c_kk = 228.0 + (real_T)c1_b_kk;
            c1_b_y = (chartInstance->c1_state[(int32_T)c1_c_kk - 1] &
                      2147483648U) | (chartInstance->c1_state[(int32_T)(c1_c_kk
              + 1.0) - 1] & 2147483647U);
            c1_g_y = c1_b_y;
            c1_h_y = c1_g_y;
            if ((c1_h_y & 1U) == 0U) {
              c1_h_y >>= 1U;
            } else {
              c1_h_y = c1_h_y >> 1U ^ 2567483615U;
            }

            chartInstance->c1_state[(int32_T)c1_c_kk - 1] =
              chartInstance->c1_state[(int32_T)((c1_c_kk + 1.0) - 228.0) - 1] ^
              c1_h_y;
          }

          c1_b_y = (chartInstance->c1_state[623] & 2147483648U) |
            (chartInstance->c1_state[0] & 2147483647U);
          c1_d_y = c1_b_y;
          c1_f_y = c1_d_y;
          if ((c1_f_y & 1U) == 0U) {
            c1_f_y >>= 1U;
          } else {
            c1_f_y = c1_f_y >> 1U ^ 2567483615U;
          }

          chartInstance->c1_state[623] = chartInstance->c1_state[396] ^ c1_f_y;
          c1_mti = 1U;
        }

        c1_b_y = chartInstance->c1_state[(int32_T)c1_mti - 1];
        chartInstance->c1_state[624] = c1_mti;
        c1_b_y ^= c1_b_y >> 11U;
        c1_b_y ^= c1_b_y << 7U & 2636928640U;
        c1_b_y ^= c1_b_y << 15U & 4022730752U;
        c1_b_y ^= c1_b_y >> 18U;
        c1_b_u[(int32_T)c1_b_j - 1] = c1_b_y;
      }

      c1_b_u[0] >>= 5U;
      c1_b_u[1] >>= 6U;
      c1_e_r = 1.1102230246251565E-16 * ((real_T)c1_b_u[0] * 6.7108864E+7 +
        (real_T)c1_b_u[1]);
      if (c1_e_r == 0.0) {
        if (((real_T)chartInstance->c1_state[624] >= 1.0) && ((real_T)
             chartInstance->c1_state[624] < 625.0)) {
          c1_isvalid = true;
        } else {
          c1_isvalid = false;
        }

        c1_b_isvalid = c1_isvalid;
        if (c1_isvalid) {
          c1_b_isvalid = false;
          c1_k = 0;
          c1_exitg2 = false;
          while ((!c1_exitg2) && (c1_k + 1 < 625)) {
            if ((real_T)chartInstance->c1_state[c1_k] == 0.0) {
              c1_b_a = c1_k + 1;
              c1_k = c1_b_a;
            } else {
              c1_b_isvalid = true;
              c1_exitg2 = true;
            }
          }
        }

        if (!c1_b_isvalid) {
          c1_i_y = NULL;
          sf_mex_assign(&c1_i_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
            37), false);
          c1_j_y = NULL;
          sf_mex_assign(&c1_j_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1,
            37), false);
          sf_mex_call(&c1_d_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_i_y, 14,
                      sf_mex_call(&c1_d_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c1_d_st, NULL, "message", 1U, 1U, 14, c1_j_y)));
        }
      } else {
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);

    c1_d2 = c1_e_r;
    c1_r = c1_d2;
  }

  return c1_r;
}

static void c1_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_b_y, const char_T *c1_identifier, real_T c1_c_y[10])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_y), &c1_thisId, c1_c_y);
  sf_mex_destroy(&c1_b_y);
}

static void c1_b_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_b_y[10])
{
  real_T c1_dv[10];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv, 1, 0, 0U, 1, 0U, 2, 1, 10);
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_b_y[c1_i] = c1_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static uint32_T c1_c_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_method, const char_T *c1_identifier, boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_b_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_method),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_method);
  return c1_b_y;
}

static uint32_T c1_d_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr)
{
  uint32_T c1_b_u;
  uint32_T c1_b_y;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 7, 0U, 0, 0U, 0);
    c1_b_y = c1_b_u;
  }

  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static real_T c1_e_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_start, const char_T *c1_identifier, boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_b_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_start),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_start);
  return c1_b_y;
}

static real_T c1_f_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr)
{
  real_T c1_b_y;
  real_T c1_d;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
    c1_b_y = c1_d;
  }

  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static void c1_g_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_d_state, const char_T *c1_identifier, boolean_T *c1_svPtr,
  uint32_T c1_b_y[625])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_d_state), &c1_thisId,
                        c1_svPtr, c1_b_y);
  sf_mex_destroy(&c1_d_state);
}

static void c1_h_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr,
  uint32_T c1_b_y[625])
{
  int32_T c1_i;
  uint32_T c1_b_uv[625];
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_b_uv, 1, 7, 0U, 1, 0U, 1,
                  625);
    for (c1_i = 0; c1_i < 625; c1_i++) {
      c1_b_y[c1_i] = c1_b_uv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_i_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_d_state, const char_T *c1_identifier, boolean_T *c1_svPtr,
  uint32_T c1_b_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_d_state), &c1_thisId,
                        c1_svPtr, c1_b_y);
  sf_mex_destroy(&c1_d_state);
}

static void c1_j_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance, const
  mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T *c1_svPtr,
  uint32_T c1_b_y[2])
{
  int32_T c1_i;
  uint32_T c1_b_uv[2];
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_b_uv, 1, 7, 0U, 1, 0U, 1, 2);
    for (c1_i = 0; c1_i < 2; c1_i++) {
      c1_b_y[c1_i] = c1_b_uv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static uint8_T c1_k_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_b_is_active_c1_model, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_b_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_model), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_model);
  return c1_b_y;
}

static uint8_T c1_l_emlrt_marshallIn(SFc1_modelInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_b_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_b_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_b_y;
}

static void c1_slStringInitializeDynamicBuffers(SFc1_modelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_modelInstanceStruct *chartInstance,
  int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T *c1_isValueTooBig)
{
  real_T c1_d;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 5U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_y, 0, 0U,
      1U, 0U, 2, 1, 10), false);
    break;

   case 8U:
    c1_d = *chartInstance->c1_next;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static void init_dsm_address_info(SFc1_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_modelInstanceStruct *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_y = (real_T (*)[10])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_next = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_model_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(952539058U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(253893022U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4005548215U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(657931357U);
}

mxArray *sf_c1_model_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_model_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("time");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_model_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_model(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrtlc9OwjAcxzsCRC+GGB+AJzD8SQS8OMUoJJIQ48FDk9ltBZasG+kKwduOHjl69FF8BB/Do0e"
    "PbrQiVOISqSKGJl336/L9tf320w5ozRaIyk5Uq9EjG7VbUU0BXjIi1mZa3p+exvmosts+jvsDaj"
    "XtqPUQmcRoMGp6HZ/nBx/5swvyazP5t0U/Ly9Hy+n39FhfmNGnE/S56O1W+DL159vj5/Tl9J/HX"
    "zT/7Nz8eUww6/k217e1r/dXk/Y3NZPXBQ7oi3noCetISevIvS/iOtQn7V2oq+AhTPCjLfkRx/VD"
    "2KZ+lyKSP3NcHMDW8dXF8Qm8LBVKJQSZ77umP4KYuNB1TEgQc5EJKfLszsCDfeoMEcPxZyPu2yd"
    "/gYskrtNzPqRBgLEd6xqr5uF5zHl4HSvhYZTgQ13iob40D9Tr7pO1uR8y0vrjOGCIMqF/AivmIT"
    "zlPIBzJX6s+b4wLPS9VZ/T0Ob7ksdKzul9gh+m5Iep/N42iNUtHlQLFWPic2fgimO84UUFL4+Cl"
    "5vf4cWS/LB+gBdWrNXKFURlYDa8KODlQfCi/5v7JejRsuV7XcX3S14JL40Ef3Ylf+LYCQxkMWeI"
    "DatoEN/G7vx/9g1TX/83"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_model_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sXPevg5JXNqKWYyC9HR8XME";
}

static void sf_opaque_initialize_c1_model(void *chartInstanceVar)
{
  initialize_params_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
  initialize_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_model(void *chartInstanceVar)
{
  enable_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_model(void *chartInstanceVar)
{
  disable_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_model(void *chartInstanceVar)
{
  sf_gateway_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_model(SimStruct* S)
{
  return get_sim_state_c1_model((SFc1_modelInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_model(SimStruct* S, const mxArray *st)
{
  set_sim_state_c1_model((SFc1_modelInstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c1_model(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_modelInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_model_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_model((SFc1_modelInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_model(void *chartInstanceVar)
{
  mdl_start_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_model(void *chartInstanceVar)
{
  mdl_terminate_c1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_model((SFc1_modelInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_model(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_model((SFc1_modelInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc1_model((SFc1_modelInstanceStruct*)sf_get_chart_instance_ptr
      (S));
  }
}

const char* sf_c1_model_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [26] = {
    "eNrtWs1vG0UU30Rp1IoSogoEByRyQeJClaQqTRACJ/5oDUlj1W4bkKUw3n32jjI7s5mZdWJOOXL",
    "sBYkjR/4MxF/AscceewNuFSfe7K5dszHxTmyatHSlzXp29zdv3pvf+5jZODPVbQePBTwLHzrOPF",
    "4v4znrJMeltD0zdCb355zP0nbhDcfhUVAjkgTKsT84CeAeKMEiTQWv8rbIj6W8DRK4ix2EQmoru",
    "YoGEaN8vxJx10hWD33q+nVfRMzbxA6Jt8NZ79/khpGuocQSleDqCoCnfSmijl9hpHO6FaQ+LPrg",
    "7qsosLaVAl2PQqOq2o6YpiGD8hG4Va40QSuoMfrWNdFQ1Ed2Rjb6qnofLYKQUcLz29onqg4hskP",
    "D/dDDvzuRRuvlwro+kXoTfNIFtUX3Y+mCQy7pVOHbLcqJFpISVg5Y0fSWU98aQx23hQfMdo5Q30",
    "0JZD8UlGtLh6hX0M5lTloMStCKOpZy63AQGW94QOEQpN38touiC5J0YIfbjTmeo/JRTMqBL+XEa",
    "hrAAyI3XOSuAs8ubqDTqTpBOkIDu7HCQmziqmpI2kVu2MmNgqpx/zPFuihI2K/OhI3llrtgzauB",
    "3IrLi4QxZYdtiHALusBi+SWiyRmwiXwLsFLUawhkh4k2lhEr4hQ9IcUWBfdoflZ2M6g4sd3FJJU",
    "DTgPjBuChmQdDH3Q0zo8ipUVQxJBT2trKKe8ktso1yDZxIXeOkYQqwAHHvLKU61FlHAnRaCUda5",
    "m7h8QHzwR1VDvipUMh99HGtsnsua2MJ9ihwetgYNYQB7kysvsBYVHOMQeqg/6D9LivMMrayUWs8",
    "Z8zgV3i+uCZzEkZbGOcxQ7yTrEyKX8Dte1S3SuBciUN83pShAEdk66xUqMXwn2+z8Uhr0gR1NPK",
    "6xReAWDUIJJT3tnEFC57FRx8vlFLOGjE0d22yDF2JpqRluHGbeCYDY2upmogLnpVmbvCwwFNgq3",
    "T77CI4YoqjYm6l6R6L66/l53n9ffVHPV3v24/DeecwDkDXP/60RB+ZoRcZ+ialXdl9vRxzuKvmf",
    "76Ygj3ZkbOXAZn3lvE863Sn7//+tftncfvRU9+fueHJ5PIf7pgt75ZSNvv92ucQUTtngg65t07Q",
    "+OaG9H/u0P9L6ZttVuDbufml7t3D756+HWvuH7n3trudjnub23MeC9nxttvL5m6Ch0u9l/pVr10",
    "jWXaJEpq/7j/ofHOj7HHlSE+Oc4fX0yGf7uQnce5MfhF/NXL8Pbs8hcLk+FPyh81/vnMfJt2ANo",
    "XXoKvzdjxcXaoX+ZQJxzhV6P0mM3osdhXYve4EF+/Py5Mgw/HY+xRy9jDtIufNmtSdLDAWooDfH",
    "N7o7G1sdm8t7q8ukqaWgjWEkdNCFiT0VYzCbFNSbiHBUAzxOod85N5vGfuXQ8uAi/G8XruH3aYw",
    "zU9eHH8OG8+PH2U8OHZo6nw4WiMHYoZPhQn5oPknevBSxMfLmX0v5TUW/EOhcH/5pwzH45LCR+c",
    "21Oxx0s+LxpSvH/efnrsJfOyBFPx0x/H2KOVsUdr6nF7L3A7K5+sLd/ai+3cjljqxq/5Mg2+/JL",
    "y5dsXwxc3Yw/3P+CLXllfv3GLyCxhXvNlCnz5KeVL4ZWJL8qXN1zBO1OOL0tT4cu4deO1jH2uxf",
    "v1e8TsysCeu7IXPP9KsTCFdbotznmNuxC4mf+hfnn2yV40znnBuEn1s93/e9nfP2197mTeX7zAe",
    "pwW7232gS+aXo8t170fpO3PB98Miz5l3oivFunjLSDtUU9fEX4/s7Rff1+6bOyX/nPJNzc2OGE9",
    "RZNPLv3bWJN1QQ4eSSBq9Leg88gnzoi6d1Q9dTXj36Z9SLknDtXHK6s3VyfJT38DZzbzNg==",
    ""
  };

  static char newstr [1873] = "";
  newstr[0] = '\0';
  for (i = 0; i < 26; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_model(SimStruct *S)
{
  const char* newstr = sf_c1_model_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4025566223U));
  ssSetChecksum1(S,(1330117314U));
  ssSetChecksum2(S,(3765770456U));
  ssSetChecksum3(S,(3767866792U));
}

static void mdlRTW_c1_model(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_model(SimStruct *S)
{
  SFc1_modelInstanceStruct *chartInstance;
  chartInstance = (SFc1_modelInstanceStruct *)utMalloc(sizeof
    (SFc1_modelInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_modelInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && ssGetNumContStates(ssGetRootSS(S)) > 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_model;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_model;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_model;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c1_model;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_model;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_model;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_model;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_model;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_model;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_model;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_model;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_model;
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
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_model(chartInstance);
}

void c1_model_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_model(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_model(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_model(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_model_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
