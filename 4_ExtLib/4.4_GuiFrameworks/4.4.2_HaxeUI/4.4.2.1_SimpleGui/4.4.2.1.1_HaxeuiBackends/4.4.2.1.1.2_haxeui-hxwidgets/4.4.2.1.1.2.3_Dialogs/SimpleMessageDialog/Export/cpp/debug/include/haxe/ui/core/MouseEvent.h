// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_MouseEvent
#define INCLUDED_haxe_ui_core_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES MouseEvent_obj : public  ::haxe::ui::core::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::core::UIEvent_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();

	public:
		enum { _hx_ClassId = 0x0bf7cc1a };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.MouseEvent"); }
		static hx::ObjectPtr< MouseEvent_obj > __new(::String type);
		static hx::ObjectPtr< MouseEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		static void __boot();
		static ::String MOUSE_MOVE;
		static ::String MOUSE_OVER;
		static ::String MOUSE_OUT;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_UP;
		static ::String MOUSE_WHEEL;
		static ::String CLICK;
		Float screenX;
		Float screenY;
		bool buttonDown;
		Float delta;
		bool touchEvent;
		 ::haxe::ui::core::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_MouseEvent */ 
