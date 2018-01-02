// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_SliderStyle
#define INCLUDED_wx_widgets_styles_SliderStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,SliderStyle)

#include <wx/slider.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES SliderStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SliderStyle_obj OBJ_;
		SliderStyle_obj();

	public:
		enum { _hx_ClassId = 0x5243c6c4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.SliderStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.SliderStyle"); }

		hx::ObjectPtr< SliderStyle_obj > __new() {
			hx::ObjectPtr< SliderStyle_obj > __this = new SliderStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SliderStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			SliderStyle_obj *__this = (SliderStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SliderStyle_obj), false, "wx.widgets.styles.SliderStyle"));
			*(void **)__this = SliderStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SliderStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SliderStyle","\x30","\x0f","\x32","\xd8"); }

		static void __boot();
		static int HORIZONTAL;
		static int VERTICAL;
		static int AUTOTICKS;
		static int MIN_MAX_LABELS;
		static int VALUE_LABEL;
		static int LABELS;
		static int LEFT;
		static int RIGHT;
		static int TOP;
		static int BOTTOM;
		static int SELRANGE;
		static int INVERSE;
		static int DEFAULT;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_SliderStyle */ 
