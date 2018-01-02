// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_Backend
#define INCLUDED_haxe_ui_Backend

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_BackendBase
#include <haxe/ui/backend/BackendBase.h>
#endif
HX_DECLARE_CLASS2(haxe,ui,Backend)
HX_DECLARE_CLASS3(haxe,ui,backend,BackendBase)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Backend_obj : public  ::haxe::ui::backend::BackendBase_obj
{
	public:
		typedef  ::haxe::ui::backend::BackendBase_obj super;
		typedef Backend_obj OBJ_;
		Backend_obj();

	public:
		enum { _hx_ClassId = 0x50c7a9ba };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.Backend")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.Backend"); }

		hx::ObjectPtr< Backend_obj > __new() {
			hx::ObjectPtr< Backend_obj > __this = new Backend_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Backend_obj > __alloc(hx::Ctx *_hx_ctx) {
			Backend_obj *__this = (Backend_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Backend_obj), false, "haxe.ui.Backend"));
			*(void **)__this = Backend_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Backend_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Backend","\xf4","\xe3","\xd8","\xc8"); }

		static ::String id;
		static ::String get_id();
		static ::Dynamic get_id_dyn();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_Backend */ 
