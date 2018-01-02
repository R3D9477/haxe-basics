// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_ValidationEvent
#define INCLUDED_haxe_ui_core_ValidationEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_UIEvent
#include <haxe/ui/core/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,core,ValidationEvent)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ValidationEvent_obj : public  ::haxe::ui::core::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::core::UIEvent_obj super;
		typedef ValidationEvent_obj OBJ_;
		ValidationEvent_obj();

	public:
		enum { _hx_ClassId = 0x7fafe798 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ValidationEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ValidationEvent"); }
		static hx::ObjectPtr< ValidationEvent_obj > __new(::String type);
		static hx::ObjectPtr< ValidationEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ValidationEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ValidationEvent","\x01","\x45","\x1d","\x7f"); }

		static void __boot();
		static ::String START;
		static ::String STOP;
		 ::haxe::ui::core::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ValidationEvent */ 
