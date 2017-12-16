// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Brush
#define INCLUDED_hx_widgets_Brush

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_GDIObject
#include <hx/widgets/GDIObject.h>
#endif
#ifndef INCLUDED_cd1f455405216f23
#define INCLUDED_cd1f455405216f23
#include "wx/brush.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Brush)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Brush_obj : public  ::hx::widgets::GDIObject_obj
{
	public:
		typedef  ::hx::widgets::GDIObject_obj super;
		typedef Brush_obj OBJ_;
		Brush_obj();

	public:
		enum { _hx_ClassId = 0x6cbbf31b };

		void __construct(hx::Null< int >  __o_colour);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Brush")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Brush"); }
		static hx::ObjectPtr< Brush_obj > __new(hx::Null< int >  __o_colour);
		static hx::ObjectPtr< Brush_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_colour);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Brush_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Brush","\x5a","\xc8","\x25","\x4c"); }

		int get_colour();
		::Dynamic get_colour_dyn();

		int set_colour(int value);
		::Dynamic set_colour_dyn();

		::cpp::Pointer<  wxBrush > brushRef;
		::cpp::Pointer<  wxBrush > get_brushRef();
		::Dynamic get_brushRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Brush */ 
