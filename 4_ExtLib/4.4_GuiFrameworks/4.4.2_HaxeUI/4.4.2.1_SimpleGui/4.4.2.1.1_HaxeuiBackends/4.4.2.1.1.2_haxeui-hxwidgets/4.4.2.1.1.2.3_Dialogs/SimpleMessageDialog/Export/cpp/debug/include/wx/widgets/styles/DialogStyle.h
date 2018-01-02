// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_DialogStyle
#define INCLUDED_wx_widgets_styles_DialogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,DialogStyle)


#include <wx/dialog.h>
#undef RegisterClass

namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES DialogStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DialogStyle_obj OBJ_;
		DialogStyle_obj();

	public:
		enum { _hx_ClassId = 0x2741fa59 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.DialogStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.DialogStyle"); }

		hx::ObjectPtr< DialogStyle_obj > __new() {
			hx::ObjectPtr< DialogStyle_obj > __this = new DialogStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DialogStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			DialogStyle_obj *__this = (DialogStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogStyle_obj), false, "wx.widgets.styles.DialogStyle"));
			*(void **)__this = DialogStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DialogStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DialogStyle","\x29","\x53","\x3c","\x76"); }

		static void __boot();
		static int CAPTION;
		static int DEFAULT_DIALOG_STYLE;
		static int RESIZE_BORDER;
		static int SYSTEM_MENU;
		static int CLOSE_BOX;
		static int MAXIMIZE_BOX;
		static int MINIMIZE_BOX;
		static int STAY_ON_TOP;
		static int DIALOG_NO_PARENT;
		static int DIALOG_EX_CONTEXTHELP;
		static int DIALOG_EX_METAL;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_DialogStyle */ 
