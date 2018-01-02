// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_StyleParser
#define INCLUDED_haxe_ui_backend_hxwidgets_StyleParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,StyleParser)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES StyleParser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StyleParser_obj OBJ_;
		StyleParser_obj();

	public:
		enum { _hx_ClassId = 0x3644062b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.StyleParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.StyleParser"); }

		hx::ObjectPtr< StyleParser_obj > __new() {
			hx::ObjectPtr< StyleParser_obj > __this = new StyleParser_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StyleParser_obj > __alloc(hx::Ctx *_hx_ctx) {
			StyleParser_obj *__this = (StyleParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StyleParser_obj), false, "haxe.ui.backend.hxwidgets.StyleParser"));
			*(void **)__this = StyleParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StyleParser","\xd0","\xc8","\x52","\x49"); }

		static int parseStyleString(::String styleString);
		static ::Dynamic parseStyleString_dyn();

		static int parseStyle(::String style);
		static ::Dynamic parseStyle_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_StyleParser */ 
