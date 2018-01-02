// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_GDIObject
#define INCLUDED_hx_widgets_GDIObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,GDIObject)
HX_DECLARE_CLASS2(hx,widgets,Object)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES GDIObject_obj : public  ::hx::widgets::Object_obj
{
	public:
		typedef  ::hx::widgets::Object_obj super;
		typedef GDIObject_obj OBJ_;
		GDIObject_obj();

	public:
		enum { _hx_ClassId = 0x03ecca10 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.GDIObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.GDIObject"); }

		hx::ObjectPtr< GDIObject_obj > __new() {
			hx::ObjectPtr< GDIObject_obj > __this = new GDIObject_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GDIObject_obj > __alloc(hx::Ctx *_hx_ctx) {
			GDIObject_obj *__this = (GDIObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GDIObject_obj), true, "hx.widgets.GDIObject"));
			*(void **)__this = GDIObject_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GDIObject_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GDIObject","\x6b","\x3f","\xcd","\xd7"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_GDIObject */ 
