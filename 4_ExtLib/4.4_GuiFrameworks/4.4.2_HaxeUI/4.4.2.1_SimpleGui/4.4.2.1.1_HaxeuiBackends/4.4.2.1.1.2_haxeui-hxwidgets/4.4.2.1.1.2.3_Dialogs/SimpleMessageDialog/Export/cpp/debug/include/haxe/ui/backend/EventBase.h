// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_EventBase
#define INCLUDED_haxe_ui_backend_EventBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES EventBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EventBase_obj OBJ_;
		EventBase_obj();

	public:
		enum { _hx_ClassId = 0x4b74db99 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.EventBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.EventBase"); }
		static hx::ObjectPtr< EventBase_obj > __new();
		static hx::ObjectPtr< EventBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EventBase","\x2b","\xd1","\xf0","\x91"); }

		void cancel();
		::Dynamic cancel_dyn();

		void postClone( ::haxe::ui::core::UIEvent event);
		::Dynamic postClone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_EventBase */ 
