// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticText
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_StaticText
#include <hx/widgets/StaticText.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,TransparentStaticText)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticText)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{


class HXCPP_CLASS_ATTRIBUTES TransparentStaticText_obj : public  ::hx::widgets::StaticText_obj
{
	public:
		typedef  ::hx::widgets::StaticText_obj super;
		typedef TransparentStaticText_obj OBJ_;
		TransparentStaticText_obj();

	public:
		enum { _hx_ClassId = 0x10efc06b };

		void __construct( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.TransparentStaticText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.TransparentStaticText"); }
		static hx::ObjectPtr< TransparentStaticText_obj > __new( ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< TransparentStaticText_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String text,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransparentStaticText_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TransparentStaticText","\x4d","\x3e","\x66","\xa2"); }

		bool _hasDown;
		bool _hasUp;
		void bind(int event, ::Dynamic fn,hx::Null< int >  id);

		void doNothing( ::hx::widgets::Event e);
		::Dynamic doNothing_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticText */ 
