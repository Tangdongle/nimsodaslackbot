/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/ryan/.choosenim/toolchains/nim-0.18.0/lib -o /home/ryan/dev/slackbot/src/nimcache/slackapi_slackapi.o /home/ryan/dev/slackbot/src/nimcache/slackapi_slackapi.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

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
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyTuple_ddl5jobGD9cEh0GxO7QGFQA tyTuple_ddl5jobGD9cEh0GxO7QGFQA;
typedef struct tyObject_RTMConnection_9awtt4aGm78E79cEb4b9bFs4w tyObject_RTMConnection_9awtt4aGm78E79cEb4b9bFs4w;
typedef struct tyObject_HttpClientBasecolonObjectType__KIIBrzVNL0pefbQL8QOD6g tyObject_HttpClientBasecolonObjectType__KIIBrzVNL0pefbQL8QOD6g;
typedef struct tyObject_MultipartDatacolonObjectType__pa59bn7R9cBmjUm9clF5koL7g tyObject_MultipartDatacolonObjectType__pa59bn7R9cBmjUm9clF5koL7g;
typedef struct tyObject_AsyncWebSocketObj_FO7G9bZCP6FlKF64Vby7eGw tyObject_AsyncWebSocketObj_FO7G9bZCP6FlKF64Vby7eGw;
typedef struct tyObject_SlackUser_J2AkaUokBr316VD9cYGvAYA tyObject_SlackUser_J2AkaUokBr316VD9cYGvAYA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ;
typedef struct tyObject_Uri_j49bukNPrq747O1GRd4Ng9bQ tyObject_Uri_j49bukNPrq747O1GRd4Ng9bQ;
typedef struct tyObject_HttpHeaderscolonObjectType__GM611pWlOrQ7hvMPcuAACA tyObject_HttpHeaderscolonObjectType__GM611pWlOrQ7hvMPcuAACA;
typedef struct tyObject_ProxycolonObjectType__CigKkL8U2DnJdbYRi9aI9aoQ tyObject_ProxycolonObjectType__CigKkL8U2DnJdbYRi9aI9aoQ;
typedef struct tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w;
typedef struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct RootObj RootObj;
typedef struct tyObject_AsyncSocketDesc_D7quBEmo0QGfBsms9bXpWfg tyObject_AsyncSocketDesc_D7quBEmo0QGfBsms9bXpWfg;
typedef struct tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw;
typedef struct tyObject_Table_LLQadDAXEvd71UDdEc3lDA tyObject_Table_LLQadDAXEvd71UDdEc3lDA;
typedef struct tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ;
typedef struct tySequence_8Np6tlClE5az1CyqZdN19bQ tySequence_8Np6tlClE5az1CyqZdN19bQ;
typedef struct tyObject_SslContextExtraInternalcolonObjectType__QnsPmxexBDpqB7otv3E4Sw tyObject_SslContextExtraInternalcolonObjectType__QnsPmxexBDpqB7otv3E4Sw;
typedef struct tySequence_JiteSJxrvz63iP2o9bcn2Sg tySequence_JiteSJxrvz63iP2o9bcn2Sg;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyTuple_UV3llMMYFckfui8YMBuUZA tyTuple_UV3llMMYFckfui8YMBuUZA;
typedef struct tyTuple_g1w83cyyBYiVU9c8WEJWnjQ tyTuple_g1w83cyyBYiVU9c8WEJWnjQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_RTMConnection_9awtt4aGm78E79cEb4b9bFs4w {
NimStringDesc* token;
tyObject_HttpClientBasecolonObjectType__KIIBrzVNL0pefbQL8QOD6g* client;
tyObject_MultipartDatacolonObjectType__pa59bn7R9cBmjUm9clF5koL7g* data;
NU16 port;
NimStringDesc* wsUrl;
NU msgId;
tyObject_AsyncWebSocketObj_FO7G9bZCP6FlKF64Vby7eGw* sock;
};
struct tyObject_SlackUser_J2AkaUokBr316VD9cYGvAYA {
NimStringDesc* id;
NimStringDesc* name;
};
struct tyTuple_ddl5jobGD9cEh0GxO7QGFQA {
tyObject_RTMConnection_9awtt4aGm78E79cEb4b9bFs4w Field0;
tyObject_SlackUser_J2AkaUokBr316VD9cYGvAYA Field1;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_Uri_j49bukNPrq747O1GRd4Ng9bQ {
NimStringDesc* scheme;
NimStringDesc* username;
NimStringDesc* password;
NimStringDesc* hostname;
NimStringDesc* port;
NimStringDesc* path;
NimStringDesc* query;
NimStringDesc* anchor;
NIM_BOOL opaque;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NI64 total, NI64 progress, NI64 speed, void* ClE_0);
void* ClE_0;
} tyProc_mi0JpXKya87ACPD32j5pow;
struct tyObject_HttpClientBasecolonObjectType__KIIBrzVNL0pefbQL8QOD6g {
tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ* socket;
NIM_BOOL connected;
tyObject_Uri_j49bukNPrq747O1GRd4Ng9bQ currentURL;
tyObject_HttpHeaderscolonObjectType__GM611pWlOrQ7hvMPcuAACA* headers;
NI maxRedirects;
NimStringDesc* userAgent;
NI timeout;
tyObject_ProxycolonObjectType__CigKkL8U2DnJdbYRi9aI9aoQ* proxy;
tyProc_mi0JpXKya87ACPD32j5pow onProgressChanged;
tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w* sslContext;
NI64 contentTotal;
NI64 contentProgress;
NI64 oneSecondProgress;
NF lastProgressReport;
tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* bodyStream;
NIM_BOOL getBody;
};
struct tyObject_MultipartDatacolonObjectType__pa59bn7R9cBmjUm9clF5koL7g {
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* content;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_SocketKind_LVqgZYstYjAJSuADJ9bp5XA;
struct tyObject_AsyncWebSocketObj_FO7G9bZCP6FlKF64Vby7eGw {
  RootObj Sup;
tyObject_AsyncSocketDesc_D7quBEmo0QGfBsms9bXpWfg* sock;
NimStringDesc* protocol;
tyEnum_SocketKind_LVqgZYstYjAJSuADJ9bp5XA kind;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
typedef NIM_CHAR tyArray_QQGLPNVVwLhYjkngqAxXQQ[4001];
typedef NU8 tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg;
struct tyObject_SocketImpl_aIhANOOoETolVz9cccNO9cRQ {
int fd;
NIM_BOOL isBuffered;
union{
struct {tyArray_QQGLPNVVwLhYjkngqAxXQQ buffer;
NI currPos;
NI bufLen;
} S1;
} isBufferedU;
NIM_BOOL isSsl;
union{
struct {tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw* sslHandle;
tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w* sslContext;
NIM_BOOL sslNoHandshake;
NIM_BOOL sslHasPeekChar;
NIM_CHAR sslPeekChar;
} S1;
} isSslU;
NI32 lastError;
tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain;
tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType;
tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol;
};
struct tyObject_HttpHeaderscolonObjectType__GM611pWlOrQ7hvMPcuAACA {
tyObject_Table_LLQadDAXEvd71UDdEc3lDA* table;
};
struct tyObject_ProxycolonObjectType__CigKkL8U2DnJdbYRi9aI9aoQ {
tyObject_Uri_j49bukNPrq747O1GRd4Ng9bQ url;
NimStringDesc* auth;
};
struct tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ {
tySequence_8Np6tlClE5az1CyqZdN19bQ* data;
NI counter;
};
struct tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w {
tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw* context;
tyObject_HashSet_J1RbOJyRcRl1E5zDK6YKcQ referencedData;
tyObject_SslContextExtraInternalcolonObjectType__QnsPmxexBDpqB7otv3E4Sw* extraInternal;
};
typedef N_NIMCALL_PTR(void, tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc_KjFcmLOhf4VQvVcyLJWXZw) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(void, tyProc_jlOYFw9cHausuCbPoWx2iiA) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s);
typedef N_NIMCALL_PTR(NI, tyProc_tjaJtoUzLe1BMUbItlcGhQ) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc_b9bsIuILxTLVZHPvJBW187A) (tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj_RShkcoDOPnoCVhtpN1hDPQ {
  RootObj Sup;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q closeImpl;
tyProc_KjFcmLOhf4VQvVcyLJWXZw atEndImpl;
tyProc_jlOYFw9cHausuCbPoWx2iiA setPositionImpl;
tyProc_Xzm85qBLb9cf9cu8VOfAr8PQ getPositionImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ readDataImpl;
tyProc_tjaJtoUzLe1BMUbItlcGhQ peekDataImpl;
tyProc_b9bsIuILxTLVZHPvJBW187A writeDataImpl;
tyProc_cnkJEp9bna8U6yi9aVW9cAJ0Q flushImpl;
};
struct tyObject_AsyncSocketDesc_D7quBEmo0QGfBsms9bXpWfg {
int fd;
NIM_BOOL closed;
NIM_BOOL isBuffered;
union{
struct {tyArray_QQGLPNVVwLhYjkngqAxXQQ buffer;
NI currPos;
NI bufLen;
} S1;
} isBufferedU;
NIM_BOOL isSsl;
union{
struct {tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw* sslHandle;
tyObject_SslContextcolonObjectType__nNdejAl9bbVbX7sP6RJ4h0w* sslContext;
tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw* bioIn;
tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw* bioOut;
} S1;
} isSslU;
tyEnum_Domain_Q79bEtFARvq0ekDNtvj3Vqg domain;
tyEnum_SockType_NQT1bItGG2X9byGdrWX7ujw sockType;
tyEnum_Protocol_dqJ1OqRGclxIMMdSLRzzXg protocol;
};
struct tyObject_SslStruct_hZKic6WnTBMq6Usbg49bnhw {
char dummy;
};
struct tyObject_Table_LLQadDAXEvd71UDdEc3lDA {
tySequence_JiteSJxrvz63iP2o9bcn2Sg* data;
NI counter;
};
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef struct {
N_NIMCALL_PTR(NimStringDesc*, ClP_0) (NimStringDesc* identity, void* ClE_0);
void* ClE_0;
} tyProc_lRW9cfxqfm1ql4gkxfLReYg;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* hint, tyTuple_UV3llMMYFckfui8YMBuUZA* Result, void* ClE_0);
void* ClE_0;
} tyProc_nzIUHFubO43GG203VFo9b7A;
struct tyObject_SslContextExtraInternalcolonObjectType__QnsPmxexBDpqB7otv3E4Sw {
  RootObj Sup;
tyProc_lRW9cfxqfm1ql4gkxfLReYg serverGetPskFunc;
tyProc_nzIUHFubO43GG203VFo9b7A clientGetPskFunc;
};
struct tyTuple_g1w83cyyBYiVU9c8WEJWnjQ {
NI Field0;
NimStringDesc* Field1;
tySequence_sM4lkSb7zS6F7OVMvW9cffQ* Field2;
};
struct tyTuple_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_8Np6tlClE5az1CyqZdN19bQ {
  TGenericSeq Sup;
  tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ data[SEQ_DECL_SIZE];
};
struct tySequence_JiteSJxrvz63iP2o9bcn2Sg {
  TGenericSeq Sup;
  tyTuple_g1w83cyyBYiVU9c8WEJWnjQ data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getTokenFromConfig_Rb7RDMRaSu882c6f8lhg2w)(void);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, connectToRTM_0cvWcDie8qRvY89a0hv072g)(NimStringDesc* token, NU16 port, tyTuple_ddl5jobGD9cEh0GxO7QGFQA* Result);
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_3)(void);
N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_4)(void);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
NimStringDesc* token_Pnci4K09bKVQlARCN4rXxuA;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NU16 port_OScNoICuvN3Mmrew3IOAbg;
tyObject_RTMConnection_9awtt4aGm78E79cEb4b9bFs4w rtmConnection_ZV1Avzvy1hXeUAwhfScaYw;
extern TNimType NTI_9awtt4aGm78E79cEb4b9bFs4w_;
tyObject_SlackUser_J2AkaUokBr316VD9cYGvAYA slackUser_27EYMDc4eViMnvZcretcOw;
extern TNimType NTI_J2AkaUokBr316VD9cYGvAYA_;
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_2)(void) {
	nimGCvisit((void*)token_Pnci4K09bKVQlARCN4rXxuA, 0);
}

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

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(398, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(398, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_3)(void) {
	nimGCvisit((void*)rtmConnection_ZV1Avzvy1hXeUAwhfScaYw.token, 0);
	nimGCvisit((void*)rtmConnection_ZV1Avzvy1hXeUAwhfScaYw.client, 0);
	nimGCvisit((void*)rtmConnection_ZV1Avzvy1hXeUAwhfScaYw.data, 0);
	nimGCvisit((void*)rtmConnection_ZV1Avzvy1hXeUAwhfScaYw.wsUrl, 0);
	nimGCvisit((void*)rtmConnection_ZV1Avzvy1hXeUAwhfScaYw.sock, 0);
}
static N_NIMCALL(void, TM_nLCwlrkzS9bmrmKvf4ZIWAw_4)(void) {
	nimGCvisit((void*)slackUser_27EYMDc4eViMnvZcretcOw.id, 0);
	nimGCvisit((void*)slackUser_27EYMDc4eViMnvZcretcOw.name, 0);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, slackapi_slackapiInit000)(void) {
	tyTuple_ddl5jobGD9cEh0GxO7QGFQA T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	nimfr_("slackapi", "slackapi.nim");
nimRegisterGlobalMarker(TM_nLCwlrkzS9bmrmKvf4ZIWAw_2);
nimRegisterGlobalMarker(TM_nLCwlrkzS9bmrmKvf4ZIWAw_3);
nimRegisterGlobalMarker(TM_nLCwlrkzS9bmrmKvf4ZIWAw_4);
	nimln_(48, "slackapi.nim");
	asgnRefNoCycle((void**) (&token_Pnci4K09bKVQlARCN4rXxuA), getTokenFromConfig_Rb7RDMRaSu882c6f8lhg2w());
	nimln_(49, "slackapi.nim");
	port_OScNoICuvN3Mmrew3IOAbg = ((NU16) 443);
	nimln_(51, "slackapi.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	connectToRTM_0cvWcDie8qRvY89a0hv072g(token_Pnci4K09bKVQlARCN4rXxuA, port_OScNoICuvN3Mmrew3IOAbg, (&T1_));
	genericAssign((void*)(&rtmConnection_ZV1Avzvy1hXeUAwhfScaYw), (void*)(&T1_.Field0), (&NTI_9awtt4aGm78E79cEb4b9bFs4w_));
	T2_ = (NimStringDesc*)0;
	T2_ = slackUser_27EYMDc4eViMnvZcretcOw.id; slackUser_27EYMDc4eViMnvZcretcOw.id = copyStringRC1(T1_.Field1.id);
	if (T2_) nimGCunrefNoCycle(T2_);
	T3_ = (NimStringDesc*)0;
	T3_ = slackUser_27EYMDc4eViMnvZcretcOw.name; slackUser_27EYMDc4eViMnvZcretcOw.name = copyStringRC1(T1_.Field1.name);
	if (T3_) nimGCunrefNoCycle(T3_);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, slackapi_slackapiDatInit000)(void) {
}

