#include <mex.h>
MEXFUNCTION_LINKAGE
void mexfilerequiredapiversion(unsigned int* built_by_rel, unsigned int* target_api_ver)
{
  *built_by_rel = 0x2016b;
  *target_api_ver = MX_TARGET_API_VER;
} 

