// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#define INCLUDED_wx_widgets_styles_TextCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,TextCtrlStyle)

#include <wx/textctrl.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES TextCtrlStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextCtrlStyle_obj OBJ_;
		TextCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x14b4cd55 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.TextCtrlStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.TextCtrlStyle"); }

		hx::ObjectPtr< TextCtrlStyle_obj > __new() {
			hx::ObjectPtr< TextCtrlStyle_obj > __this = new TextCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< TextCtrlStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			TextCtrlStyle_obj *__this = (TextCtrlStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlStyle_obj), false, "wx.widgets.styles.TextCtrlStyle"));
			*(void **)__this = TextCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextCtrlStyle","\xf9","\x25","\x1f","\x48"); }

		static void __boot();
		static int PROCESS_ENTER;
		static int PROCESS_TAB;
		static int MULTILINE;
		static int PASSWORD;
		static int READONLY;
		static int RICH;
		static int RICH2;
		static int AUTO_URL;
		static int NOHIDESEL;
		static int HSCROLL;
		static int NO_VSCROLL;
		static int LEFT;
		static int CENTRE;
		static int RIGHT;
		static int DONTWRAP;
		static int CHARWRAP;
		static int WORDWRAP;
		static int BESTWRAP;
		static int CAPITALIZE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_TextCtrlStyle */ 
