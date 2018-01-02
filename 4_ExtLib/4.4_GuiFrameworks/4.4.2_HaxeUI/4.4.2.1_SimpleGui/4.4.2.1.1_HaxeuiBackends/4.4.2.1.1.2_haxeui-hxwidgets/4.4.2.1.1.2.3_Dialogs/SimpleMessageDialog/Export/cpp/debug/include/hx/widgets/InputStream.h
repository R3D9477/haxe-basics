// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_InputStream
#define INCLUDED_hx_widgets_InputStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_StreamBase
#include <hx/widgets/StreamBase.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES InputStream_obj : public  ::hx::widgets::StreamBase_obj
{
	public:
		typedef  ::hx::widgets::StreamBase_obj super;
		typedef InputStream_obj OBJ_;
		InputStream_obj();

	public:
		enum { _hx_ClassId = 0x7ed3b98b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.InputStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.InputStream"); }

		hx::ObjectPtr< InputStream_obj > __new() {
			hx::ObjectPtr< InputStream_obj > __this = new InputStream_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< InputStream_obj > __alloc(hx::Ctx *_hx_ctx) {
			InputStream_obj *__this = (InputStream_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InputStream_obj), true, "hx.widgets.InputStream"));
			*(void **)__this = InputStream_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputStream_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("InputStream","\x0a","\x88","\x93","\xea"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_InputStream */ 
