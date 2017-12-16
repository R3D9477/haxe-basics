// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ImageList
#define INCLUDED_hx_widgets_ImageList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_1b92b9574f32bb54
#define INCLUDED_1b92b9574f32bb54
#include "wx/imaglist.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ImageList_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef ImageList_obj OBJ_;
		ImageList_obj();

	public:
		enum { _hx_ClassId = 0x0bb08742 };

		void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ImageList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ImageList"); }
		static hx::ObjectPtr< ImageList_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static hx::ObjectPtr< ImageList_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageList","\x39","\x91","\xba","\xcb"); }

		int add( ::hx::widgets::Bitmap bitmap);
		::Dynamic add_dyn();

		::cpp::Pointer<  wxImageList > imagelistRef;
		::cpp::Pointer<  wxImageList > get_imagelistRef();
		::Dynamic get_imagelistRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ImageList */ 
