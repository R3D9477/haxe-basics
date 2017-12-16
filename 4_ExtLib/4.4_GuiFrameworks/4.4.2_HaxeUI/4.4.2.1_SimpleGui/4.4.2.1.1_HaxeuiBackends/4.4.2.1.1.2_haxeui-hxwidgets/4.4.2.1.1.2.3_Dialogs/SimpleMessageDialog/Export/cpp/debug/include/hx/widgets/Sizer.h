// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_Sizer
#define INCLUDED_hx_widgets_Sizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_3f256efeda3a1a55
#define INCLUDED_3f256efeda3a1a55
#include "wx/sizer.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Sizer)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Sizer_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef Sizer_obj OBJ_;
		Sizer_obj();

	public:
		enum { _hx_ClassId = 0x309ca332 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Sizer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.Sizer"); }
		static hx::ObjectPtr< Sizer_obj > __new();
		static hx::ObjectPtr< Sizer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sizer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Sizer","\x71","\x78","\x06","\x10"); }

		static  wxSizer* toRaw( ::hx::widgets::Sizer sizer);

		void add( ::hx::widgets::Window window,hx::Null< int >  proportion,hx::Null< int >  flag,hx::Null< int >  border);
		::Dynamic add_dyn();

		void addSizer( ::hx::widgets::Sizer sizer,hx::Null< int >  proportion,hx::Null< int >  flag,hx::Null< int >  border);
		::Dynamic addSizer_dyn();

		void insert(int index, ::hx::widgets::Window window,hx::Null< int >  proportion,hx::Null< int >  flag,hx::Null< int >  border);
		::Dynamic insert_dyn();

		void insertSizer(int index, ::hx::widgets::Sizer sizer,hx::Null< int >  proportion,hx::Null< int >  flag,hx::Null< int >  border);
		::Dynamic insertSizer_dyn();

		void addSpacer(int size);
		::Dynamic addSpacer_dyn();

		bool remove(int index);
		::Dynamic remove_dyn();

		void layout();
		::Dynamic layout_dyn();

		::cpp::Pointer<  wxSizer > sizerRef;
		::cpp::Pointer<  wxSizer > get_sizerRef();
		::Dynamic get_sizerRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Sizer */ 
