// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_GaugeStyle
#define INCLUDED_wx_widgets_styles_GaugeStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,GaugeStyle)

#include <wx/gauge.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES GaugeStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GaugeStyle_obj OBJ_;
		GaugeStyle_obj();

	public:
		enum { _hx_ClassId = 0x7f87a740 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.GaugeStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.GaugeStyle"); }

		hx::ObjectPtr< GaugeStyle_obj > __new() {
			hx::ObjectPtr< GaugeStyle_obj > __this = new GaugeStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GaugeStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			GaugeStyle_obj *__this = (GaugeStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GaugeStyle_obj), false, "wx.widgets.styles.GaugeStyle"));
			*(void **)__this = GaugeStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GaugeStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GaugeStyle","\x98","\x7e","\xa7","\x9a"); }

		static void __boot();
		static int HORIZONTAL;
		static int VERTICAL;
		static int SMOOTH;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_GaugeStyle */ 
