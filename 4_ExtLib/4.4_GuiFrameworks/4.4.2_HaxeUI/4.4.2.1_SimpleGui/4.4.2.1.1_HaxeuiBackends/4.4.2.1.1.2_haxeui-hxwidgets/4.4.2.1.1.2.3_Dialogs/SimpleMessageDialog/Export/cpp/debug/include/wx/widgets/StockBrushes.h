// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_StockBrushes
#define INCLUDED_wx_widgets_StockBrushes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
HX_DECLARE_CLASS2(wx,widgets,StockBrushes)

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StockBrushes_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StockBrushes_obj OBJ_;
		StockBrushes_obj();

	public:
		enum { _hx_ClassId = 0x34586bc0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.StockBrushes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.StockBrushes"); }

		hx::ObjectPtr< StockBrushes_obj > __new() {
			hx::ObjectPtr< StockBrushes_obj > __this = new StockBrushes_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StockBrushes_obj > __alloc(hx::Ctx *_hx_ctx) {
			StockBrushes_obj *__this = (StockBrushes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StockBrushes_obj), false, "wx.widgets.StockBrushes"));
			*(void **)__this = StockBrushes_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StockBrushes_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StockBrushes","\x52","\xd7","\x00","\x89"); }

		static void __boot();
		static ::cpp::Pointer<  wxBrush > BRUSH_BLACK;
		static ::cpp::Pointer<  wxBrush > BRUSH_BLUE;
		static ::cpp::Pointer<  wxBrush > BRUSH_CYAN;
		static ::cpp::Pointer<  wxBrush > BRUSH_GREEN;
		static ::cpp::Pointer<  wxBrush > BRUSH_YELLOW;
		static ::cpp::Pointer<  wxBrush > BRUSH_GREY;
		static ::cpp::Pointer<  wxBrush > BRUSH_LIGHT_GREY;
		static ::cpp::Pointer<  wxBrush > BRUSH_MEDIUM_GREY;
		static ::cpp::Pointer<  wxBrush > BRUSH_RED;
		static ::cpp::Pointer<  wxBrush > BRUSH_TRANSPARENT;
		static ::cpp::Pointer<  wxBrush > BRUSH_WHITE;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_StockBrushes */ 
