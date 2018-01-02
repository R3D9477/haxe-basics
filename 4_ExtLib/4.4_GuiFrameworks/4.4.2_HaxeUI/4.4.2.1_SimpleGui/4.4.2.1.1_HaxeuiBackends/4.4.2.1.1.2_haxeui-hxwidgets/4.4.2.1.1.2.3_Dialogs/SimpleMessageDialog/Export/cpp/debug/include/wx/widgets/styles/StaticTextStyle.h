// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_StaticTextStyle
#define INCLUDED_wx_widgets_styles_StaticTextStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,StaticTextStyle)

#include <wx/stattext.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES StaticTextStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StaticTextStyle_obj OBJ_;
		StaticTextStyle_obj();

	public:
		enum { _hx_ClassId = 0x595139c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.StaticTextStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.StaticTextStyle"); }

		hx::ObjectPtr< StaticTextStyle_obj > __new() {
			hx::ObjectPtr< StaticTextStyle_obj > __this = new StaticTextStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StaticTextStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			StaticTextStyle_obj *__this = (StaticTextStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticTextStyle_obj), false, "wx.widgets.styles.StaticTextStyle"));
			*(void **)__this = StaticTextStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticTextStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StaticTextStyle","\x96","\x3a","\xb0","\xb3"); }

		static void __boot();
		static int ALIGN_LEFT;
		static int ALIGN_RIGHT;
		static int ALIGN_CENTRE_HORIZONTAL;
		static int NO_AUTORESIZE;
		static int ELLIPSIZE_START;
		static int ELLIPSIZE_MIDDLE;
		static int ELLIPSIZE_END;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_StaticTextStyle */ 
