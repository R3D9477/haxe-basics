// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_styles_CssClass
#define INCLUDED_haxe_ui_styles_CssClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c723d29dfcf72f54_46_new)
HX_DECLARE_CLASS3(haxe,ui,styles,CssClass)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES CssClass_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CssClass_obj OBJ_;
		CssClass_obj();

	public:
		enum { _hx_ClassId = 0x2cdb8671 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.CssClass")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.CssClass"); }

		hx::ObjectPtr< CssClass_obj > __new() {
			hx::ObjectPtr< CssClass_obj > __this = new CssClass_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CssClass_obj > __alloc(hx::Ctx *_hx_ctx) {
			CssClass_obj *__this = (CssClass_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CssClass_obj), true, "haxe.ui.styles.CssClass"));
			*(void **)__this = CssClass_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c723d29dfcf72f54_46_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CssClass_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CssClass","\x95","\x9d","\xe8","\x7c"); }

		 ::haxe::ui::styles::CssClass parent;
		::String node;
		::String className;
		::String pseudoClass;
		::String id;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_CssClass */ 
