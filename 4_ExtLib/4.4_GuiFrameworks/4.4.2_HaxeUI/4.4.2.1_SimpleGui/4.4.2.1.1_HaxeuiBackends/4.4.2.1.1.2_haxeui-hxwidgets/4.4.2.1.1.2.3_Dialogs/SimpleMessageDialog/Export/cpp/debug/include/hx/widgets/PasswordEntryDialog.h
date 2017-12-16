// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_PasswordEntryDialog
#define INCLUDED_hx_widgets_PasswordEntryDialog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_TextEntryDialog
#include <hx/widgets/TextEntryDialog.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Dialog)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,PasswordEntryDialog)
HX_DECLARE_CLASS2(hx,widgets,TextEntryDialog)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES PasswordEntryDialog_obj : public  ::hx::widgets::TextEntryDialog_obj
{
	public:
		typedef  ::hx::widgets::TextEntryDialog_obj super;
		typedef PasswordEntryDialog_obj OBJ_;
		PasswordEntryDialog_obj();

	public:
		enum { _hx_ClassId = 0x57ff5a44 };

		void __construct( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.PasswordEntryDialog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.PasswordEntryDialog"); }
		static hx::ObjectPtr< PasswordEntryDialog_obj > __new( ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		static hx::ObjectPtr< PasswordEntryDialog_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String caption,::String value,hx::Null< int >  __o_style);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PasswordEntryDialog_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PasswordEntryDialog","\x5f","\x2f","\xf4","\x39"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_PasswordEntryDialog */ 
