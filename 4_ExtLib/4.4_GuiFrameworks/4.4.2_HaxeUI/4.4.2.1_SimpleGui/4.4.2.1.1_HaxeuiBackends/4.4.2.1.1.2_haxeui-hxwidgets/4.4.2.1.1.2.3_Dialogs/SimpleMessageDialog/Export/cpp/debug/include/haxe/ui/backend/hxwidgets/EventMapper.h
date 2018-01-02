// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_EventMapper
#define INCLUDED_haxe_ui_backend_hxwidgets_EventMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,EventMapper)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES EventMapper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EventMapper_obj OBJ_;
		EventMapper_obj();

	public:
		enum { _hx_ClassId = 0x579bb7d2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.EventMapper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.EventMapper"); }

		hx::ObjectPtr< EventMapper_obj > __new() {
			hx::ObjectPtr< EventMapper_obj > __this = new EventMapper_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< EventMapper_obj > __alloc(hx::Ctx *_hx_ctx) {
			EventMapper_obj *__this = (EventMapper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventMapper_obj), false, "haxe.ui.backend.hxwidgets.EventMapper"));
			*(void **)__this = EventMapper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventMapper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EventMapper","\x5b","\xb7","\xa1","\xf0"); }

		static void __boot();
		static  ::haxe::ds::StringMap HAXEUI_TO_WX;
		static  ::haxe::ds::IntMap WX_TO_HAXEUI;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_EventMapper */ 
