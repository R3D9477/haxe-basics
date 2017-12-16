// GeneratedByHaxe
#ifndef INCLUDED_wx_widgets_GLOptions
#define INCLUDED_wx_widgets_GLOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,GLOptions)


#include <wx/glcanvas.h>
#undef RegisterClass

namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GLOptions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLOptions_obj OBJ_;
		GLOptions_obj();

	public:
		enum { _hx_ClassId = 0x421cd68b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.GLOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"wx.widgets.GLOptions"); }

		hx::ObjectPtr< GLOptions_obj > __new() {
			hx::ObjectPtr< GLOptions_obj > __this = new GLOptions_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLOptions_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLOptions_obj *__this = (GLOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLOptions_obj), false, "wx.widgets.GLOptions"));
			*(void **)__this = GLOptions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLOptions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLOptions","\xb9","\x5b","\x3d","\x29"); }

		static void __boot();
		static int RGBA;
		static int BUFFER_SIZE;
		static int LEVEL;
		static int DOUBLEBUFFER;
		static int STEREO;
		static int AUX_BUFFERS;
		static int MIN_RED;
		static int MIN_GREEN;
		static int MIN_BLUE;
		static int MIN_ALPHA;
		static int DEPTH_SIZE;
		static int STENCIL_SIZE;
		static int MIN_ACCUM_RED;
		static int MIN_ACCUM_GREEN;
		static int MIN_ACCUM_BLUE;
		static int MIN_ACCUM_ALPHA;
		static int SAMPLE_BUFFERS;
		static int SAMPLES;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_GLOptions */ 
