// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#define INCLUDED_wx_widgets_styles_ListCtrlStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,ListCtrlStyle)

#include <wx/listctrl.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES ListCtrlStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ListCtrlStyle_obj OBJ_;
		ListCtrlStyle_obj();

	public:
		enum { _hx_ClassId = 0x085e9cbc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.ListCtrlStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.ListCtrlStyle"); }

		hx::ObjectPtr< ListCtrlStyle_obj > __new() {
			hx::ObjectPtr< ListCtrlStyle_obj > __this = new ListCtrlStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ListCtrlStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			ListCtrlStyle_obj *__this = (ListCtrlStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListCtrlStyle_obj), false, "wx.widgets.styles.ListCtrlStyle"));
			*(void **)__this = ListCtrlStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ListCtrlStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ListCtrlStyle","\x28","\xd8","\xc0","\x9c"); }

		static void __boot();
		static int LIST;
		static int REPORT;
		static int VIRTUAL;
		static int ICON;
		static int SMALL_ICON;
		static int ALIGN_TOP;
		static int ALIGN_LEFT;
		static int AUTOARRANGE;
		static int EDIT_LABELS;
		static int NO_HEADER;
		static int SINGLE_SEL;
		static int SORT_ASCENDING;
		static int SORT_DESCENDING;
		static int HRULES;
		static int VRULES;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_ListCtrlStyle */ 
