// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_themes_Theme
#define INCLUDED_haxe_ui_themes_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_78d817c3c3f18acf_8_new)
HX_DECLARE_CLASS3(haxe,ui,themes,Theme)

namespace haxe{
namespace ui{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES Theme_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Theme_obj OBJ_;
		Theme_obj();

	public:
		enum { _hx_ClassId = 0x1e97ac9d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.themes.Theme")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.themes.Theme"); }

		hx::ObjectPtr< Theme_obj > __new() {
			hx::ObjectPtr< Theme_obj > __this = new Theme_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Theme_obj > __alloc(hx::Ctx *_hx_ctx) {
			Theme_obj *__this = (Theme_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Theme_obj), true, "haxe.ui.themes.Theme"));
			*(void **)__this = Theme_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_78d817c3c3f18acf_8_new)
HXDLIN(   8)		( ( ::haxe::ui::themes::Theme)(__this) )->styles = ::Array_obj< ::String >::__new(0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Theme","\xe9","\xed","\xb3","\xa2"); }

		::String parent;
		::Array< ::String > styles;
};

} // end namespace haxe
} // end namespace ui
} // end namespace themes

#endif /* INCLUDED_haxe_ui_themes_Theme */ 
