// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_util_StringUtil
#define INCLUDED_haxe_ui_util_StringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,util,StringUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES StringUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringUtil_obj OBJ_;
		StringUtil_obj();

	public:
		enum { _hx_ClassId = 0x1c95a233 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.StringUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.util.StringUtil"); }

		hx::ObjectPtr< StringUtil_obj > __new() {
			hx::ObjectPtr< StringUtil_obj > __this = new StringUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StringUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			StringUtil_obj *__this = (StringUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringUtil_obj), false, "haxe.ui.util.StringUtil"));
			*(void **)__this = StringUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StringUtil","\x93","\xed","\x5b","\xf6"); }

		static ::String capitalizeFirstLetter(::String s);
		static ::Dynamic capitalizeFirstLetter_dyn();

		static ::String capitalizeHyphens(::String s);
		static ::Dynamic capitalizeHyphens_dyn();

		static ::String replaceVars(::String s, ::haxe::ds::StringMap params);
		static ::Dynamic replaceVars_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_StringUtil */ 
