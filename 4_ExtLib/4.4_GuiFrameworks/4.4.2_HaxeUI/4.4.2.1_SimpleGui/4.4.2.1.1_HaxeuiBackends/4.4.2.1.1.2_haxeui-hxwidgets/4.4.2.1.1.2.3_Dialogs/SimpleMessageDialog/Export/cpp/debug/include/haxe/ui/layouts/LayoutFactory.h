// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#define INCLUDED_haxe_ui_layouts_LayoutFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,LayoutFactory)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES LayoutFactory_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LayoutFactory_obj OBJ_;
		LayoutFactory_obj();

	public:
		enum { _hx_ClassId = 0x7a7cd955 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.layouts.LayoutFactory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.layouts.LayoutFactory"); }

		hx::ObjectPtr< LayoutFactory_obj > __new() {
			hx::ObjectPtr< LayoutFactory_obj > __this = new LayoutFactory_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< LayoutFactory_obj > __alloc(hx::Ctx *_hx_ctx) {
			LayoutFactory_obj *__this = (LayoutFactory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LayoutFactory_obj), false, "haxe.ui.layouts.LayoutFactory"));
			*(void **)__this = LayoutFactory_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayoutFactory_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LayoutFactory","\x20","\x6f","\x72","\xb0"); }

		static  ::haxe::ui::layouts::Layout createFromName(::String name);
		static ::Dynamic createFromName_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_LayoutFactory */ 
