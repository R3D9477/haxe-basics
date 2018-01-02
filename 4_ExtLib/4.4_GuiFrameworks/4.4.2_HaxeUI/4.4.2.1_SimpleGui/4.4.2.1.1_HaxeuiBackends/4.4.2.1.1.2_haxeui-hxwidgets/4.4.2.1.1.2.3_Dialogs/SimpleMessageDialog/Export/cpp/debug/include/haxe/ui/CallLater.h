// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_CallLater
#define INCLUDED_haxe_ui_CallLater

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_CallLaterBase
#include <haxe/ui/backend/CallLaterBase.h>
#endif
HX_DECLARE_CLASS2(haxe,ui,CallLater)
HX_DECLARE_CLASS3(haxe,ui,backend,CallLaterBase)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES CallLater_obj : public  ::haxe::ui::backend::CallLaterBase_obj
{
	public:
		typedef  ::haxe::ui::backend::CallLaterBase_obj super;
		typedef CallLater_obj OBJ_;
		CallLater_obj();

	public:
		enum { _hx_ClassId = 0x134f3434 };

		void __construct( ::Dynamic fn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.CallLater")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.CallLater"); }
		static hx::ObjectPtr< CallLater_obj > __new( ::Dynamic fn);
		static hx::ObjectPtr< CallLater_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic fn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallLater_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CallLater","\xee","\xf0","\xce","\x9d"); }

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_CallLater */ 
