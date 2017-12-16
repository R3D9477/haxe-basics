// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_containers_dialogs_MessageDialog
#define INCLUDED_haxe_ui_containers_dialogs_MessageDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,MessageDialog)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{


class HXCPP_CLASS_ATTRIBUTES MessageDialog_obj : public  ::haxe::ui::containers::dialogs::Dialog_obj
{
	public:
		typedef  ::haxe::ui::containers::dialogs::Dialog_obj super;
		typedef MessageDialog_obj OBJ_;
		MessageDialog_obj();

	public:
		enum { _hx_ClassId = 0x25e97590 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.dialogs.MessageDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.dialogs.MessageDialog"); }
		static hx::ObjectPtr< MessageDialog_obj > __new();
		static hx::ObjectPtr< MessageDialog_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MessageDialog_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MessageDialog","\xcf","\x0d","\x4e","\x6f"); }

		 ::haxe::ui::core::Component cloneComponent();

		 ::haxe::ui::core::Component self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs

#endif /* INCLUDED_haxe_ui_containers_dialogs_MessageDialog */ 
