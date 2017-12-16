// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_HyperlinkCtrlStyle
#define INCLUDED_wx_widgets_styles_HyperlinkCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,HyperlinkCtrlStyle)

#include <wx/hyperlink.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES HyperlinkCtrlStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HyperlinkCtrlStyle_obj OBJ_;
		HyperlinkCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x083d6e30 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.HyperlinkCtrlStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.HyperlinkCtrlStyle"); }

		hx::ObjectPtr< HyperlinkCtrlStyle_obj > __new() {
			hx::ObjectPtr< HyperlinkCtrlStyle_obj > __this = new HyperlinkCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< HyperlinkCtrlStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			HyperlinkCtrlStyle_obj *__this = (HyperlinkCtrlStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HyperlinkCtrlStyle_obj), false, "wx.widgets.styles.HyperlinkCtrlStyle"));
			*(void **)__this = HyperlinkCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HyperlinkCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HyperlinkCtrlStyle","\x60","\xcf","\xba","\xbc"); }

		static void __boot();
		static int ALIGN_LEFT;
		static int ALIGN_RIGHT;
		static int ALIGN_CENTRE;
		static int CONTEXTMENU;
		static int DEFAULT_STYLE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_HyperlinkCtrlStyle */ 
