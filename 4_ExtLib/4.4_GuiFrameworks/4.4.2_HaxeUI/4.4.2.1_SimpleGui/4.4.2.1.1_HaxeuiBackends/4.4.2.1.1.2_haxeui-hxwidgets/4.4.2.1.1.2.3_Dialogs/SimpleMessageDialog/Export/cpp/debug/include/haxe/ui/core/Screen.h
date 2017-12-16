// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_Screen
#define INCLUDED_haxe_ui_core_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogButton)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogOptions)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Screen_obj : public  ::haxe::ui::backend::ScreenBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ScreenBase_obj super;
		typedef Screen_obj OBJ_;
		Screen_obj();

	public:
		enum { _hx_ClassId = 0x772cb325 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Screen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Screen"); }
		static hx::ObjectPtr< Screen_obj > __new();
		static hx::ObjectPtr< Screen_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Screen","\x8c","\xaf","\xf1","\x7b"); }

		static  ::haxe::ui::core::Screen _instance;
		static  ::haxe::ui::core::Screen get_instance();
		static ::Dynamic get_instance_dyn();

		static  ::haxe::ui::containers::dialogs::DialogOptions createDialogOptions( ::Dynamic options);
		static ::Dynamic createDialogOptions_dyn();

		::Array< ::Dynamic> rootComponents;
		 ::haxe::ds::ObjectMap _dialogs;
		 ::haxe::ui::util::EventMap _eventMap;
		void addComponent( ::haxe::ui::core::Component component);

		void removeComponent( ::haxe::ui::core::Component component);

		void setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		void refreshStyleRootComponents();
		::Dynamic refreshStyleRootComponents_dyn();

		void _refreshStyleComponent( ::haxe::ui::core::Component component);
		::Dynamic _refreshStyleComponent_dyn();

		void _onRootComponentResize( ::haxe::ui::core::UIEvent e);
		::Dynamic _onRootComponentResize_dyn();

		 ::haxe::ui::containers::dialogs::Dialog messageDialog(::String message,::String title, ::Dynamic options, ::Dynamic callback);

		 ::haxe::ui::containers::dialogs::Dialog showDialog( ::haxe::ui::core::Component content, ::Dynamic options, ::Dynamic callback);

		bool hideDialog( ::haxe::ui::containers::dialogs::Dialog dialog);

		void centerDialog( ::haxe::ui::containers::dialogs::Dialog dialog);
		::Dynamic centerDialog_dyn();

		void registerEvent(::String type, ::Dynamic listener);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void _onMappedEvent( ::haxe::ui::core::UIEvent event);
		::Dynamic _onMappedEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Screen */ 
