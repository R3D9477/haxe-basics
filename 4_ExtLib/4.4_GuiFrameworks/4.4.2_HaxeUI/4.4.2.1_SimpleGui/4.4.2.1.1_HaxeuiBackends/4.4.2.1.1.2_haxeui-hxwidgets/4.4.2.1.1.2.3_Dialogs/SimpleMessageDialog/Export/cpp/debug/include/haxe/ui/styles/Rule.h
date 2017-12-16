// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_Rule
#define INCLUDED_haxe_ui_styles_Rule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_35b18640b2b9e87d_11_new)
HX_DECLARE_CLASS3(haxe,ui,styles,CssClass)
HX_DECLARE_CLASS3(haxe,ui,styles,Rule)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Rule_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Rule_obj OBJ_;
		Rule_obj();

	public:
		enum { _hx_ClassId = 0x4c6aeff8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.Rule")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.Rule"); }

		hx::ObjectPtr< Rule_obj > __new() {
			hx::ObjectPtr< Rule_obj > __this = new Rule_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Rule_obj > __alloc(hx::Ctx *_hx_ctx) {
			Rule_obj *__this = (Rule_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Rule_obj), true, "haxe.ui.styles.Rule"));
			*(void **)__this = Rule_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_35b18640b2b9e87d_11_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rule_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rule","\x1c","\xa5","\x8c","\x36"); }

		int id;
		 ::haxe::ui::styles::CssClass c;
		int priority;
		 ::haxe::ui::styles::Style s;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Rule */ 
