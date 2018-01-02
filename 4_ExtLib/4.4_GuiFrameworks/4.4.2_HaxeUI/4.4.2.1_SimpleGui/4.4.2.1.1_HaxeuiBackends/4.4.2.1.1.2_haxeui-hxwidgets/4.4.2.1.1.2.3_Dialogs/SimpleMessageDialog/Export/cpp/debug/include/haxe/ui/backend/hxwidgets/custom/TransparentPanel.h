// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentPanel
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentPanel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Panel
#include <hx/widgets/Panel.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,TransparentPanel)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Panel)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{


class HXCPP_CLASS_ATTRIBUTES TransparentPanel_obj : public  ::hx::widgets::Panel_obj
{
	public:
		typedef  ::hx::widgets::Panel_obj super;
		typedef TransparentPanel_obj OBJ_;
		TransparentPanel_obj();

	public:
		enum { _hx_ClassId = 0x02bb89b0 };

		void __construct( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.TransparentPanel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.TransparentPanel"); }
		static hx::ObjectPtr< TransparentPanel_obj > __new( ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< TransparentPanel_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransparentPanel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TransparentPanel","\x72","\x52","\x48","\x47"); }

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

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentPanel */ 
