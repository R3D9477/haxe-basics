// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StaticText
#define INCLUDED_hx_widgets_StaticText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_c782e651b082fbad
#define INCLUDED_c782e651b082fbad
#include "wx/stattext.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticText)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StaticText_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef StaticText_obj OBJ_;
		StaticText_obj();

	public:
		enum { _hx_ClassId = 0x14d08e56 };

		void __construct( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StaticText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.StaticText"); }
		static hx::ObjectPtr< StaticText_obj > __new( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< StaticText_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticText_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticText","\x9b","\xc8","\x56","\xa5"); }

		void wrap(int width);
		::Dynamic wrap_dyn();

		::cpp::Pointer<  wxStaticText > staticTextRef;
		::cpp::Pointer<  wxStaticText > get_staticTextRef();
		::Dynamic get_staticTextRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StaticText */ 
