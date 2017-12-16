// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_TextInputBase
#define INCLUDED_haxe_ui_backend_TextInputBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TextDisplayBase
#include <haxe/ui/backend/TextDisplayBase.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_c6fa3b35afccffa1_9_new)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputBase)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TextInputBase_obj : public  ::haxe::ui::backend::TextDisplayBase_obj
{
	public:
		typedef  ::haxe::ui::backend::TextDisplayBase_obj super;
		typedef TextInputBase_obj OBJ_;
		TextInputBase_obj();

	public:
		enum { _hx_ClassId = 0x621753b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TextInputBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TextInputBase"); }

		hx::ObjectPtr< TextInputBase_obj > __new() {
			hx::ObjectPtr< TextInputBase_obj > __this = new TextInputBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextInputBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextInputBase_obj *__this = (TextInputBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextInputBase_obj), true, "haxe.ui.backend.TextInputBase"));
			*(void **)__this = TextInputBase_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c6fa3b35afccffa1_9_new)
HXDLIN(   9)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextInputBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextInputBase","\xae","\x8a","\xbe","\x07"); }

		bool _password;
		Float _hscrollPos;
		Float _vscrollPos;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TextInputBase */ 
