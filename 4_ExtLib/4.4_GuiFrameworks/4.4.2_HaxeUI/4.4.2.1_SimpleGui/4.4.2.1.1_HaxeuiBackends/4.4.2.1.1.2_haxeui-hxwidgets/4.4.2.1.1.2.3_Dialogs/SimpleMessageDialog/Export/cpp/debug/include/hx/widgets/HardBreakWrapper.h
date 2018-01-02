// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_HardBreakWrapper
#define INCLUDED_hx_widgets_HardBreakWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ea27b635ecb75858
#define INCLUDED_ea27b635ecb75858
#include "custom/hardbreakwrapper.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,HardBreakWrapper)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES HardBreakWrapper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HardBreakWrapper_obj OBJ_;
		HardBreakWrapper_obj();

	public:
		enum { _hx_ClassId = 0x61c6c4de };

		void __construct( ::hx::widgets::Window win,::String text,int maxWidth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.HardBreakWrapper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.HardBreakWrapper"); }
		static hx::ObjectPtr< HardBreakWrapper_obj > __new( ::hx::widgets::Window win,::String text,int maxWidth);
		static hx::ObjectPtr< HardBreakWrapper_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window win,::String text,int maxWidth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HardBreakWrapper_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HardBreakWrapper","\xff","\x09","\x4f","\x4d"); }

		::cpp::Pointer<  wxHardBreakWrapper > _ref;
		::String wrapped;
		::String get_wrapped();
		::Dynamic get_wrapped_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_HardBreakWrapper */ 
