// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_EventMap
#define INCLUDED_haxe_ui_util_EventMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,util,FunctionArray)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES EventMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EventMap_obj OBJ_;
		EventMap_obj();

	public:
		enum { _hx_ClassId = 0x608682fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.EventMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.util.EventMap"); }
		static hx::ObjectPtr< EventMap_obj > __new();
		static hx::ObjectPtr< EventMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EventMap","\xc2","\x42","\x84","\x9a"); }

		 ::haxe::ds::StringMap _map;
		 ::Dynamic keys();
		::Dynamic keys_dyn();

		bool add(::String type, ::Dynamic listener);
		::Dynamic add_dyn();

		bool remove(::String type, ::Dynamic listener);
		::Dynamic remove_dyn();

		void invoke(::String type, ::haxe::ui::core::UIEvent event, ::haxe::ui::core::Component target);
		::Dynamic invoke_dyn();

		int listenerCount(::String type);
		::Dynamic listenerCount_dyn();

		 ::haxe::ui::util::FunctionArray listeners(::String type);
		::Dynamic listeners_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_EventMap */ 
