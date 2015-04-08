#ifndef TH_ATOMIC_INC
#define TH_ATOMIC_INC

#include "THGeneral.h"

int THAtomicSet(int volatile *a, int newvalue);
int THAtomicGet(int volatile *a);
int THAtomicAdd(int volatile *a, int value);
void THAtomicIncrement(int volatile *a);
int THAtomicDecrement(int volatile *a);
int THAtomicCompareAndSwap(int volatile *a, int oldvalue, int newvalue);

#endif
