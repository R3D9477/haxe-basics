// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_ButtonStyle
#define INCLUDED_wx_widgets_styles_ButtonStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,ButtonStyle)

#include <wx/button.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES ButtonStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ButtonStyle_obj OBJ_;
		ButtonStyle_obj();

	public:
		enum { _hx_ClassId = 0x6700a4ef };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.ButtonStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.ButtonStyle"); }

		hx::ObjectPtr< ButtonStyle_obj > __new() {
			hx::ObjectPtr< ButtonStyle_obj > __this = new ButtonStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ButtonStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			ButtonStyle_obj *__this = (ButtonStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ButtonStyle_obj), false, "wx.widgets.styles.ButtonStyle"));
			*(void **)__this = ButtonStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ButtonStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ButtonStyle","\xbf","\xfd","\xfa","\xb5"); }

		static void __boot();
		static int LEFT;
		static int TOP;
		static int RIGHT;
		static int BOTTOM;
		static int EXACTFIT;
		static int NOTEXT;
		static int BORDER_NONE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_ButtonStyle */ 
