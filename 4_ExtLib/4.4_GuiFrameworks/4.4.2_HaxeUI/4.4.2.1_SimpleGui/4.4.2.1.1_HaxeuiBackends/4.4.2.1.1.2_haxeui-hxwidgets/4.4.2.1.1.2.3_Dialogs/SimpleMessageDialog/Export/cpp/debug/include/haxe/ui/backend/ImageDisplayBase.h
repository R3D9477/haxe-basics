// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayBase
#define INCLUDED_haxe_ui_backend_ImageDisplayBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_be477e8665a4b528_14_new)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayBase)
HX_DECLARE_CLASS3(haxe,ui,util,Rectangle)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageDisplayBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ImageDisplayBase_obj OBJ_;
		ImageDisplayBase_obj();

	public:
		enum { _hx_ClassId = 0x60e9e712 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ImageDisplayBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ImageDisplayBase"); }

		hx::ObjectPtr< ImageDisplayBase_obj > __new() {
			hx::ObjectPtr< ImageDisplayBase_obj > __this = new ImageDisplayBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ImageDisplayBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			ImageDisplayBase_obj *__this = (ImageDisplayBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageDisplayBase_obj), true, "haxe.ui.backend.ImageDisplayBase"));
			*(void **)__this = ImageDisplayBase_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_be477e8665a4b528_14_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDisplayBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageDisplayBase","\xf8","\x33","\xba","\x0d"); }

		Float _left;
		Float _top;
		Float _imageWidth;
		Float _imageHeight;
		 ::Dynamic _imageInfo;
		 ::haxe::ui::util::Rectangle _imageClipRect;
		void validateData();
		::Dynamic validateData_dyn();

		bool validateStyle();
		::Dynamic validateStyle_dyn();

		void validatePosition();
		::Dynamic validatePosition_dyn();

		void validateDisplay();
		::Dynamic validateDisplay_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageDisplayBase */ 
