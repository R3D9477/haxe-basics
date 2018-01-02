// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogButton
#define INCLUDED_haxe_ui_containers_dialogs_DialogButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8585d1c7f35dcace_7_new)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,DialogButton)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES DialogButton_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DialogButton_obj OBJ_;
		DialogButton_obj();

	public:
		enum { _hx_ClassId = 0x46cd3a75 };

		void __construct(::String id,::String text,hx::Null< bool >  __o_closesDialog);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.DialogButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.DialogButton"); }

		hx::ObjectPtr< DialogButton_obj > __new(::String id,::String text,hx::Null< bool >  __o_closesDialog) {
			hx::ObjectPtr< DialogButton_obj > __this = new DialogButton_obj();
			__this->__construct(id,text,__o_closesDialog);
			return __this;
		}

		static hx::ObjectPtr< DialogButton_obj > __alloc(hx::Ctx *_hx_ctx,::String id,::String text,hx::Null< bool >  __o_closesDialog) {
			DialogButton_obj *__this = (DialogButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogButton_obj), true, "haxe.ui.containers.dialogs.DialogButton"));
			*(void **)__this = DialogButton_obj::_hx_vtable;
{
bool closesDialog = __o_closesDialog.Default(true);
            	HX_STACKFRAME(&_hx_pos_8585d1c7f35dcace_7_new)
HXLINE(  41)		( ( ::haxe::ui::containers::dialogs::DialogButton)(__this) )->closesDialog = true;
HXLINE(  44)		( ( ::haxe::ui::containers::dialogs::DialogButton)(__this) )->id = id;
HXLINE(  45)		( ( ::haxe::ui::containers::dialogs::DialogButton)(__this) )->text = text;
HXLINE(  46)		( ( ::haxe::ui::containers::dialogs::DialogButton)(__this) )->closesDialog = closesDialog;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DialogButton_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DialogButton","\xfa","\xec","\x99","\xc2"); }

		static void __boot();
		static int OK;
		static int CANCEL;
		static int CLOSE;
		static int CONFIRM;
		static int _hx_YES;
		static int _hx_NO;
		static int YES_NO;
		static int YES_NO_CANCEL;
		::String text;
		::String icon;
		::String id;
		::String styleNames;
		::String style;
		bool closesDialog;
};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_DialogButton */ 
