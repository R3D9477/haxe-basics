// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_styles_ComboBoxStyle
#define INCLUDED_wx_widgets_styles_ComboBoxStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(wx,widgets,styles,ComboBoxStyle)

#include <wx/combobox.h>
namespace wx{
namespace widgets{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES ComboBoxStyle_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComboBoxStyle_obj OBJ_;
		ComboBoxStyle_obj();

	public:
		enum { _hx_ClassId = 0x2a4b776c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.styles.ComboBoxStyle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.styles.ComboBoxStyle"); }

		hx::ObjectPtr< ComboBoxStyle_obj > __new() {
			hx::ObjectPtr< ComboBoxStyle_obj > __this = new ComboBoxStyle_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ComboBoxStyle_obj > __alloc(hx::Ctx *_hx_ctx) {
			ComboBoxStyle_obj *__this = (ComboBoxStyle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ComboBoxStyle_obj), false, "wx.widgets.styles.ComboBoxStyle"));
			*(void **)__this = ComboBoxStyle_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComboBoxStyle_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ComboBoxStyle","\x74","\xc1","\x31","\x8e"); }

		static void __boot();
		static int SIMPLE;
		static int DROPDOWN;
		static int READONLY;
		static int SORT;
		static int PROCESS_ENTER;
};

} // end namespace wx
} // end namespace widgets
} // end namespace styles

#endif /* INCLUDED_wx_widgets_styles_ComboBoxStyle */ 
