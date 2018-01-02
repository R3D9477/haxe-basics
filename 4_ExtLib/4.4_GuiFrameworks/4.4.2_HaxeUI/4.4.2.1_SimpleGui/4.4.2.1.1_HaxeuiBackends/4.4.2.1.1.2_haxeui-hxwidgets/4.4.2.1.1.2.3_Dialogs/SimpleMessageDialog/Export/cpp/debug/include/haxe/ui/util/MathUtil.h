// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_MathUtil
#define INCLUDED_haxe_ui_util_MathUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,MathUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES MathUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MathUtil_obj OBJ_;
		MathUtil_obj();

	public:
		enum { _hx_ClassId = 0x376a4646 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.MathUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.util.MathUtil"); }

		hx::ObjectPtr< MathUtil_obj > __new() {
			hx::ObjectPtr< MathUtil_obj > __this = new MathUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MathUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			MathUtil_obj *__this = (MathUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MathUtil_obj), false, "haxe.ui.util.MathUtil"));
			*(void **)__this = MathUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MathUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MathUtil","\x0a","\x06","\x68","\x71"); }

		static void __boot();
		static int MAX_INT;
		static int MIN_INT;
		static Float distance(Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic distance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_MathUtil */ 
