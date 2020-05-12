/* Generated by Nim Compiler v1.3.3 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -g  -I/Users/elcritch/.asdf/installs/nim/devel/lib -I/Volumes/datastore/projects/pt/third-party/spryvm/tests -o /Volumes/datastore/projects/pt/third-party/spryvm/tests/_nimcache/stdlib_memfiles.nim.c.o /Volumes/datastore/projects/pt/third-party/spryvm/tests/_nimcache/stdlib_memfiles.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <sys/mman.h>
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
typedef struct tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ {void* mem;
NI size;
int handle;
int flags;
};
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct TNimType {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
};
struct RootObj {TNimType* m_type;};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {  Exception Sup;};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;};
struct TNimNode {char dummy;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*, newEIO__p9cV9aLIR0cb1PJyEB5xNJrg)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___alwQGEdY5R729bmQjvHPw5Q)(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw** dest);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aBBXmHFBEivKqERloP6zmA)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringV2 msg);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);

/* section: NIM_merge_DATA */
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
static const struct {
  NI cap; NIM_CHAR data[33+1];
} TM__mFfhe8Jm7Jqn2Znr3841fw_2 = { 33 | NIM_STRLIT_FLAG, "The append mode is not supported." };
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_3 = {33, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_2};
static const struct {
  NI cap; NIM_CHAR data[110+1];
} TM__mFfhe8Jm7Jqn2Znr3841fw_4 = { 110 | NIM_STRLIT_FLAG, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim("
"138, 10) `newFileSize == -1 or mode != fmRead` " };
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_5 = {110, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_4};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__mFfhe8Jm7Jqn2Znr3841fw_6 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_7 = {0, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_6};
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_8 = {0, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_6};
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_9 = {0, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_6};
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_10 = {0, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_6};
static const NimStringV2 TM__mFfhe8Jm7Jqn2Znr3841fw_11 = {0, (NimStrPayload*)&TM__mFfhe8Jm7Jqn2Znr3841fw_6};

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 22 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 24 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 424 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 425 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {NIM_BOOL* nimErr_;{nimErr_ = nimErrorFlag();
#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
}

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

#line 27 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*, newEIO__p9cV9aLIR0cb1PJyEB5xNJrg)(NimStringV2 msg) {	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* result;NIM_BOOL* nimErr_;	nimfr_("newEIO", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");{nimErr_ = nimErrorFlag();	result = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
#line 136 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/io.nim"
	nimln_(136, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/io.nim");
#line 136 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/io.nim"
	eqdestroy___alwQGEdY5R729bmQjvHPw5Q(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 28 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(28, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	result = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) nimNewObj(sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));	(*result).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);	(*result).Sup.Sup.name = "IOError";
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	eqsink___aBBXmHFBEivKqERloP6zmA((&(*result).Sup.Sup.message), msg);

#line 29 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(29, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	msg.len = 0; msg.p = NIM_NIL;	{		LA1_:;	}
	{
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&msg));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}

#line 76 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {	NCSTRING result;	result = (NCSTRING)0;
#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	{
#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (!(s.len == ((NI) 0))) goto LA3_;

#line 77 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		result = "";	}
	goto LA1_;
	LA3_: ;
	{
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		result = ((NCSTRING) ((*s.p).data));	}
	LA1_: ;
	return result;}

#line 98 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ, open__QVGUjgJbeJv7RHdWON5YuA)(NimStringV2 filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI mappedSize, NI offset, NI newFileSize, NIM_BOOL allowRemap, int mapFlags) {	tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ result;	NIM_BOOL readonly;	NI32 flags;	int T12_;	int T74_;NIM_BOOL* nimErr_;	nimfr_("open", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");{nimErr_ = nimErrorFlag();	nimZeroMem((void*)(&result), sizeof(tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ));
#line 135 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(135, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T5_;
#line 135 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!(mode == ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 4))) goto LA3_;

#line 136 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(136, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 136 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T5_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;		T5_ = newEIO__p9cV9aLIR0cb1PJyEB5xNJrg(TM__mFfhe8Jm7Jqn2Znr3841fw_3);		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 136 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		raiseExceptionEx((Exception*)T5_, "IOError", "open", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim", 136);		goto BeforeRet_;	}
	LA3_: ;

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(138, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NIM_BOOL T8_;
#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T8_ = (NIM_BOOL)0;
#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T8_ = (newFileSize == ((NI) -1));		if (T8_) goto LA9_;

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T8_ = !((mode == ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0)));		LA9_: ;
		if (!!(T8_)) goto LA10_;

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 138 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(TM__mFfhe8Jm7Jqn2Znr3841fw_5);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA10_: ;

#line 139 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(139, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 139 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	readonly = (mode == ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0));
#line 231 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(231, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 231 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	T12_ = (int)0;
#line 231 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	{		if (!readonly) goto LA15_;
		T12_ = O_RDONLY;	}
	goto LA13_;
	LA15_: ;
	{		T12_ = O_RDWR;	}
	LA13_: ;
	flags = (NI32)(T12_ | O_CLOEXEC);
#line 233 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(233, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NI32 permissions_mode;
#line 233 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 233 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!!((newFileSize == ((NI) -1)))) goto LA20_;

#line 234 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(234, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 234 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 234 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		flags = (NI32)((NI32)(flags | O_CREAT) | O_TRUNC);
#line 235 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(235, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 235 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		permissions_mode = (NI32)(S_IRUSR | S_IWUSR);
#line 236 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(236, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 236 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		result.handle = open(nimToCStringConv(filename), flags, permissions_mode);	}
	goto LA18_;
	LA20_: ;
	{
#line 238 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(238, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 238 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		result.handle = open(nimToCStringConv(filename), flags);	}
	LA18_: ;

#line 240 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(240, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NI32 T32_;
#line 240 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!(result.handle == ((NI32) -1))) goto LA25_;

#line 142 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(142, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		result.mem = NIM_NIL;
#line 143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(143, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		result.size = ((NI) 0);
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(228, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		{			int T31_;
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			if (!!((result.handle == ((NI32) -1)))) goto LA29_;

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T31_ = (int)0;			T31_ = close(result.handle);			(void)(T31_);
		}
		LA29_: ;

#line 243 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(243, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 243 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 243 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T32_ = (NI32)0;		T32_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 243 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T32_, TM__mFfhe8Jm7Jqn2Znr3841fw_7);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA25_: ;

#line 245 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(245, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{
#line 245 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 245 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!!((newFileSize == ((NI) -1)))) goto LA35_;

#line 246 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(246, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		{			int T39_;			NI32 T47_;
#line 246 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 246 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 246 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T39_ = (int)0;			T39_ = ftruncate(result.handle, ((off_t) (newFileSize)));			if (!(T39_ == ((NI32) -1))) goto LA40_;

#line 142 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(142, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.mem = NIM_NIL;
#line 143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(143, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.size = ((NI) 0);
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(228, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			{				int T46_;
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
				if (!!((result.handle == ((NI32) -1)))) goto LA44_;

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
				T46_ = (int)0;				T46_ = close(result.handle);				(void)(T46_);
			}
			LA44_: ;

#line 247 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(247, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 247 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 247 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T47_ = (NI32)0;			T47_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 247 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T47_, TM__mFfhe8Jm7Jqn2Znr3841fw_8);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		}
		LA40_: ;
	}
	LA35_: ;

#line 249 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(249, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{
#line 249 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 249 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!!((mappedSize == ((NI) -1)))) goto LA50_;

#line 250 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(250, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		result.size = mappedSize;	}
	goto LA48_;
	LA50_: ;
	{		struct stat stat;		nimZeroMem((void*)(&stat), sizeof(struct stat));
#line 253 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(253, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		{			int T55_;
#line 253 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 253 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 253 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 253 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T55_ = (int)0;			T55_ = fstat(result.handle, (&stat));			if (!!((T55_ == ((NI32) -1)))) goto LA56_;

#line 256 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(256, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.size = ((NI) (stat.st_size));		}
		goto LA53_;
		LA56_: ;
		{			NI32 T64_;
#line 142 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(142, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.mem = NIM_NIL;
#line 143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(143, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.size = ((NI) 0);
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(228, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			{				int T63_;
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
				if (!!((result.handle == ((NI32) -1)))) goto LA61_;

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
				T63_ = (int)0;				T63_ = close(result.handle);				(void)(T63_);
			}
			LA61_: ;

#line 258 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(258, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 258 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 258 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T64_ = (NI32)0;			T64_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 258 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T64_, TM__mFfhe8Jm7Jqn2Znr3841fw_9);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		}
		LA53_: ;
	}
	LA48_: ;

#line 260 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(260, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 260 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	{
#line 260 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!(mapFlags == ((int) -1))) goto LA67_;
		result.flags = MAP_SHARED;	}
	goto LA65_;
	LA67_: ;
	{		result.flags = mapFlags;	}
	LA65_: ;

#line 262 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(262, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{
#line 262 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 262 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!(((NI) ((NI32)(result.flags & MAP_PRIVATE))) == ((NI) 0))) goto LA72_;

#line 263 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(263, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 263 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		result.flags = (NI32)(result.flags | MAP_SHARED);	}
	LA72_: ;

#line 265 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(265, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	T74_ = (int)0;
#line 268 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(268, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		if (!readonly) goto LA77_;
		T74_ = PROT_READ;	}
	goto LA75_;
	LA77_: ;
	{
#line 268 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T74_ = (NI32)(PROT_READ | PROT_WRITE);	}
	LA75_: ;

#line 265 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(265, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	result.mem = mmap(NIM_NIL, result.size, T74_, result.flags, result.handle, ((off_t) (offset)));
#line 273 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(273, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NI32 T89_;
#line 273 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!(result.mem == ((void*) (MAP_FAILED)))) goto LA82_;

#line 142 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(142, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		result.mem = NIM_NIL;
#line 143 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(143, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		result.size = ((NI) 0);
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(228, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		{			int T88_;
#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			if (!!((result.handle == ((NI32) -1)))) goto LA86_;

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 228 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T88_ = (int)0;			T88_ = close(result.handle);			(void)(T88_);
		}
		LA86_: ;

#line 274 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(274, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 274 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 274 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T89_ = (NI32)0;		T89_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 274 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T89_, TM__mFfhe8Jm7Jqn2Znr3841fw_10);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA82_: ;

#line 276 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(276, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NIM_BOOL T92_;
#line 276 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T92_ = (NIM_BOOL)0;
#line 276 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T92_ = !(allowRemap);		if (!(T92_)) goto LA93_;

#line 276 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 276 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T92_ = !((result.handle == ((NI32) -1)));		LA93_: ;
		if (!T92_) goto LA94_;

#line 277 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(277, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");		{			int T98_;
#line 277 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 277 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 277 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			T98_ = (int)0;			T98_ = close(result.handle);			if (!(T98_ == ((NI32) 0))) goto LA99_;

#line 278 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
			nimln_(278, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");			result.handle = ((int) -1);		}
		LA99_: ;
	}
	LA94_: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 331 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
N_LIB_PRIVATE N_NIMCALL(void, close__gRakhE5v7JaOKQThVQTzkA)(tyObject_MemFile__j4SnXNrJDFBxAz4BlbM9aIQ* f) {	NIM_BOOL error;	NI32 lastErr;	int T1_;NIM_BOOL* nimErr_;	nimfr_("close", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");{nimErr_ = nimErrorFlag();
#line 335 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(335, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	error = NIM_FALSE;	lastErr = (NI32)0;
#line 349 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(349, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 349 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 349 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 349 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 349 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	T1_ = (int)0;	T1_ = munmap((*f).mem, (*f).size);	error = !((T1_ == ((NI32) 0)));
#line 350 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(350, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 350 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	lastErr = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 351 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(351, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		NIM_BOOL T6_;		int T7_;
#line 351 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 351 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		if (!!(((*f).handle == ((NI32) -1)))) goto LA4_;

#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		nimln_(352, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");
#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T6_ = (NIM_BOOL)0;
#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 352 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		T7_ = (int)0;		T7_ = close((*f).handle);		T6_ = !((T7_ == ((NI32) 0)));		if (T6_) goto LA8_;
		T6_ = error;		LA8_: ;
		error = T6_;	}
	LA4_: ;

#line 354 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(354, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	(*f).size = ((NI) 0);
#line 355 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(355, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	(*f).mem = NIM_NIL;
#line 362 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(362, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	(*f).handle = ((int) -1);
#line 364 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
	nimln_(364, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim");	{		if (!error) goto LA11_;

#line 364 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"

#line 364 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/memfiles.nim"
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(lastErr, TM__mFfhe8Jm7Jqn2Znr3841fw_11);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA11_: ;
	}BeforeRet_: ;
	popFrame();}
