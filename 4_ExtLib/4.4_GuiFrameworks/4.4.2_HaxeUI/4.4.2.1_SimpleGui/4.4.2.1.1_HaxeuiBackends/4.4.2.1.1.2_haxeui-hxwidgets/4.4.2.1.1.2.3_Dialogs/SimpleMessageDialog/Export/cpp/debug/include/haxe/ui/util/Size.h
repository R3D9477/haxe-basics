// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_Size
#define INCLUDED_haxe_ui_util_Size

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_38f647cb5eb58979_7_new)
HX_DECLARE_CLASS3(haxe,ui,util,Size)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Size_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Size_obj OBJ_;
		Size_obj();

	public:
		enum { _hx_ClassId = 0x06f74981 };

		void __construct(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.Size")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.util.Size"); }

		hx::ObjectPtr< Size_obj > __new(hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
			hx::ObjectPtr< Size_obj > __this = new Size_obj();
			__this->__construct(__o_width,__o_height);
			return __this;
		}

		static hx::ObjectPtr< Size_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
			Size_obj *__this = (Size_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Size_obj), false, "haxe.ui.util.Size"));
			*(void **)__this = Size_obj::_hx_vtable;
{
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_38f647cb5eb58979_7_new)
HXLINE(   8)		( ( ::haxe::ui::util::Size)(__this) )->width = width;
HXLINE(   9)		( ( ::haxe::ui::util::Size)(__this) )->height = height;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Size_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Size","\xe1","\xcc","\x2c","\x37"); }

		Float width;
		Float height;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_Size */ 
