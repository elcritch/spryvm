/* Generated by Nim Compiler v1.3.3 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -g  -I/Users/elcritch/.asdf/installs/nim/devel/lib -I/Volumes/datastore/projects/pt/third-party/spryvm/tests -o /Volumes/datastore/projects/pt/third-party/spryvm/tests/_nimcache/@m..@sspryvm@sspryreflect.nim.c.o /Volumes/datastore/projects/pt/third-party/spryvm/tests/_nimcache/@m..@sspryvm@sspryreflect.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ;
typedef struct tyObject_IntValcolonObjectType___aKHYxZgtDkEcxUVcEIFQ9cA tyObject_IntValcolonObjectType___aKHYxZgtDkEcxUVcEIFQ9cA;
typedef struct tyObject_FloatValcolonObjectType___L9aH8mAxkXlo8G9bklAV2LYg tyObject_FloatValcolonObjectType___L9aH8mAxkXlo8G9bklAV2LYg;
typedef struct tyObject_StringValcolonObjectType___OzaVEa2ZspAxtzIz1MQfcA tyObject_StringValcolonObjectType___OzaVEa2ZspAxtzIz1MQfcA;
typedef struct tyObject_TrueValcolonObjectType___PiOEdKeHkROTxIzm3Y7FZA tyObject_TrueValcolonObjectType___PiOEdKeHkROTxIzm3Y7FZA;
typedef struct tyObject_FalseValcolonObjectType___ZihhZOg0z0vJgpEpB5dyKw tyObject_FalseValcolonObjectType___ZihhZOg0z0vJgpEpB5dyKw;
typedef struct tyObject_NilValcolonObjectType___fKecfBxAffOkk9bAx30L9bpA tyObject_NilValcolonObjectType___fKecfBxAffOkk9bAx30L9bpA;
typedef struct tyObject_EvalWordcolonObjectType___FF1hBVbz2c8Heox5rS75Ag tyObject_EvalWordcolonObjectType___FF1hBVbz2c8Heox5rS75Ag;
typedef struct tyObject_EvalModuleWordcolonObjectType___ZENMry49aI2DmPcT3NXDvHQ tyObject_EvalModuleWordcolonObjectType___ZENMry49aI2DmPcT3NXDvHQ;
typedef struct tyObject_EvalSelfWordcolonObjectType___zNR0tIXRNc0KJuI8wpXnXw tyObject_EvalSelfWordcolonObjectType___zNR0tIXRNc0KJuI8wpXnXw;
typedef struct tyObject_GetWordcolonObjectType___BlkS9cob3lDdG76mmwoutJA tyObject_GetWordcolonObjectType___BlkS9cob3lDdG76mmwoutJA;
typedef struct tyObject_GetModuleWordcolonObjectType___vEbxK6KJ9bzGKzwFLXaIiFg tyObject_GetModuleWordcolonObjectType___vEbxK6KJ9bzGKzwFLXaIiFg;
typedef struct tyObject_GetSelfWordcolonObjectType___y1BD7nRldqdZhU4E5anJAg tyObject_GetSelfWordcolonObjectType___y1BD7nRldqdZhU4E5anJAg;
typedef struct tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ;
typedef struct tyObject_EvalArgWordcolonObjectType___8ODyuWDYceuBZbznEQPCuw tyObject_EvalArgWordcolonObjectType___8ODyuWDYceuBZbznEQPCuw;
typedef struct tyObject_GetArgWordcolonObjectType___9cJsDgJDoAR447HeWG5upAg tyObject_GetArgWordcolonObjectType___9cJsDgJDoAR447HeWG5upAg;
typedef struct tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw;
typedef struct tyObject_ParencolonObjectType___hTe49bQ0JCLL9cHXV8fA7KpQ tyObject_ParencolonObjectType___hTe49bQ0JCLL9cHXV8fA7KpQ;
typedef struct tyObject_CurlycolonObjectType___ecPnTcwgwwHcAwypU8uzzg tyObject_CurlycolonObjectType___ecPnTcwgwwHcAwypU8uzzg;
typedef struct tyObject_MapcolonObjectType___EsnExRpqJxGuuJFiAD81hg tyObject_MapcolonObjectType___EsnExRpqJxGuuJFiAD81hg;
typedef struct tyObject_BindingcolonObjectType___gJ74mAbH9cfZ8Z5ynaUkeCg tyObject_BindingcolonObjectType___gJ74mAbH9cfZ8Z5ynaUkeCg;
typedef struct tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg;
typedef struct tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ;
typedef struct tyObject_PrimFunccolonObjectType___Bo87RnDP4hF7V59b6rcAxSQ tyObject_PrimFunccolonObjectType___Bo87RnDP4hF7V59b6rcAxSQ;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct tyObject_WordcolonObjectType___7BqbUNG59afhVGAtHxWZC3Q tyObject_WordcolonObjectType___7BqbUNG59afhVGAtHxWZC3Q;
typedef struct tyObject_ParsercolonObjectType___9bkpYJZgm7rXSoRQ1xc0nBA tyObject_ParsercolonObjectType___9bkpYJZgm7rXSoRQ1xc0nBA;
typedef struct tyObject_ActivationcolonObjectType___jwMMFyLWVLpBU9ca5Dr6Vrw tyObject_ActivationcolonObjectType___jwMMFyLWVLpBU9ca5Dr6Vrw;
typedef struct tyObject_RootActivationcolonObjectType___iVrg9cFaeTAqppeKtHaL8cg tyObject_RootActivationcolonObjectType___iVrg9cFaeTAqppeKtHaL8cg;

/* section: NIM_merge_TYPES */
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
struct TNimType {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
};
struct RootObj {TNimType* m_type;};
struct tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ {  RootObj Sup;tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw* tags;
};
typedef struct {
N_NIMCALL_PTR(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*, ClP_0) (tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry, void* ClE_0);
void* ClE_0;
} tyProc__KzxxW30gLaLhm4JG7rojSg;
struct tyObject_PrimFunccolonObjectType___Bo87RnDP4hF7V59b6rcAxSQ {  tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ Sup;tyProc__KzxxW30gLaLhm4JG7rojSg primitive;
};
struct tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ {  tyObject_PrimFunccolonObjectType___Bo87RnDP4hF7V59b6rcAxSQ Sup;};
struct tyObject_WordcolonObjectType___7BqbUNG59afhVGAtHxWZC3Q {  tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ Sup;NimStringV2 word;
};
struct tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ {  tyObject_WordcolonObjectType___7BqbUNG59afhVGAtHxWZC3Q Sup;};
struct tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg {tyObject_ParsercolonObjectType___9bkpYJZgm7rXSoRQ1xc0nBA* parser;
tyObject_ActivationcolonObjectType___jwMMFyLWVLpBU9ca5Dr6Vrw* currentActivation;
tyObject_RootActivationcolonObjectType___iVrg9cFaeTAqppeKtHaL8cg* rootActivation;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* lastSelf;
tyObject_MapcolonObjectType___EsnExRpqJxGuuJFiAD81hg* root;
tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw* modules;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* trueVal;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* falseVal;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* nilVal;
tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw* emptyBlok;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* objectTag;
tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* moduleTag;
};
typedef N_CLOSURE_PTR(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*, TM__Te1Rj617fx4m5v9cLqPxdGQ_45) (tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry, void* ClE_0);

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__yysgyfdFwkc8baD9aTHHaMA)(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* self);
N_LIB_PRIVATE N_NIMCALL(void, raiseRuntimeException__jCdfUWSB9cH0VWQBVdqtBNA)(NimStringV2 msg);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__6fIfZZ7GRpjZA5z1nAhdGA)(tyObject_IntValcolonObjectType___aKHYxZgtDkEcxUVcEIFQ9cA* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__eCrl6gd59biiDfF1YRarRAA)(tyObject_FloatValcolonObjectType___L9aH8mAxkXlo8G9bklAV2LYg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__tEA9cjWCDQ3E8Q9a4izeRRBQ)(tyObject_StringValcolonObjectType___OzaVEa2ZspAxtzIz1MQfcA* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__xNjuugRn1BrhL0CePVHtOg)(tyObject_TrueValcolonObjectType___PiOEdKeHkROTxIzm3Y7FZA* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__neKqSoXgxl9ciIi7qb5XJxg)(tyObject_FalseValcolonObjectType___ZihhZOg0z0vJgpEpB5dyKw* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__BfzUgJcSa9cOWzUwDJt1GQw)(tyObject_NilValcolonObjectType___fKecfBxAffOkk9bAx30L9bpA* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__jAm9aD7LvSsKC80YpDcHkgQ)(tyObject_EvalWordcolonObjectType___FF1hBVbz2c8Heox5rS75Ag* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__HeUwM9ahRhl8nms1TacTHaw)(tyObject_EvalModuleWordcolonObjectType___ZENMry49aI2DmPcT3NXDvHQ* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__iOdLi269c7XXPZl8V8Qzz9cQ)(tyObject_EvalSelfWordcolonObjectType___zNR0tIXRNc0KJuI8wpXnXw* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__nZCyQxw9c2SxTBz1O1jetYA)(tyObject_GetWordcolonObjectType___BlkS9cob3lDdG76mmwoutJA* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__n9bD8b68I2SQiYlP9bdTopug)(tyObject_GetModuleWordcolonObjectType___vEbxK6KJ9bzGKzwFLXaIiFg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__boWbKYR1yWzuuLY5p9bcC3Q)(tyObject_GetSelfWordcolonObjectType___y1BD7nRldqdZhU4E5anJAg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__frDwSXWTT9a8qmp9b7uFfTJA)(tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__EshRCK9b3Q4x8JQ9cvgju2ww)(tyObject_EvalArgWordcolonObjectType___8ODyuWDYceuBZbznEQPCuw* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__4gktOX6P9bZmeTb9cCL9buVjg)(tyObject_GetArgWordcolonObjectType___9cJsDgJDoAR447HeWG5upAg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__KXCp1TnhTIOECDfDYM3oSQ)(tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__WGT6Ry35wGf8Jnfx9bk9aw3Q)(tyObject_ParencolonObjectType___hTe49bQ0JCLL9cHXV8fA7KpQ* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__JQnb9azksZnPrhWqgBUlw9cQ)(tyObject_CurlycolonObjectType___ecPnTcwgwwHcAwypU8uzzg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__x9aWZ8UXCAjKj7ihqAqCDaA)(tyObject_MapcolonObjectType___EsnExRpqJxGuuJFiAD81hg* self);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__b0k5kmjIIaO9ahOUcNKSBdQ)(tyObject_BindingcolonObjectType___gJ74mAbH9cfZ8Z5ynaUkeCg* self);
N_LIB_PRIVATE N_NIMCALL(void, makeWord__jieY5gv6B4AaNgmJTiZOCQ)(tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* self, NimStringV2 word, tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* value);
N_LIB_PRIVATE N_NIMCALL(tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ*, newPrimMeth__7XdBOD8x4C4vz9aR71T9bfkA)(tyProc__KzxxW30gLaLhm4JG7rojSg primitive);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*, colonanonymous___kViUUOOlC9aVsqrbfH9bOIVA)(tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry);
N_LIB_PRIVATE N_NIMCALL(tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ*, newOrGetLitWord__Ga339cGyUYrlBSyEpGljNqA)(tyObject_ParsercolonObjectType___9bkpYJZgm7rXSoRQ1xc0nBA* self, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__C9ceDra9aEASaAulD1P9bubYg)(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* self);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___8eMhTKv1RRUDzX38ucu4fA_2)(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ** dest, tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*, evalArgInfix__7W5SyHus4xS1zyMEKJKT6Q_2)(tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___9aO1dEPkfhJnKjHT0JFTXpA)(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ** dest);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);

/* section: NIM_merge_DATA */
static const struct {
  NI cap; NIM_CHAR data[32+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_2 = { 32 | NIM_STRLIT_FLAG, "Nodes need to implement typeName" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_3 = {32, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_4 = { 3 | NIM_STRLIT_FLAG, "int" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_5 = {3, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_4};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_6 = { 5 | NIM_STRLIT_FLAG, "float" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_7 = {5, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_6};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_8 = { 6 | NIM_STRLIT_FLAG, "string" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_9 = {6, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_8};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_10 = { 7 | NIM_STRLIT_FLAG, "boolean" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_11 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_10};
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_12 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_10};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_13 = { 7 | NIM_STRLIT_FLAG, "novalue" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_14 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_13};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_15 = { 8 | NIM_STRLIT_FLAG, "evalword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_16 = {8, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_15};
static const struct {
  NI cap; NIM_CHAR data[14+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_17 = { 14 | NIM_STRLIT_FLAG, "evalmoduleword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_18 = {14, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_17};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_19 = { 12 | NIM_STRLIT_FLAG, "evalselfword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_20 = {12, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_19};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_21 = { 7 | NIM_STRLIT_FLAG, "getword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_22 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_21};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_23 = { 13 | NIM_STRLIT_FLAG, "getmoduleword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_24 = {13, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_23};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_25 = { 11 | NIM_STRLIT_FLAG, "getselfword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_26 = {11, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_25};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_27 = { 7 | NIM_STRLIT_FLAG, "litword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_28 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_27};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_29 = { 11 | NIM_STRLIT_FLAG, "evalargword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_30 = {11, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_29};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_31 = { 10 | NIM_STRLIT_FLAG, "getargword" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_32 = {10, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_31};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_33 = { 5 | NIM_STRLIT_FLAG, "block" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_34 = {5, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_33};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_35 = { 5 | NIM_STRLIT_FLAG, "paren" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_36 = {5, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_35};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_37 = { 5 | NIM_STRLIT_FLAG, "curly" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_38 = {5, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_37};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_39 = { 3 | NIM_STRLIT_FLAG, "map" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_40 = {3, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_39};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_41 = { 7 | NIM_STRLIT_FLAG, "binding" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_42 = {7, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_41};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__Te1Rj617fx4m5v9cLqPxdGQ_43 = { 4 | NIM_STRLIT_FLAG, "type" };
static const NimStringV2 TM__Te1Rj617fx4m5v9cLqPxdGQ_44 = {4, (NimStrPayload*)&TM__Te1Rj617fx4m5v9cLqPxdGQ_43};

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 424 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 425 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 541 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 542 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 542 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 543 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 548 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 550 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 550 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 550 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 550 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 85 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 3 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__yysgyfdFwkc8baD9aTHHaMA)(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* self) {	NimStringV2 result;NIM_BOOL* nimErr_;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");{nimErr_ = nimErrorFlag();	result.len = 0; result.p = NIM_NIL;
#line 4 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(4, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");
#line 4 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	raiseRuntimeException__jCdfUWSB9cH0VWQBVdqtBNA(TM__Te1Rj617fx4m5v9cLqPxdGQ_3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}

#line 6 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__6fIfZZ7GRpjZA5z1nAhdGA)(tyObject_IntValcolonObjectType___aKHYxZgtDkEcxUVcEIFQ9cA* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 7 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(7, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_5;	popFrame();	return result;}

#line 9 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__eCrl6gd59biiDfF1YRarRAA)(tyObject_FloatValcolonObjectType___L9aH8mAxkXlo8G9bklAV2LYg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 10 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(10, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_7;	popFrame();	return result;}

#line 12 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__tEA9cjWCDQ3E8Q9a4izeRRBQ)(tyObject_StringValcolonObjectType___OzaVEa2ZspAxtzIz1MQfcA* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 13 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(13, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_9;	popFrame();	return result;}

#line 15 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__xNjuugRn1BrhL0CePVHtOg)(tyObject_TrueValcolonObjectType___PiOEdKeHkROTxIzm3Y7FZA* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 16 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(16, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_11;	popFrame();	return result;}

#line 18 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__neKqSoXgxl9ciIi7qb5XJxg)(tyObject_FalseValcolonObjectType___ZihhZOg0z0vJgpEpB5dyKw* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 19 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(19, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_12;	popFrame();	return result;}

#line 21 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__BfzUgJcSa9cOWzUwDJt1GQw)(tyObject_NilValcolonObjectType___fKecfBxAffOkk9bAx30L9bpA* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 22 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(22, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_14;	popFrame();	return result;}

#line 24 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__jAm9aD7LvSsKC80YpDcHkgQ)(tyObject_EvalWordcolonObjectType___FF1hBVbz2c8Heox5rS75Ag* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 25 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(25, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_16;	popFrame();	return result;}

#line 27 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__HeUwM9ahRhl8nms1TacTHaw)(tyObject_EvalModuleWordcolonObjectType___ZENMry49aI2DmPcT3NXDvHQ* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 28 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(28, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_18;	popFrame();	return result;}

#line 30 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__iOdLi269c7XXPZl8V8Qzz9cQ)(tyObject_EvalSelfWordcolonObjectType___zNR0tIXRNc0KJuI8wpXnXw* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 31 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(31, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_20;	popFrame();	return result;}

#line 33 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__nZCyQxw9c2SxTBz1O1jetYA)(tyObject_GetWordcolonObjectType___BlkS9cob3lDdG76mmwoutJA* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 34 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(34, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_22;	popFrame();	return result;}

#line 36 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__n9bD8b68I2SQiYlP9bdTopug)(tyObject_GetModuleWordcolonObjectType___vEbxK6KJ9bzGKzwFLXaIiFg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 37 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(37, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_24;	popFrame();	return result;}

#line 39 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__boWbKYR1yWzuuLY5p9bcC3Q)(tyObject_GetSelfWordcolonObjectType___y1BD7nRldqdZhU4E5anJAg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 40 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(40, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_26;	popFrame();	return result;}

#line 42 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__frDwSXWTT9a8qmp9b7uFfTJA)(tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 43 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(43, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_28;	popFrame();	return result;}

#line 45 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__EshRCK9b3Q4x8JQ9cvgju2ww)(tyObject_EvalArgWordcolonObjectType___8ODyuWDYceuBZbznEQPCuw* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 46 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(46, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_30;	popFrame();	return result;}

#line 48 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__4gktOX6P9bZmeTb9cCL9buVjg)(tyObject_GetArgWordcolonObjectType___9cJsDgJDoAR447HeWG5upAg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 49 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(49, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_32;	popFrame();	return result;}

#line 51 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__KXCp1TnhTIOECDfDYM3oSQ)(tyObject_BlokcolonObjectType___UIJsSh2kxAc9acGwoSYj4xw* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 52 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(52, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_34;	popFrame();	return result;}

#line 54 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__WGT6Ry35wGf8Jnfx9bk9aw3Q)(tyObject_ParencolonObjectType___hTe49bQ0JCLL9cHXV8fA7KpQ* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 55 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(55, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_36;	popFrame();	return result;}

#line 57 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__JQnb9azksZnPrhWqgBUlw9cQ)(tyObject_CurlycolonObjectType___ecPnTcwgwwHcAwypU8uzzg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 58 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(58, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_38;	popFrame();	return result;}

#line 60 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__x9aWZ8UXCAjKj7ihqAqCDaA)(tyObject_MapcolonObjectType___EsnExRpqJxGuuJFiAD81hg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 61 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(61, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_40;	popFrame();	return result;}

#line 63 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeName__b0k5kmjIIaO9ahOUcNKSBdQ)(tyObject_BindingcolonObjectType___gJ74mAbH9cfZ8Z5ynaUkeCg* self) {	NimStringV2 result;	nimfr_("typeName", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result.len = 0; result.p = NIM_NIL;
#line 64 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(64, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	result = TM__Te1Rj617fx4m5v9cLqPxdGQ_42;	popFrame();	return result;}

#line 1355 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*, colonanonymous___kViUUOOlC9aVsqrbfH9bOIVA)(tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry) {	tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* result;	tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* colontmpD_;	tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* T2_;	NimStringV2 T3_;	tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ* T4_;NIM_BOOL oldNimErrFin1_;NIM_BOOL* nimErr_;	nimfr_(":anonymous", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm"
".nim");{nimErr_ = nimErrorFlag();	result = (tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*)0;	colontmpD_ = (tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*)0;
#line 69 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(69, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");
#line 1571 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm.nim"
	nimln_(1571, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm"
".nim");
#line 69 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(69, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");
#line 119 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim"
	nimln_(119, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim");
#line 69 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(69, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");
#line 69 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	T2_ = (tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*)0;	T2_ = evalArgInfix__7W5SyHus4xS1zyMEKJKT6Q_2(spry);	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 119 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim"
	nimln_(119, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim");	eqsink___8eMhTKv1RRUDzX38ucu4fA_2(&colontmpD_, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 69 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(69, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	T3_.len = 0; T3_.p = NIM_NIL;	T3_ = typeName__C9ceDra9aEASaAulD1P9bubYg(colontmpD_);	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 1571 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm.nim"
	nimln_(1571, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm"
".nim");	T4_ = (tyObject_LitWordcolonObjectType___iuVFnv3VjswMuJ6DW1vINQ*)0;	T4_ = newOrGetLitWord__Ga339cGyUYrlBSyEpGljNqA((*spry).parser, T3_);	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;	result = &T4_->Sup.Sup;	{		LA1_:;	}
	{		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
#line 119 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim"
		nimln_(119, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim");
#line 119 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/repr_v2.nim"
		eqdestroy___9aO1dEPkfhJnKjHT0JFTXpA(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		*nimErr_ = oldNimErrFin1_;	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}

#line 22 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {NIM_BOOL* nimErr_;{nimErr_ = nimErrorFlag();
#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
}

#line 67 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
N_LIB_PRIVATE N_NIMCALL(void, addReflect__adAYK1j1lkb7hknzciid9cQ)(tyObject_InterpretercolonObjectType___9a9c0PsXJdclNJBQRoT5OKJg* spry) {	tyProc__KzxxW30gLaLhm4JG7rojSg T1_;	tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ* T2_;	tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ* T3_;NIM_BOOL* nimErr_;	nimfr_("addReflect", "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");{nimErr_ = nimErrorFlag();
#line 68 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(68, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");
#line 1354 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm.nim"
	nimln_(1354, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm"
".nim");	nimZeroMem((void*)(&T1_), sizeof(tyProc__KzxxW30gLaLhm4JG7rojSg));	T1_.ClP_0 = ((TM__Te1Rj617fx4m5v9cLqPxdGQ_45) (colonanonymous___kViUUOOlC9aVsqrbfH9bOIVA)); T1_.ClE_0 = NIM_NIL;
#line 1354 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryvm.nim"
	T2_ = (tyObject_PrimMethcolonObjectType___7evgxa2ozVE9bj7jSo6ShwQ*)0;	T2_ = newPrimMeth__7XdBOD8x4C4vz9aR71T9bfkA(T1_);	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	T3_ = (tyObject_NodecolonObjectType___9b2icaXRytXqioWcLSlnKfQ*)0;	T3_ = &T2_->Sup.Sup;
#line 68 "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryreflect.nim"
	nimln_(68, "/Volumes/datastore/projects/pt/third-party/spryvm/spryvm/spryre"
"flect.nim");	makeWord__jieY5gv6B4AaNgmJTiZOCQ(spry, TM__Te1Rj617fx4m5v9cLqPxdGQ_44, T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}
