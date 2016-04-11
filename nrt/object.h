#ifndef NRT_MONITOR
#define NRT_MONITOR

#include "defs.h"

nrt_obj*     nrt_Object_alloc(nrt_type* type, nrt_size size);
nrt_unit     nrt_Object_init(nrt_obj* obj);
nrt_bool     nrt_Object_equals(nrt_obj* left, nrt_obj* right);
nrt_obj*     nrt_Object_toString(nrt_obj* obj);
nrt_i32      nrt_Object_hashCode(nrt_obj* obj);
nrt_type*    nrt_Object_getType(nrt_obj* obj);
nrt_monitor* nrt_Object_getMonitor(nrt_obj* obj);
nrt_obj*     nrt_Object_clone(nrt_obj* obj);
nrt_unit     nrt_Object_finalize(nrt_obj* obj);

#endif
