// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_FontData
#define INCLUDED_haxe_ui_backend_FontData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b9cab5f283a2303e_4_new)
HX_DECLARE_CLASS3(haxe,ui,backend,FontData)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES FontData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FontData_obj OBJ_;
		FontData_obj();

	public:
		enum { _hx_ClassId = 0x7e8d38d3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.FontData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.FontData"); }

		hx::ObjectPtr< FontData_obj > __new() {
			hx::ObjectPtr< FontData_obj > __this = new FontData_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FontData_obj > __alloc(hx::Ctx *_hx_ctx) {
			FontData_obj *__this = (FontData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontData_obj), false, "haxe.ui.backend.FontData"));
			*(void **)__this = FontData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b9cab5f283a2303e_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontData_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FontData","\xb9","\x2f","\x93","\x9e"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_FontData */ 
