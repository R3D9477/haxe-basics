// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_BindingInfo
#define INCLUDED_haxe_ui_core_BindingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1e1edeea9f638cd7_26_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,BindingInfo)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES BindingInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BindingInfo_obj OBJ_;
		BindingInfo_obj();

	public:
		enum { _hx_ClassId = 0x49505ffa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.BindingInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.BindingInfo"); }

		hx::ObjectPtr< BindingInfo_obj > __new() {
			hx::ObjectPtr< BindingInfo_obj > __this = new BindingInfo_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BindingInfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			BindingInfo_obj *__this = (BindingInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BindingInfo_obj), true, "haxe.ui.core.BindingInfo"));
			*(void **)__this = BindingInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1e1edeea9f638cd7_26_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BindingInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BindingInfo","\x33","\x0e","\xbc","\x9b"); }

		 ::haxe::ui::core::Component target;
		::String targetProperty;
		::String sourceProperty;
		::String transform;
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_BindingInfo */ 
