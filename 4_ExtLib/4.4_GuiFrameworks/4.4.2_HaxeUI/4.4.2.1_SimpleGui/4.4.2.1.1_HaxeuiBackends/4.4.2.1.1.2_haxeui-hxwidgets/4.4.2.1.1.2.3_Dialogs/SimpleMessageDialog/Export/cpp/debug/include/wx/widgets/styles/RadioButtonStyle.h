// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_RadioButtonStyle
#define INCLUDED_wx_widgets_styles_RadioButtonStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,RadioButtonStyle)

#include <wx/radiobut.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES RadioButtonStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RadioButtonStyle_obj OBJ_;
		RadioButtonStyle_obj();

	public:
		enum { _hx_ClassId = 0x67a68f94 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.RadioButtonStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.RadioButtonStyle"); }

		hx::ObjectPtr< RadioButtonStyle_obj > __new() {
			hx::ObjectPtr< RadioButtonStyle_obj > __this = new RadioButtonStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< RadioButtonStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			RadioButtonStyle_obj *__this = (RadioButtonStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RadioButtonStyle_obj), false, "wx.widgets.styles.RadioButtonStyle"));
			*(void **)__this = RadioButtonStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RadioButtonStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RadioButtonStyle","\xc4","\x44","\x68","\x20"); }

		static void __boot();
		static int GROUP;
		static int SINGLE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_RadioButtonStyle */ 
