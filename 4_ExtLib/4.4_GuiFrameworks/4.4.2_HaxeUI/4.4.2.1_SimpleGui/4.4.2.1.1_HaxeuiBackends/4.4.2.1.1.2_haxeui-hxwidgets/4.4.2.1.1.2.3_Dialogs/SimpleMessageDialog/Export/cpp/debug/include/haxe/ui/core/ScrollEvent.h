// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_ScrollEvent
#define INCLUDED_haxe_ui_core_ScrollEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,ScrollEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ScrollEvent_obj : public  ::haxe::ui::core::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::core::UIEvent_obj super;
		typedef ScrollEvent_obj OBJ_;
		ScrollEvent_obj();

	public:
		enum { _hx_ClassId = 0x5168fa74 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ScrollEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ScrollEvent"); }
		static hx::ObjectPtr< ScrollEvent_obj > __new(::String type);
		static hx::ObjectPtr< ScrollEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ScrollEvent","\xad","\xa8","\xd4","\xa3"); }

		static void __boot();
		static ::String CHANGE;
		static ::String START;
		static ::String STOP;
		 ::haxe::ui::core::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ScrollEvent */ 
