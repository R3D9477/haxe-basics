// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_CallLaterBase
#define INCLUDED_haxe_ui_backend_CallLaterBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,CallLaterBase)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES CallLaterBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CallLaterBase_obj OBJ_;
		CallLaterBase_obj();

	public:
		enum { _hx_ClassId = 0x57a7dd29 };

		void __construct( ::Dynamic fn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.CallLaterBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.CallLaterBase"); }
		static hx::ObjectPtr< CallLaterBase_obj > __new( ::Dynamic fn);
		static hx::ObjectPtr< CallLaterBase_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic fn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallLaterBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CallLaterBase","\x1f","\x14","\x4f","\xfd"); }

		 ::Dynamic _fn;
		Dynamic _fn_dyn() { return _fn;}
		void onThreadEvent( ::hx::widgets::Event e);
		::Dynamic onThreadEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_CallLaterBase */ 
