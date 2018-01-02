// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_KeyboardEvent
#define INCLUDED_haxe_ui_core_KeyboardEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,KeyboardEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES KeyboardEvent_obj : public  ::haxe::ui::core::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::core::UIEvent_obj super;
		typedef KeyboardEvent_obj OBJ_;
		KeyboardEvent_obj();

	public:
		enum { _hx_ClassId = 0x0a2a1f5a };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.KeyboardEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.KeyboardEvent"); }
		static hx::ObjectPtr< KeyboardEvent_obj > __new(::String type);
		static hx::ObjectPtr< KeyboardEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("KeyboardEvent","\xd3","\x8d","\x88","\x91"); }

		static void __boot();
		static int KEY_TAB;
		static ::String KEY_DOWN;
		static ::String KEY_UP;
		int keyCode;
		bool shiftKey;
		 ::haxe::ui::core::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_KeyboardEvent */ 
