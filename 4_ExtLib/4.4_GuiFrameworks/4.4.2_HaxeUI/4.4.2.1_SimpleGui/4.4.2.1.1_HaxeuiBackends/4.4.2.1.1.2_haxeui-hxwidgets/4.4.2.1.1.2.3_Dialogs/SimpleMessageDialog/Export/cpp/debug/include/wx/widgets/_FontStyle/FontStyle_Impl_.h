// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_
#define INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,_FontStyle,FontStyle_Impl_)

#include <wx/font.h>
namespace wx{
namespace widgets{
namespace _FontStyle{


class HXCPP_CLASS_ATTRIBUTES FontStyle_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FontStyle_Impl__obj OBJ_;
		FontStyle_Impl__obj();

	public:
		enum { _hx_ClassId = 0x210634bd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets._FontStyle.FontStyle_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets._FontStyle.FontStyle_Impl_"); }

		hx::ObjectPtr< FontStyle_Impl__obj > __new() {
			hx::ObjectPtr< FontStyle_Impl__obj > __this = new FontStyle_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FontStyle_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			FontStyle_Impl__obj *__this = (FontStyle_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FontStyle_Impl__obj), false, "wx.widgets._FontStyle.FontStyle_Impl_"));
			*(void **)__this = FontStyle_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FontStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FontStyle_Impl_","\xe2","\x62","\x27","\x5d"); }

		static void __boot();
		static int NORMAL;
		static int ITALIC;
		static int SLANT;
		static int _new(int i);
		static ::Dynamic _new_dyn();

};

} // end namespace wx
} // end namespace widgets
} // end namespace _FontStyle

#endif /* INCLUDED_wx_widgets__FontStyle_FontStyle_Impl_ */ 
