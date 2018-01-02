// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_ImageData
#define INCLUDED_haxe_ui_backend_ImageData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0ffe614b322d45f0_4_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageData)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ImageData_obj OBJ_;
		ImageData_obj();

	public:
		enum { _hx_ClassId = 0x3093c70f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.ImageData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.ImageData"); }

		hx::ObjectPtr< ImageData_obj > __new() {
			hx::ObjectPtr< ImageData_obj > __this = new ImageData_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ImageData_obj > __alloc(hx::Ctx *_hx_ctx) {
			ImageData_obj *__this = (ImageData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageData_obj), false, "haxe.ui.backend.ImageData"));
			*(void **)__this = ImageData_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0ffe614b322d45f0_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageData_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageData","\x05","\xcb","\x6a","\xc6"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageData */ 
