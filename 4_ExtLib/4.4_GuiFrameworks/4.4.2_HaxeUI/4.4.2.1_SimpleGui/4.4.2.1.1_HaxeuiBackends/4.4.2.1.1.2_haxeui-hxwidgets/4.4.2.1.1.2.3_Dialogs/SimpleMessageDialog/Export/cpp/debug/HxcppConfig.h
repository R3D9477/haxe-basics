#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(_FILE_OFFSET_BITS) && !defined(NO__FILE_OFFSET_BITS)
#define _FILE_OFFSET_BITS 64
#endif

#if !defined(WXUSINGDLL) && !defined(NO_WXUSINGDLL)
#define WXUSINGDLL 
#endif

#if !defined(__WXGTK__) && !defined(NO___WXGTK__)
#define __WXGTK__ 
#endif

#if !defined(HX_LINUX) && !defined(NO_HX_LINUX)
#define HX_LINUX 
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 331
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#include <hxcpp.h>

#endif
