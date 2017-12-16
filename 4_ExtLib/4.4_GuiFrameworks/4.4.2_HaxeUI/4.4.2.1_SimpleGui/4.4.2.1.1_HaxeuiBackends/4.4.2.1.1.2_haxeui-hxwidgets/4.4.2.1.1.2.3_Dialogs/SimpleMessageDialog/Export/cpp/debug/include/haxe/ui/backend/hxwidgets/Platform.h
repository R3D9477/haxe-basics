// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_Platform
#define INCLUDED_haxe_ui_backend_hxwidgets_Platform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,Platform)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES Platform_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Platform_obj OBJ_;
		Platform_obj();

	public:
		enum { _hx_ClassId = 0x3b888dfc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.Platform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.Platform"); }

		hx::ObjectPtr< Platform_obj > __new() {
			hx::ObjectPtr< Platform_obj > __this = new Platform_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Platform_obj > __alloc(hx::Ctx *_hx_ctx) {
			Platform_obj *__this = (Platform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Platform_obj), false, "haxe.ui.backend.hxwidgets.Platform"));
			*(void **)__this = Platform_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Platform_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Platform","\xd3","\x6e","\xab","\x41"); }

		static ::String _name;
		static ::String name;
		static ::String get_name();
		static ::Dynamic get_name_dyn();

		static bool isWindows;
		static bool get_isWindows();
		static ::Dynamic get_isWindows_dyn();

		static bool isMac;
		static bool get_isMac();
		static ::Dynamic get_isMac_dyn();

		static bool isLinux;
		static bool get_isLinux();
		static ::Dynamic get_isLinux_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_Platform */ 
