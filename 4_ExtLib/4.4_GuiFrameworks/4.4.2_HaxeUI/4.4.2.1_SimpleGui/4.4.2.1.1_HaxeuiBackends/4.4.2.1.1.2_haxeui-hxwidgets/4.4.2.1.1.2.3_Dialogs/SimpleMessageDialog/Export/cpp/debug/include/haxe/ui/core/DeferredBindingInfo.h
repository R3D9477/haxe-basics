// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_core_DeferredBindingInfo
#define INCLUDED_haxe_ui_core_DeferredBindingInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2395352ec32ced9a_36_new)
HX_DECLARE_CLASS3(haxe,ui,core,DeferredBindingInfo)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES DeferredBindingInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DeferredBindingInfo_obj OBJ_;
		DeferredBindingInfo_obj();

	public:
		enum { _hx_ClassId = 0x2e2a6437 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.DeferredBindingInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.DeferredBindingInfo"); }

		hx::ObjectPtr< DeferredBindingInfo_obj > __new() {
			hx::ObjectPtr< DeferredBindingInfo_obj > __this = new DeferredBindingInfo_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DeferredBindingInfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			DeferredBindingInfo_obj *__this = (DeferredBindingInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DeferredBindingInfo_obj), true, "haxe.ui.core.DeferredBindingInfo"));
			*(void **)__this = DeferredBindingInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2395352ec32ced9a_36_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DeferredBindingInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DeferredBindingInfo","\x54","\x2d","\xbd","\x34"); }

		::String targetId;
		::String sourceId;
		::String targetProperty;
		::String sourceProperty;
		::String transform;
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_DeferredBindingInfo */ 
