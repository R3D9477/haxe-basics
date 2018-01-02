// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StaticBox
#define INCLUDED_hx_widgets_StaticBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_77d84a928fbcf10b
#define INCLUDED_77d84a928fbcf10b
#include "wx/statbox.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticBox)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticBox_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef StaticBox_obj OBJ_;
		StaticBox_obj();

	public:
		enum { _hx_ClassId = 0x4127391e };

		void __construct( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticBox"); }
		static hx::ObjectPtr< StaticBox_obj > __new( ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id);
		static hx::ObjectPtr< StaticBox_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String title,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticBox_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticBox","\xdd","\x19","\xde","\x28"); }

		::cpp::Pointer<  wxStaticBox > staticBoxRef;
		::cpp::Pointer<  wxStaticBox > get_staticBoxRef();
		::Dynamic get_staticBoxRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticBox */ 
