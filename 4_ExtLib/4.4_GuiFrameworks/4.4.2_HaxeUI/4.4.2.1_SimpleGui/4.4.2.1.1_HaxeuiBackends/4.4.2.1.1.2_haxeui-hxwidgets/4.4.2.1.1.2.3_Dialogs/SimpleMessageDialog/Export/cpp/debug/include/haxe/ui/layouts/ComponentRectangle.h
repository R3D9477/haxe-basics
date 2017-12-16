// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#define INCLUDED_haxe_ui_layouts_ComponentRectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_util_Rectangle
#include <haxe/ui/util/Rectangle.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,layouts,ComponentRectangle)
HX_DECLARE_CLASS3(haxe,ui,util,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES ComponentRectangle_obj : public  ::haxe::ui::util::Rectangle_obj
{
	public:
		typedef  ::haxe::ui::util::Rectangle_obj super;
		typedef ComponentRectangle_obj OBJ_;
		ComponentRectangle_obj();

	public:
		enum { _hx_ClassId = 0x1e6fd861 };

		void __construct( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.ComponentRectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.ComponentRectangle"); }
		static hx::ObjectPtr< ComponentRectangle_obj > __new( ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		static hx::ObjectPtr< ComponentRectangle_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic left, ::Dynamic top, ::Dynamic width, ::Dynamic height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentRectangle_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComponentRectangle","\xd2","\x67","\x7a","\x24"); }

		 ::haxe::ui::core::Component component;
		void apply();
		::Dynamic apply_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_ComponentRectangle */ 
