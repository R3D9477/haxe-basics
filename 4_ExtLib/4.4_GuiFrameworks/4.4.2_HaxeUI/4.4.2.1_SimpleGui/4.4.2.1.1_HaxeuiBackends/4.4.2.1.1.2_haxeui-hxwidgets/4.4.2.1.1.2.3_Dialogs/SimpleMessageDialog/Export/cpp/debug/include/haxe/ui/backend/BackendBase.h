// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_BackendBase
#define INCLUDED_haxe_ui_backend_BackendBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,BackendBase)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES BackendBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BackendBase_obj OBJ_;
		BackendBase_obj();

	public:
		enum { _hx_ClassId = 0x05aa7377 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.BackendBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.BackendBase"); }

		hx::ObjectPtr< BackendBase_obj > __new() {
			hx::ObjectPtr< BackendBase_obj > __this = new BackendBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BackendBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			BackendBase_obj *__this = (BackendBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BackendBase_obj), false, "haxe.ui.backend.BackendBase"));
			*(void **)__this = BackendBase_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackendBase_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BackendBase","\x25","\x02","\x36","\xb4"); }

		static void __boot();
		static ::String id;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_BackendBase */ 
