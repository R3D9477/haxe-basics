// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_TableViewRow
#define INCLUDED_haxe_ui_containers_TableViewRow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,TableViewRow)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES TableViewRow_obj : public  ::haxe::ui::containers::HBox_obj
{
	public:
		typedef  ::haxe::ui::containers::HBox_obj super;
		typedef TableViewRow_obj OBJ_;
		TableViewRow_obj();

	public:
		enum { _hx_ClassId = 0x2fa91efb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.TableViewRow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.TableViewRow"); }
		static hx::ObjectPtr< TableViewRow_obj > __new();
		static hx::ObjectPtr< TableViewRow_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableViewRow_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TableViewRow","\x67","\x2e","\x66","\xfc"); }

		void _onMouseOver( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOver_dyn();

		void _onMouseOut( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onMouseOut_dyn();

		 ::Dynamic get_data();
		::Dynamic get_data_dyn();

		 ::Dynamic set_data( ::Dynamic value);
		::Dynamic set_data_dyn();

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_TableViewRow */ 
