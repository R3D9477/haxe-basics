// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo
#define INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_05bec680eb51dc45_72_new)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentBindingInfo)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ComponentBindingInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentBindingInfo_obj OBJ_;
		ComponentBindingInfo_obj();

	public:
		enum { _hx_ClassId = 0x67a622a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.ComponentBindingInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.ComponentBindingInfo"); }

		hx::ObjectPtr< ComponentBindingInfo_obj > __new() {
			hx::ObjectPtr< ComponentBindingInfo_obj > __this = new ComponentBindingInfo_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ComponentBindingInfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			ComponentBindingInfo_obj *__this = (ComponentBindingInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComponentBindingInfo_obj), true, "haxe.ui.parsers.ui.ComponentBindingInfo"));
			*(void **)__this = ComponentBindingInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_05bec680eb51dc45_72_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentBindingInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComponentBindingInfo","\xb6","\x78","\xcd","\xab"); }

		::String source;
		::String target;
		::String transform;
};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo */ 
