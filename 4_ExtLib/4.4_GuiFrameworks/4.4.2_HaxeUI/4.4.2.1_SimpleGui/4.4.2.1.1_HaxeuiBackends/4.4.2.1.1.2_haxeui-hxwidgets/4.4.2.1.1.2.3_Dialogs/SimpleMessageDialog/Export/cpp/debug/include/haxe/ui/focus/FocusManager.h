// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#define INCLUDED_haxe_ui_focus_FocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,focus,FocusInfo)
HX_DECLARE_CLASS3(haxe,ui,focus,FocusManager)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace focus{


class HXCPP_CLASS_ATTRIBUTES FocusManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FocusManager_obj OBJ_;
		FocusManager_obj();

	public:
		enum { _hx_ClassId = 0x7acae4f3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.focus.FocusManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.focus.FocusManager"); }
		static hx::ObjectPtr< FocusManager_obj > __new();
		static hx::ObjectPtr< FocusManager_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FocusManager_obj();

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
		::String __ToString() const { return HX_HCSTRING("FocusManager","\x95","\xd1","\xa5","\x32"); }

		static  ::haxe::ui::focus::FocusManager _instance;
		static  ::haxe::ui::focus::FocusManager instance;
		static  ::haxe::ui::focus::FocusManager get_instance();
		static ::Dynamic get_instance_dyn();

		::Array< ::Dynamic> _views;
		 ::haxe::ds::ObjectMap _focusInfo;
		void pushView( ::haxe::ui::core::Component component);
		::Dynamic pushView_dyn();

		void popView();
		::Dynamic popView_dyn();

		 ::haxe::ui::focus::FocusInfo focusInfo;
		 ::haxe::ui::focus::FocusInfo get_focusInfo();
		::Dynamic get_focusInfo_dyn();

		::Dynamic get_focus();
		::Dynamic get_focus_dyn();

		::Dynamic set_focus(::Dynamic value);
		::Dynamic set_focus_dyn();

		 ::haxe::ui::core::Component focusNext();
		::Dynamic focusNext_dyn();

		 ::haxe::ui::core::Component focusPrev();
		::Dynamic focusPrev_dyn();

		::Dynamic buildFocusableList( ::haxe::ui::core::Component c,::Array< ::Dynamic> list);
		::Dynamic buildFocusableList_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_FocusManager */ 
