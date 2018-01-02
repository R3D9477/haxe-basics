// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_DirDialogStyle
#define INCLUDED_wx_widgets_styles_DirDialogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,DirDialogStyle)


#include <wx/wx.h>
#undef RegisterClass

namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES DirDialogStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DirDialogStyle_obj OBJ_;
		DirDialogStyle_obj();

	public:
		enum { _hx_ClassId = 0x09de4624 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.DirDialogStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.DirDialogStyle"); }

		hx::ObjectPtr< DirDialogStyle_obj > __new() {
			hx::ObjectPtr< DirDialogStyle_obj > __this = new DirDialogStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DirDialogStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			DirDialogStyle_obj *__this = (DirDialogStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DirDialogStyle_obj), false, "wx.widgets.styles.DirDialogStyle"));
			*(void **)__this = DirDialogStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DirDialogStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DirDialogStyle","\x1c","\xc3","\x78","\x0f"); }

		static void __boot();
		static int DEFAULT_STYLE;
		static int DIR_MUST_EXIST;
		static int CHANGE_DIR;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_DirDialogStyle */ 
