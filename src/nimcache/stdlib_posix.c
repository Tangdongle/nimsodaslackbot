/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/ryan/.choosenim/toolchains/nim-0.18.0/lib -o /home/ryan/dev/slackbot/src/nimcache/stdlib_posix.o /home/ryan/dev/slackbot/src/nimcache/stdlib_posix.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/socket.h>
#include <netdb.h>
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
#undef powerpc
#undef unix
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NIM_CHAR tyArray_NSMq3FMCIrS8gSbyinBZ8w[14];
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
TNimType NTI_9cZH5RlAr01KsIvF1l3qtjg_;
TNimType NTI_O6FgeeKj9aWQk0Yis9btN5NA_;
TNimType NTI_TCRYwcKSxUXq9bMcFqsXBVw_;
TNimType NTI_hPc7XqKClD9b78QZzY9cBimw_;
TNimType NTI_DJcmQKmlnNYcTFWINxaHKg_;
TNimType NTI_RKUGZEMz2PFhWAtlM9aW0KA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void) {
	nimfr_("posix", "posix.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void) {
static TNimNode TM_mJPr4mHlDfNAl9asG6X7NFA_0[2];
NTI_9cZH5RlAr01KsIvF1l3qtjg_.size = sizeof(socklen_t);
NTI_9cZH5RlAr01KsIvF1l3qtjg_.kind = 43;
NTI_9cZH5RlAr01KsIvF1l3qtjg_.base = 0;
NTI_9cZH5RlAr01KsIvF1l3qtjg_.flags = 3;
NTI_O6FgeeKj9aWQk0Yis9btN5NA_.size = sizeof(struct sockaddr);
NTI_O6FgeeKj9aWQk0Yis9btN5NA_.kind = 18;
NTI_O6FgeeKj9aWQk0Yis9btN5NA_.base = 0;
NTI_O6FgeeKj9aWQk0Yis9btN5NA_.flags = 3;
NTI_O6FgeeKj9aWQk0Yis9btN5NA_.node = &TM_mJPr4mHlDfNAl9asG6X7NFA_0[0];
NTI_TCRYwcKSxUXq9bMcFqsXBVw_.size = sizeof(struct sockaddr*);
NTI_TCRYwcKSxUXq9bMcFqsXBVw_.kind = 21;
NTI_TCRYwcKSxUXq9bMcFqsXBVw_.base = (&NTI_O6FgeeKj9aWQk0Yis9btN5NA_);
NTI_TCRYwcKSxUXq9bMcFqsXBVw_.flags = 3;
NTI_hPc7XqKClD9b78QZzY9cBimw_.size = sizeof(socklen_t*);
NTI_hPc7XqKClD9b78QZzY9cBimw_.kind = 21;
NTI_hPc7XqKClD9b78QZzY9cBimw_.base = (&NTI_9cZH5RlAr01KsIvF1l3qtjg_);
NTI_hPc7XqKClD9b78QZzY9cBimw_.flags = 3;
NTI_DJcmQKmlnNYcTFWINxaHKg_.size = sizeof(struct addrinfo);
NTI_DJcmQKmlnNYcTFWINxaHKg_.kind = 18;
NTI_DJcmQKmlnNYcTFWINxaHKg_.base = 0;
NTI_DJcmQKmlnNYcTFWINxaHKg_.flags = 3;
NTI_DJcmQKmlnNYcTFWINxaHKg_.node = &TM_mJPr4mHlDfNAl9asG6X7NFA_0[1];
NTI_RKUGZEMz2PFhWAtlM9aW0KA_.size = sizeof(struct addrinfo*);
NTI_RKUGZEMz2PFhWAtlM9aW0KA_.kind = 21;
NTI_RKUGZEMz2PFhWAtlM9aW0KA_.base = (&NTI_DJcmQKmlnNYcTFWINxaHKg_);
NTI_RKUGZEMz2PFhWAtlM9aW0KA_.flags = 3;
}

