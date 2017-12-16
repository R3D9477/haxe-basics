// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#define INCLUDED_haxe_ui_backend_ScreenBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogButton)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ScreenBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ScreenBase_obj OBJ_;
		ScreenBase_obj();

	public:
		enum { _hx_ClassId = 0x095a7d57 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ScreenBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ScreenBase"); }
		static hx::ObjectPtr< ScreenBase_obj > __new();
		static hx::ObjectPtr< ScreenBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScreenBase","\xbd","\x79","\xf8","\xaf"); }

		 ::haxe::ui::core::Component focus;
		 ::Dynamic options;
		Float width;
		Float get_width();
		::Dynamic get_width_dyn();

		Float height;
		int get_height();
		::Dynamic get_height_dyn();

		Float dpi;
		Float get_dpi();
		::Dynamic get_dpi_dyn();

		::Array< ::Dynamic> _hx___topLevelComponents;
		virtual void addComponent( ::haxe::ui::core::Component component);
		::Dynamic addComponent_dyn();

		virtual void removeComponent( ::haxe::ui::core::Component component);
		::Dynamic removeComponent_dyn();

		virtual  ::haxe::ui::containers::dialogs::Dialog messageDialog(::String message,::String title, ::Dynamic options, ::Dynamic callback);
		::Dynamic messageDialog_dyn();

		virtual  ::haxe::ui::containers::dialogs::Dialog showDialog( ::haxe::ui::core::Component content, ::Dynamic options, ::Dynamic callback);
		::Dynamic showDialog_dyn();

		virtual bool hideDialog( ::haxe::ui::containers::dialogs::Dialog dialog);
		::Dynamic hideDialog_dyn();

		void resizeComponent( ::haxe::ui::core::Component c);
		::Dynamic resizeComponent_dyn();

		 ::hx::widgets::Frame frame;
		 ::hx::widgets::Frame get_frame();
		::Dynamic get_frame_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String t);
		::Dynamic set_title_dyn();

		bool _hasListener;
		void addResizeListener();
		::Dynamic addResizeListener_dyn();

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic handleSetComponentIndex_dyn();

		bool supportsEvent(::String type);
		::Dynamic supportsEvent_dyn();

		void mapEvent(::String type, ::Dynamic listener);
		::Dynamic mapEvent_dyn();

		void unmapEvent(::String type, ::Dynamic listener);
		::Dynamic unmapEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ScreenBase */ 
