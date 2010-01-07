#define IN_STG_CODE 0
#include "Rts.h"
#include "Stg.h"
#ifdef __cplusplus
extern "C" {
#endif
 
extern StgClosure HaskellConvert_zdfconvertzuhszuawO_closure;
HsFloat convert_hs(HsFloat a1, HsFloat a2)
{
Capability *cap;
HaskellObj ret;
HsFloat cret;
cap = rts_lock();
cap=rts_evalIO(cap,rts_apply(cap,(HaskellObj)runNonIO_closure,rts_apply(cap,rts_apply(cap,&HaskellConvert_zdfconvertzuhszuawO_closure,rts_mkFloat(cap,a1)),rts_mkFloat(cap,a2))) ,&ret);
rts_checkSchedStatus("convert_hs",cap);
cret=rts_getFloat(ret);
rts_unlock(cap);
return cret;
}
static void stginit_export_HaskellConvert_zdfconvertzuhszuawO() __attribute__((constructor));
static void stginit_export_HaskellConvert_zdfconvertzuhszuawO()
{getStablePtr((StgPtr) &HaskellConvert_zdfconvertzuhszuawO_closure);}
#ifdef __cplusplus
}
#endif

