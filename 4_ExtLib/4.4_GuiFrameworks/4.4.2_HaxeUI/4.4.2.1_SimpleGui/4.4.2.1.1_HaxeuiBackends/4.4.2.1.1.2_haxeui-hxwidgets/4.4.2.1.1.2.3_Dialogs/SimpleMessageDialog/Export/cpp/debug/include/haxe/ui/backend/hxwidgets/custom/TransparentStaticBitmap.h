// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap
#define INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_StaticBitmap
#include <hx/widgets/StaticBitmap.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,custom,TransparentStaticBitmap)
HX_DECLARE_CLASS2(hx,widgets,Bitmap)
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,StaticBitmap)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{


class HXCPP_CLASS_ATTRIBUTES TransparentStaticBitmap_obj : public  ::hx::widgets::StaticBitmap_obj
{
	public:
		typedef  ::hx::widgets::StaticBitmap_obj super;
		typedef TransparentStaticBitmap_obj OBJ_;
		TransparentStaticBitmap_obj();

	public:
		enum { _hx_ClassId = 0x11a283d9 };

		void __construct( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.custom.TransparentStaticBitmap"); }
		static hx::ObjectPtr< TransparentStaticBitmap_obj > __new( ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		static hx::ObjectPtr< TransparentStaticBitmap_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent, ::hx::widgets::Bitmap bitmap,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransparentStaticBitmap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TransparentStaticBitmap","\x8f","\x29","\xb0","\xcf"); }

		bool _hasDown;
		bool _hasUp;
		void bind(int event, ::Dynamic fn,hx::Null< int >  id);

		void doNothing( ::hx::widgets::Event e);
		::Dynamic doNothing_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_custom_TransparentStaticBitmap */ 
