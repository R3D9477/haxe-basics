// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_FileDialogStyle
#define INCLUDED_wx_widgets_styles_FileDialogStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,FileDialogStyle)


#include <wx/filedlg.h>
#undef RegisterClass

namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES FileDialogStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FileDialogStyle_obj OBJ_;
		FileDialogStyle_obj();

	public:
		enum { _hx_ClassId = 0x0f7d653d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.FileDialogStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.FileDialogStyle"); }

		hx::ObjectPtr< FileDialogStyle_obj > __new() {
			hx::ObjectPtr< FileDialogStyle_obj > __this = new FileDialogStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FileDialogStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			FileDialogStyle_obj *__this = (FileDialogStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileDialogStyle_obj), false, "wx.widgets.styles.FileDialogStyle"));
			*(void **)__this = FileDialogStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileDialogStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FileDialogStyle","\x0d","\x66","\xdc","\x69"); }

		static void __boot();
		static int DEFAULT_STYLE;
		static int OPEN;
		static int SAVE;
		static int OVERWRITE_PROMPT;
		static int FILE_MUST_EXIST;
		static int MULTIPLE;
		static int CHANGE_DIR;
		static int PREVIEW;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_FileDialogStyle */ 
