// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewDataSource
#define INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_HxWidgetsBehaviour
#include <haxe/ui/backend/hxwidgets/behaviours/HxWidgetsBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,HxWidgetsBehaviour)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,behaviours,ListViewDataSource)
HX_DECLARE_CLASS3(haxe,ui,core,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES ListViewDataSource_obj : public  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj
{
	public:
		typedef  ::haxe::ui::backend::hxwidgets::behaviours::HxWidgetsBehaviour_obj super;
		typedef ListViewDataSource_obj OBJ_;
		ListViewDataSource_obj();

	public:
		enum { _hx_ClassId = 0x4ecbd763 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.behaviours.ListViewDataSource"); }
		static hx::ObjectPtr< ListViewDataSource_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< ListViewDataSource_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListViewDataSource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListViewDataSource","\x88","\xfa","\xee","\x16"); }

		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ListViewDataSource */ 
