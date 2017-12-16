// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_components_VGrid
#define INCLUDED_haxe_ui_components_VGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,components,VGrid)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES VGrid_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef VGrid_obj OBJ_;
		VGrid_obj();

	public:
		enum { _hx_ClassId = 0x6ca63888 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.VGrid")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.VGrid"); }
		static hx::ObjectPtr< VGrid_obj > __new();
		static hx::ObjectPtr< VGrid_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VGrid_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VGrid","\x3c","\xe6","\xba","\xb3"); }

		void createDefaults();

		int _columns;
		int get_columns();
		::Dynamic get_columns_dyn();

		int set_columns(int value);
		::Dynamic set_columns_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_VGrid */ 
