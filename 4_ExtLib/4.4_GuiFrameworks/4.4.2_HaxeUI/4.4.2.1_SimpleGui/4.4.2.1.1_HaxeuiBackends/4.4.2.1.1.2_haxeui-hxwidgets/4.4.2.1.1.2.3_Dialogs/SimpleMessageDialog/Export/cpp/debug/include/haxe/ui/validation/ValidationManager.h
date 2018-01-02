// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_validation_ValidationManager
#define INCLUDED_haxe_ui_validation_ValidationManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS3(haxe,ui,validation,ValidationManager)

namespace haxe{
namespace ui{
namespace validation{


class HXCPP_CLASS_ATTRIBUTES ValidationManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ValidationManager_obj OBJ_;
		ValidationManager_obj();

	public:
		enum { _hx_ClassId = 0x21fff201 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validation.ValidationManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.validation.ValidationManager"); }
		static hx::ObjectPtr< ValidationManager_obj > __new();
		static hx::ObjectPtr< ValidationManager_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ValidationManager_obj();

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
		::String __ToString() const { return HX_HCSTRING("ValidationManager","\x14","\x57","\xe0","\x81"); }

		static  ::haxe::ui::validation::ValidationManager instance;
		static  ::haxe::ui::validation::ValidationManager get_instance();
		static ::Dynamic get_instance_dyn();

		bool isValidating;
		bool isPending;
		::Array< ::Dynamic> _queue;
		::Array< ::Dynamic> _displayQueue;
		 ::haxe::ui::util::EventMap _events;
		void registerEvent(::String type, ::Dynamic listener);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::core::UIEvent event);
		::Dynamic dispatch_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void add(::Dynamic object);
		::Dynamic add_dyn();

		void addDisplay( ::haxe::ui::core::Component item);
		::Dynamic addDisplay_dyn();

		void process();
		::Dynamic process_dyn();

		int queueSortFunction(::Dynamic first,::Dynamic second);
		::Dynamic queueSortFunction_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validation

#endif /* INCLUDED_haxe_ui_validation_ValidationManager */ 
