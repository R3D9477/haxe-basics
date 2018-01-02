// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#define INCLUDED_haxe_ui_focus_FocusInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c8939703bfe92536_6_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,focus,FocusInfo)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace focus{


class HXCPP_CLASS_ATTRIBUTES FocusInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FocusInfo_obj OBJ_;
		FocusInfo_obj();

	public:
		enum { _hx_ClassId = 0x3dcfb628 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.focus.FocusInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.focus.FocusInfo"); }

		hx::ObjectPtr< FocusInfo_obj > __new() {
			hx::ObjectPtr< FocusInfo_obj > __this = new FocusInfo_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FocusInfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			FocusInfo_obj *__this = (FocusInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FocusInfo_obj), true, "haxe.ui.focus.FocusInfo"));
			*(void **)__this = FocusInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c8939703bfe92536_6_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FocusInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FocusInfo","\x46","\x70","\x19","\xbf"); }

		 ::haxe::ui::core::Component view;
		::Dynamic currentFocus;
};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_FocusInfo */ 
