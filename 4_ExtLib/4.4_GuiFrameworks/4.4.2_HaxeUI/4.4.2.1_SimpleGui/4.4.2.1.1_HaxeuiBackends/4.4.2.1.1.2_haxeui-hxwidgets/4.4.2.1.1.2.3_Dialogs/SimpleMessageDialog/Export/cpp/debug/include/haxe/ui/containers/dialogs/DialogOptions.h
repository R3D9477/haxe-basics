// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogOptions
#define INCLUDED_haxe_ui_containers_dialogs_DialogOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogButton)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogOptions)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES DialogOptions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DialogOptions_obj OBJ_;
		DialogOptions_obj();

	public:
		enum { _hx_ClassId = 0x5039b717 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.DialogOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.DialogOptions"); }
		static hx::ObjectPtr< DialogOptions_obj > __new();
		static hx::ObjectPtr< DialogOptions_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DialogOptions_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DialogOptions","\x56","\x4f","\x9e","\x99"); }

		static void __boot();
		static int ICON_ERROR;
		static int ICON_INFO;
		static int ICON_WARNING;
		static int ICON_QUESTION;
		::Array< ::Dynamic> buttons;
		::String title;
		int icon;
		::String styleNames;
		void addStandardButton(int button);
		::Dynamic addStandardButton_dyn();

		void addButton( ::haxe::ui::containers::dialogs::DialogButton button);
		::Dynamic addButton_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_DialogOptions */ 
