// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_BufferedDC
#define INCLUDED_hx_widgets_BufferedDC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_MemoryDC
#include <hx/widgets/MemoryDC.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,BufferedDC)
HX_DECLARE_CLASS2(hx,widgets,DC)
HX_DECLARE_CLASS2(hx,widgets,MemoryDC)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES BufferedDC_obj : public  ::hx::widgets::MemoryDC_obj
{
	public:
		typedef  ::hx::widgets::MemoryDC_obj super;
		typedef BufferedDC_obj OBJ_;
		BufferedDC_obj();

	public:
		enum { _hx_ClassId = 0x0f70b079 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.BufferedDC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.BufferedDC"); }
		static hx::ObjectPtr< BufferedDC_obj > __new();
		static hx::ObjectPtr< BufferedDC_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BufferedDC_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BufferedDC","\xbe","\xea","\xf6","\x9f"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_BufferedDC */ 
