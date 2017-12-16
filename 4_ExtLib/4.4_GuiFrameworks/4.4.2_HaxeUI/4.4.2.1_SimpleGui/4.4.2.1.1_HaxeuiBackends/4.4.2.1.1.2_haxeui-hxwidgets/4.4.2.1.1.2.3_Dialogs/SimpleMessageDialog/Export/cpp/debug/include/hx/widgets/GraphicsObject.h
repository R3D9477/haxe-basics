// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GraphicsObject
#define INCLUDED_hx_widgets_GraphicsObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,GraphicsObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GraphicsObject_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef GraphicsObject_obj OBJ_;
		GraphicsObject_obj();

	public:
		enum { _hx_ClassId = 0x5ed99f29 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GraphicsObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GraphicsObject"); }

		hx::ObjectPtr< GraphicsObject_obj > __new() {
			hx::ObjectPtr< GraphicsObject_obj > __this = new GraphicsObject_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GraphicsObject_obj > __alloc(hx::Ctx *_hx_ctx) {
			GraphicsObject_obj *__this = (GraphicsObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsObject_obj), true, "hx.widgets.GraphicsObject"));
			*(void **)__this = GraphicsObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsObject_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicsObject","\x0a","\xaa","\x60","\x12"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GraphicsObject */ 
