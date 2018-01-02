// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GLContext
#define INCLUDED_hx_widgets_GLContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_f803ca800b24f38b
#define INCLUDED_f803ca800b24f38b
#include "wx/glcanvas.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,GLCanvas)
HX_DECLARE_CLASS2(hx,widgets,GLContext)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

#undef RegisterClass
namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GLContext_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef GLContext_obj OBJ_;
		GLContext_obj();

	public:
		enum { _hx_ClassId = 0x7affdd8b };

		void __construct( ::hx::widgets::GLCanvas canvas);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GLContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GLContext"); }
		static hx::ObjectPtr< GLContext_obj > __new( ::hx::widgets::GLCanvas canvas);
		static hx::ObjectPtr< GLContext_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::GLCanvas canvas);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLContext","\x4a","\xbe","\xb6","\x62"); }

		::cpp::Pointer<  wxGLContext > glContextRef;
		::cpp::Pointer<  wxGLContext > get_glContextRef();
		::Dynamic get_glContextRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GLContext */ 
