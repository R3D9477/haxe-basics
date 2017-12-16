// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GLCanvas
#define INCLUDED_hx_widgets_GLCanvas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
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


class HXCPP_CLASS_ATTRIBUTES GLCanvas_obj : public  ::hx::widgets::Window_obj
{
	public:
		typedef  ::hx::widgets::Window_obj super;
		typedef GLCanvas_obj OBJ_;
		GLCanvas_obj();

	public:
		enum { _hx_ClassId = 0x45e5f4bc };

		void __construct( ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GLCanvas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GLCanvas"); }
		static hx::ObjectPtr< GLCanvas_obj > __new( ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static hx::ObjectPtr< GLCanvas_obj > __alloc(hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::Array< int > options,hx::Null< int >  __o_style,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLCanvas_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLCanvas","\xdd","\xb0","\x33","\x22"); }

		bool setColour(::String colour);
		::Dynamic setColour_dyn();

		bool setCurrent( ::hx::widgets::GLContext current);
		::Dynamic setCurrent_dyn();

		::cpp::Pointer<  wxGLCanvas > canvasRef;
		::cpp::Pointer<  wxGLCanvas > get_canvasRef();
		::Dynamic get_canvasRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GLCanvas */ 
