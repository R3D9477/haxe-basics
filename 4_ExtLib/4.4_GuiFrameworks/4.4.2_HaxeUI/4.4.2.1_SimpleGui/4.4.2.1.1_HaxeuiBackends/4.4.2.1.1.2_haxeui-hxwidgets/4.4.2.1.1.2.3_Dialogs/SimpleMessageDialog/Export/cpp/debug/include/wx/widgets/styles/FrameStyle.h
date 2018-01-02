// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_FrameStyle
#define INCLUDED_wx_widgets_styles_FrameStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,FrameStyle)

#include <wx/frame.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES FrameStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FrameStyle_obj OBJ_;
		FrameStyle_obj();

	public:
		enum { _hx_ClassId = 0x7ecaa9d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.FrameStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.FrameStyle"); }

		hx::ObjectPtr< FrameStyle_obj > __new() {
			hx::ObjectPtr< FrameStyle_obj > __this = new FrameStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FrameStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			FrameStyle_obj *__this = (FrameStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FrameStyle_obj), false, "wx.widgets.styles.FrameStyle"));
			*(void **)__this = FrameStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FrameStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FrameStyle","\xe4","\xdd","\xf4","\x5d"); }

		static void __boot();
		static int DEFAULT_FRAME_STYLE;
		static int ICONIZE;
		static int CAPTION;
		static int MINIMIZE;
		static int MINIMIZE_BOX;
		static int MAXIMIZE;
		static int MAXIMIZE_BOX;
		static int CLOSE_BOX;
		static int STAY_ON_TOP;
		static int SYSTEM_MENU;
		static int RESIZE_BORDER;
		static int FRAME_TOOL_WINDOW;
		static int FRAME_NO_TASKBAR;
		static int FRAME_FLOAT_ON_PARENT;
		static int FRAME_SHAPED;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_FrameStyle */ 
