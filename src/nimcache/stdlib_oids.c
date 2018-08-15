/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/ryan/.choosenim/toolchains/nim-0.18.0/lib -o /home/ryan/dev/slackbot/src/nimcache/stdlib_oids.o /home/ryan/dev/slackbot/src/nimcache/stdlib_oids.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
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
typedef struct tyObject_Oid_v0fX7UzOqz7toHgI0d87SA tyObject_Oid_v0fX7UzOqz7toHgI0d87SA;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct tyObject_Oid_v0fX7UzOqz7toHgI0d87SA {
NI32 time;
NI32 fuzz;
NI32 count;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__64QI4g9auky303LA9bv0oaXQ)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid1, tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid2);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NI, hexbyte_QCPx9abgIgtvQ39aT8xIuEJw)(NIM_CHAR hex);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA, parseOid_ZKKq9c1E1NLXB9aa1kqgNwXQ)(NCSTRING str);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_LIB_PRIVATE N_NIMCALL(void, oidToString_khwHESMMJSplBOOFbhAnFQ)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid, NCSTRING str);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__XZmIDj6b72IIMfJvOft31Q)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA, genOid_CiwhU4LwBy9bUOUutq9cQYOQ)(void);
N_LIB_PRIVATE N_NIMCALL(NI64, getTime_Ft5FFURWITtb9aR6Hjpq6UQ)(void);
N_NIMCALL(NI64, chckRange64)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NI, atomicInc_z4A2GBHreJM5Dq9aEBQ9cQUQsystem)(NI* memLoc, NI x);
static N_INLINE(void, bigEndian32_IzdisrH4sYnsItUtxSkomA_8endians)(void* outp, void* inp);
static N_INLINE(void, swapEndian32_IzdisrH4sYnsItUtxSkomA_2endians)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(NI64, generatedTime_M1ZAR9c5o7yGRtr8tvZy1KA)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid);
N_LIB_PRIVATE N_NIMCALL(NI64, fromUnix_C77WZNbbZYep1XVMN2QCfA)(NI64 unix);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
NI incr_uxzATGLVK9aAfCz88FkdO0g;
NI32 fuzz_8VX8F8ZpvRGTMF7N4xU39cg;
STRING_LITERAL(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_12, "0123456789abcdef", 16);

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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__64QI4g9auky303LA9bv0oaXQ)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid1, tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid2) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	nimfr_("==", "oids.nim");
{	result = (NIM_BOOL)0;
	nimln_(30, "oids.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (oid1.time == oid2.time);
	if (!(T2_)) goto LA3_;
	T2_ = (oid1.fuzz == oid2.fuzz);
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	T1_ = (oid1.count == oid2.count);
	LA4_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, hexbyte_QCPx9abgIgtvQ39aT8xIuEJw)(NIM_CHAR hex) {
	NI result;
	nimfr_("hexbyte", "oids.nim");
	result = (NI)0;
	nimln_(33, "oids.nim");
	switch (((NU8)(hex))) {
	case 48 ... 57:
	{
		NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_2;
		nimln_(34, "oids.nim");
		TM_UTnk8gn1Oi9cBJSIU9cQGLMA_2 = subInt(((NU8)(hex)), ((NI) 48));
		result = (NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_2);
	}
	break;
	case 97 ... 102:
	{
		NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_3;
		NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_4;
		nimln_(35, "oids.nim");
		TM_UTnk8gn1Oi9cBJSIU9cQGLMA_3 = subInt(((NU8)(hex)), ((NI) 97));
		TM_UTnk8gn1Oi9cBJSIU9cQGLMA_4 = addInt((NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_3), ((NI) 10));
		result = (NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_4);
	}
	break;
	case 65 ... 70:
	{
		NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_5;
		NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_6;
		nimln_(36, "oids.nim");
		TM_UTnk8gn1Oi9cBJSIU9cQGLMA_5 = subInt(((NU8)(hex)), ((NI) 65));
		TM_UTnk8gn1Oi9cBJSIU9cQGLMA_6 = addInt((NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_5), ((NI) 10));
		result = (NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_6);
	}
	break;
	default:
	{
	}
	break;
	}
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA, parseOid_ZKKq9c1E1NLXB9aa1kqgNwXQ)(NCSTRING str) {
	tyObject_Oid_v0fX7UzOqz7toHgI0d87SA result;
	NCSTRING bytes;
	NI i;
	nimfr_("parseOid", "oids.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(41, "oids.nim");
	bytes = ((NCSTRING) ((&result.time)));
	nimln_(42, "oids.nim");
	i = ((NI) 0);
	{
		nimln_(43, "oids.nim");
		while (1) {
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_7;
			NI T3_;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_8;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_9;
			NI T4_;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_10;
			if (!(i < ((NI) 12))) goto LA2;
			nimln_(44, "oids.nim");
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_7 = mulInt(((NI) 2), i);
			T3_ = (NI)0;
			T3_ = hexbyte_QCPx9abgIgtvQ39aT8xIuEJw(str[(NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_7)]);
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_8 = mulInt(((NI) 2), i);
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_9 = addInt((NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_8), ((NI) 1));
			T4_ = (NI)0;
			T4_ = hexbyte_QCPx9abgIgtvQ39aT8xIuEJw(str[(NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_9)]);
			bytes[i] = ((NIM_CHAR) (((NI)chckRange((NI)((NI)((NU64)(T3_) << (NU64)(((NI) 4))) | T4_), ((NI) 0), ((NI) 255)))));
			nimln_(45, "oids.nim");
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_10 = addInt(i, ((NI) 1));
			i = (NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_10);
		} LA2: ;
	}
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, oidToString_khwHESMMJSplBOOFbhAnFQ)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid, NCSTRING str) {
	NCSTRING str_2;
	tyObject_Oid_v0fX7UzOqz7toHgI0d87SA o;
	NCSTRING bytes;
	NI i;
	nimfr_("oidToString", "oids.nim");
	nimln_(50, "oids.nim");
	str_2 = str;
	nimln_(51, "oids.nim");
	o = oid;
	nimln_(52, "oids.nim");
	bytes = ((NCSTRING) ((&o)));
	nimln_(53, "oids.nim");
	i = ((NI) 0);
	{
		nimln_(54, "oids.nim");
		while (1) {
			NI b;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_11;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_13;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_14;
			NI TM_UTnk8gn1Oi9cBJSIU9cQGLMA_15;
			if (!(i < ((NI) 12))) goto LA2;
			nimln_(55, "oids.nim");
			b = ((NU8)(bytes[i]));
			nimln_(56, "oids.nim");
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_11 = mulInt(((NI) 2), i);
			if ((NU)((NI)((NU64)((NI)(b & ((NI) 240))) >> (NU64)(((NI) 4)))) > (NU)(((NimStringDesc*) &TM_UTnk8gn1Oi9cBJSIU9cQGLMA_12)->Sup.len)) raiseIndexError();
			str_2[(NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_11)] = ((NimStringDesc*) &TM_UTnk8gn1Oi9cBJSIU9cQGLMA_12)->data[(NI)((NU64)((NI)(b & ((NI) 240))) >> (NU64)(((NI) 4)))];
			nimln_(57, "oids.nim");
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_13 = mulInt(((NI) 2), i);
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_14 = addInt((NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_13), ((NI) 1));
			if ((NU)((NI)(b & ((NI) 15))) > (NU)(((NimStringDesc*) &TM_UTnk8gn1Oi9cBJSIU9cQGLMA_12)->Sup.len)) raiseIndexError();
			str_2[(NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_14)] = ((NimStringDesc*) &TM_UTnk8gn1Oi9cBJSIU9cQGLMA_12)->data[(NI)(b & ((NI) 15))];
			nimln_(58, "oids.nim");
			TM_UTnk8gn1Oi9cBJSIU9cQGLMA_15 = addInt(i, ((NI) 1));
			i = (NI)(TM_UTnk8gn1Oi9cBJSIU9cQGLMA_15);
		} LA2: ;
	}
	nimln_(59, "oids.nim");
	str_2[((NI) 24)] = 0;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__XZmIDj6b72IIMfJvOft31Q)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid) {
	NimStringDesc* result;
	nimfr_("$", "oids.nim");
	result = (NimStringDesc*)0;
	nimln_(62, "oids.nim");
	result = mnewString(((NI) 24));
	nimln_(63, "oids.nim");
	oidToString_khwHESMMJSplBOOFbhAnFQ(oid, result->data);
	popFrame();
	return result;
}

static N_INLINE(NI, atomicInc_z4A2GBHreJM5Dq9aEBQ9cQUQsystem)(NI* memLoc, NI x) {
	NI result;
	result = (NI)0;
	(*memLoc) += x;
	result = (*memLoc);
	return result;
}

static N_INLINE(void, swapEndian32_IzdisrH4sYnsItUtxSkomA_2endians)(void* outp, void* inp) {
	NU32* i;
	NU32* o;
	nimfr_("swapEndian32", "endians.nim");
	nimln_(53, "endians.nim");
	i = ((NU32*) (inp));
	nimln_(54, "endians.nim");
	o = ((NU32*) (outp));
	nimln_(55, "endians.nim");
	(*o) = __builtin_bswap32((*i));
	popFrame();
}

static N_INLINE(void, bigEndian32_IzdisrH4sYnsItUtxSkomA_8endians)(void* outp, void* inp) {
	nimfr_("bigEndian32", "endians.nim");
	nimln_(107, "endians.nim");
	swapEndian32_IzdisrH4sYnsItUtxSkomA_2endians(outp, inp);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA, genOid_CiwhU4LwBy9bUOUutq9cQYOQ)(void) {
	tyObject_Oid_v0fX7UzOqz7toHgI0d87SA result;
	NI32 t;
	NI64 T1_;
	NI32 i;
	NI T2_;
	nimfr_("genOid", "oids.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(74, "oids.nim");
	T1_ = (NI64)0;
	T1_ = getTime_Ft5FFURWITtb9aR6Hjpq6UQ();
	t = ((NI32)chckRange64(T1_, ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
	nimln_(76, "oids.nim");
	T2_ = (NI)0;
	T2_ = atomicInc_z4A2GBHreJM5Dq9aEBQ9cQUQsystem((&incr_uxzATGLVK9aAfCz88FkdO0g), ((NI) 1));
	i = ((NI32)chckRange(T2_, ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
	nimln_(78, "oids.nim");
	{
		if (!(fuzz_8VX8F8ZpvRGTMF7N4xU39cg == ((NI32) 0))) goto LA5_;
		nimln_(80, "oids.nim");
		srand(t);
		nimln_(81, "oids.nim");
		fuzz_8VX8F8ZpvRGTMF7N4xU39cg = rand();
	}
	LA5_: ;
	nimln_(82, "oids.nim");
	bigEndian32_IzdisrH4sYnsItUtxSkomA_8endians(((void*) ((&result.time))), ((void*) ((&t))));
	nimln_(83, "oids.nim");
	result.fuzz = fuzz_8VX8F8ZpvRGTMF7N4xU39cg;
	nimln_(84, "oids.nim");
	bigEndian32_IzdisrH4sYnsItUtxSkomA_8endians(((void*) ((&result.count))), ((void*) ((&i))));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI64, generatedTime_M1ZAR9c5o7yGRtr8tvZy1KA)(tyObject_Oid_v0fX7UzOqz7toHgI0d87SA oid) {
	NI64 result;
	NI32 tmp;
	NI32 dummy;
	nimfr_("generatedTime", "oids.nim");
	result = (NI64)0;
	tmp = (NI32)0;
	nimln_(89, "oids.nim");
	dummy = oid.time;
	nimln_(90, "oids.nim");
	bigEndian32_IzdisrH4sYnsItUtxSkomA_8endians(((void*) ((&tmp))), ((void*) ((&dummy))));
	nimln_(91, "oids.nim");
	result = fromUnix_C77WZNbbZYep1XVMN2QCfA(((NI64) (tmp)));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_oidsInit000)(void) {
	nimfr_("oids", "oids.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_oidsDatInit000)(void) {
}

