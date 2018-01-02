// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_WindowStyle
#define INCLUDED_wx_widgets_styles_WindowStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,WindowStyle)

#include <wx/window.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES WindowStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef WindowStyle_obj OBJ_;
		WindowStyle_obj();

	public:
		enum { _hx_ClassId = 0x0a287a31 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.WindowStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.WindowStyle"); }

		hx::ObjectPtr< WindowStyle_obj > __new() {
			hx::ObjectPtr< WindowStyle_obj > __this = new WindowStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< WindowStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			WindowStyle_obj *__this = (WindowStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WindowStyle_obj), false, "wx.widgets.styles.WindowStyle"));
			*(void **)__this = WindowStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WindowStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WindowStyle","\x01","\xd3","\x22","\x59"); }

		static void __boot();
		static int BORDER_DEFAULT;
		static int BORDER_SIMPLE;
		static int BORDER_SUNKEN;
		static int BORDER_RAISED;
		static int BORDER_STATIC;
		static int BORDER_THEME;
		static int BORDER_NONE;
		static int BORDER_DOUBLE;
		static int TRANSPARENT_WINDOW;
		static int TAB_TRAVERSAL;
		static int WANTS_CHARS;
		static int NO_FULL_REPAINT_ON_RESIZE;
		static int VSCROLL;
		static int HSCROLL;
		static int ALWAYS_SHOW_SB;
		static int CLIP_CHILDREN;
		static int FULL_REPAINT_ON_RESIZE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_WindowStyle */ 
