// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StockBrushes
#define INCLUDED_hx_widgets_StockBrushes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Brush)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StockBrushes)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StockBrushes_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StockBrushes_obj OBJ_;
		StockBrushes_obj();

	public:
		enum { _hx_ClassId = 0x1ec3c1cd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.widgets.StockBrushes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hx.widgets.StockBrushes"); }

		hx::ObjectPtr< StockBrushes_obj > __new() {
			hx::ObjectPtr< StockBrushes_obj > __this = new StockBrushes_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StockBrushes_obj > __alloc(hx::Ctx *_hx_ctx) {
			StockBrushes_obj *__this = (StockBrushes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StockBrushes_obj), false, "hx.widgets.StockBrushes"));
			*(void **)__this = StockBrushes_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StockBrushes_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StockBrushes","\x52","\xd7","\x00","\x89"); }

		static void __boot();
		static  ::hx::widgets::Brush BRUSH_BLACK;
		static  ::hx::widgets::Brush BRUSH_BLUE;
		static  ::hx::widgets::Brush BRUSH_CYAN;
		static  ::hx::widgets::Brush BRUSH_GREEN;
		static  ::hx::widgets::Brush BRUSH_YELLOW;
		static  ::hx::widgets::Brush BRUSH_GREY;
		static  ::hx::widgets::Brush BRUSH_LIGHT_GREY;
		static  ::hx::widgets::Brush BRUSH_MEDIUM_GREY;
		static  ::hx::widgets::Brush BRUSH_RED;
		static  ::hx::widgets::Brush BRUSH_TRANSPARENT;
		static  ::hx::widgets::Brush BRUSH_WHITE;
		static  ::hx::widgets::Brush createStockBrush(::cpp::Pointer<  wxBrush > stock);
		static ::Dynamic createStockBrush_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StockBrushes */ 
