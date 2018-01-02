// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_RadioButtonGroups
#define INCLUDED_haxe_ui_backend_hxwidgets_RadioButtonGroups

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,RadioButtonGroups)
HX_DECLARE_CLASS3(haxe,ui,components,OptionBox)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES RadioButtonGroups_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RadioButtonGroups_obj OBJ_;
		RadioButtonGroups_obj();

	public:
		enum { _hx_ClassId = 0x5e4758fc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.RadioButtonGroups")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.RadioButtonGroups"); }

		hx::ObjectPtr< RadioButtonGroups_obj > __new() {
			hx::ObjectPtr< RadioButtonGroups_obj > __this = new RadioButtonGroups_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< RadioButtonGroups_obj > __alloc(hx::Ctx *_hx_ctx) {
			RadioButtonGroups_obj *__this = (RadioButtonGroups_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RadioButtonGroups_obj), false, "haxe.ui.backend.hxwidgets.RadioButtonGroups"));
			*(void **)__this = RadioButtonGroups_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RadioButtonGroups_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RadioButtonGroups","\x61","\x25","\x29","\x41"); }

		static  ::haxe::ds::StringMap _groups;
		static bool exists(::String name);
		static ::Dynamic exists_dyn();

		static ::Array< ::Dynamic> group(::String name);
		static ::Dynamic group_dyn();

		static void add(::String name, ::haxe::ui::components::OptionBox control);
		static ::Dynamic add_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_RadioButtonGroups */ 
