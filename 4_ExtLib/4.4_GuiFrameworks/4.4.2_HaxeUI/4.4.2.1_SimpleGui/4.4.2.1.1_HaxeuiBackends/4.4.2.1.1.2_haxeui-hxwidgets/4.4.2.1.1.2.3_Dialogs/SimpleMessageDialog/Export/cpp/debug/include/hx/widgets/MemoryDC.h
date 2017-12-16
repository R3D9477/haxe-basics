// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MemoryDC
#define INCLUDED_hx_widgets_MemoryDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DC
#include <hx/widgets/DC.h>
#endif
#ifndef INCLUDED_fe3f80168f23605f
#define INCLUDED_fe3f80168f23605f
#include "wx/dcmemory.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,MemoryDC)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MemoryDC_obj : public  ::hx::widgets::DC_obj
{
	public:
		typedef  ::hx::widgets::DC_obj super;
		typedef MemoryDC_obj OBJ_;
		MemoryDC_obj();

	public:
		enum { _hx_ClassId = 0x388295db };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MemoryDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MemoryDC"); }
		static hx::ObjectPtr< MemoryDC_obj > __new();
		static hx::ObjectPtr< MemoryDC_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MemoryDC_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MemoryDC","\xe0","\x44","\x3b","\x66"); }

		::cpp::Pointer<  wxMemoryDC > memoryDCRef;
		::cpp::Pointer<  wxMemoryDC > get_memoryDCRef();
		::Dynamic get_memoryDCRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MemoryDC */ 
