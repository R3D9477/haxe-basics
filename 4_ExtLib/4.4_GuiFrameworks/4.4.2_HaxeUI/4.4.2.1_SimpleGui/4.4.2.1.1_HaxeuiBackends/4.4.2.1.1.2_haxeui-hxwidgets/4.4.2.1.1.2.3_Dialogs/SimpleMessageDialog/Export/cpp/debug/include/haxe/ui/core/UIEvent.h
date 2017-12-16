// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_UIEvent
#define INCLUDED_haxe_ui_core_UIEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES UIEvent_obj : public  ::haxe::ui::backend::EventBase_obj
{
	public:
		typedef  ::haxe::ui::backend::EventBase_obj super;
		typedef UIEvent_obj OBJ_;
		UIEvent_obj();

	public:
		enum { _hx_ClassId = 0x27cfab89 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.UIEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.UIEvent"); }
		static hx::ObjectPtr< UIEvent_obj > __new(::String type);
		static hx::ObjectPtr< UIEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("UIEvent","\x26","\xfd","\x9f","\x07"); }

		static void __boot();
		static ::String READY;
		static ::String RESIZE;
		static ::String CHANGE;
		static ::String BEFORE_CHANGE;
		static ::String MOVE;
		::String type;
		 ::haxe::ui::core::Component target;
		 ::Dynamic data;
		virtual  ::haxe::ui::core::UIEvent clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_UIEvent */ 
