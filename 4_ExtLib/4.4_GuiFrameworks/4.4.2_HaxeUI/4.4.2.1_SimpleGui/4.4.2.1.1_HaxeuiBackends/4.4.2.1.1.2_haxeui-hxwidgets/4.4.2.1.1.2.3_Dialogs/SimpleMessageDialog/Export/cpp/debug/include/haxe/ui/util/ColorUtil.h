// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#define INCLUDED_haxe_ui_util_ColorUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,ColorUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ColorUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ColorUtil_obj OBJ_;
		ColorUtil_obj();

	public:
		enum { _hx_ClassId = 0x46e4b729 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.ColorUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.util.ColorUtil"); }

		hx::ObjectPtr< ColorUtil_obj > __new() {
			hx::ObjectPtr< ColorUtil_obj > __this = new ColorUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ColorUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			ColorUtil_obj *__this = (ColorUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ColorUtil_obj), false, "haxe.ui.util.ColorUtil"));
			*(void **)__this = ColorUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ColorUtil","\xe5","\xc2","\xee","\xca"); }

		static ::Array< int > buildColorArray(int startColor,int endColor,Float size);
		static ::Dynamic buildColorArray_dyn();

		static int parseColor(::String s);
		static ::Dynamic parseColor_dyn();

		static int color(Float r,Float g,Float b);
		static ::Dynamic color_dyn();

		static int r(int c);
		static ::Dynamic r_dyn();

		static int g(int c);
		static ::Dynamic g_dyn();

		static int b(int c);
		static ::Dynamic b_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_ColorUtil */ 
