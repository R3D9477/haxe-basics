// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_MultiChoiceDialog
#define INCLUDED_hx_widgets_MultiChoiceDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,MultiChoiceDialog)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES MultiChoiceDialog_obj : public  ::hx::widgets::Dialog_obj
{
	public:
		typedef  ::hx::widgets::Dialog_obj super;
		typedef MultiChoiceDialog_obj OBJ_;
		MultiChoiceDialog_obj();

	public:
		enum { _hx_ClassId = 0x1c5b060b };

		void __construct( ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.MultiChoiceDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.MultiChoiceDialog"); }
		static hx::ObjectPtr< MultiChoiceDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices);
		static hx::ObjectPtr< MultiChoiceDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::Array< ::String > choices);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MultiChoiceDialog_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MultiChoiceDialog","\x02","\x5f","\x02","\xfa"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_MultiChoiceDialog */ 
