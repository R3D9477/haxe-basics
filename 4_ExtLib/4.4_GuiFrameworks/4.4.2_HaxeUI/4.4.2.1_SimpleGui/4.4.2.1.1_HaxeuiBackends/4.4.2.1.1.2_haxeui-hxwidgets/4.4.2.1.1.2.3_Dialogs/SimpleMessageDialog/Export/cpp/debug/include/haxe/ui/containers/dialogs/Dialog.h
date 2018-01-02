// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#define INCLUDED_haxe_ui_containers_dialogs_Dialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogButton)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogOptions)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,core,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES Dialog_obj : public  ::haxe::ui::core::Component_obj
{
	public:
		typedef  ::haxe::ui::core::Component_obj super;
		typedef Dialog_obj OBJ_;
		Dialog_obj();

	public:
		enum { _hx_ClassId = 0x0b312307 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.Dialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.Dialog"); }
		static hx::ObjectPtr< Dialog_obj > __new();
		static hx::ObjectPtr< Dialog_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Dialog","\xe8","\x78","\xc7","\xe5"); }

		 ::haxe::ui::containers::Box _titleBar;
		 ::haxe::ui::containers::HBox _buttons;
		 ::haxe::ui::components::Label _title;
		 ::haxe::ui::components::Button _closeButton;
		void createChildren();

		void createTitleBar();
		::Dynamic createTitleBar_dyn();

		void createButtonBar();
		::Dynamic createButtonBar_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void close(::String buttonId);
		::Dynamic close_dyn();

		 ::haxe::ui::components::Button addButton( ::haxe::ui::containers::dialogs::DialogButton dialogButton);
		::Dynamic addButton_dyn();

		 ::haxe::ui::containers::dialogs::DialogOptions _options;
		 ::haxe::ui::containers::dialogs::DialogOptions get_dialogOptions();
		::Dynamic get_dialogOptions_dyn();

		 ::haxe::ui::containers::dialogs::DialogOptions set_dialogOptions( ::haxe::ui::containers::dialogs::DialogOptions value);
		::Dynamic set_dialogOptions_dyn();

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		void _onButtonClick( ::haxe::ui::core::MouseEvent event);
		::Dynamic _onButtonClick_dyn();

		virtual  ::haxe::ui::core::Component cloneComponent();

		virtual  ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_Dialog */ 
