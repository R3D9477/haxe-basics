// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_MessageDialogStyle
#define INCLUDED_wx_widgets_styles_MessageDialogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,MessageDialogStyle)


#include <wx/msgdlg.h>
#undef RegisterClass

namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES MessageDialogStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MessageDialogStyle_obj OBJ_;
		MessageDialogStyle_obj();

	public:
		enum { _hx_ClassId = 0x205037b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.MessageDialogStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.MessageDialogStyle"); }

		hx::ObjectPtr< MessageDialogStyle_obj > __new() {
			hx::ObjectPtr< MessageDialogStyle_obj > __this = new MessageDialogStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MessageDialogStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			MessageDialogStyle_obj *__this = (MessageDialogStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MessageDialogStyle_obj), false, "wx.widgets.styles.MessageDialogStyle"));
			*(void **)__this = MessageDialogStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MessageDialogStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MessageDialogStyle","\xe2","\x98","\xcd","\xd4"); }

		static void __boot();
		static int OK;
		static int CANCEL;
		static int YES_NO;
		static int HELP;
		static int NO_DEFAULT;
		static int CANCEL_DEFAULT;
		static int YES_DEFAULT;
		static int OK_DEFAULT;
		static int ICON_NONE;
		static int ICON_ERROR;
		static int ICON_WARNING;
		static int ICON_QUESTION;
		static int ICON_INFORMATION;
		static int ICON_EXCLAMATION;
		static int ICON_HAND;
		static int ICON_AUTH_NEEDED;
		static int STAY_ON_TOP;
		static int CENTRE;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_MessageDialogStyle */ 
