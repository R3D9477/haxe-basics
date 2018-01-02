// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#define INCLUDED_haxe_ui_backend_AssetsBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4e621796a8d98261_6_new)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsBase)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AssetsBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AssetsBase_obj OBJ_;
		AssetsBase_obj();

	public:
		enum { _hx_ClassId = 0x0d657426 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.AssetsBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.AssetsBase"); }

		hx::ObjectPtr< AssetsBase_obj > __new() {
			hx::ObjectPtr< AssetsBase_obj > __this = new AssetsBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AssetsBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			AssetsBase_obj *__this = (AssetsBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetsBase_obj), false, "haxe.ui.backend.AssetsBase"));
			*(void **)__this = AssetsBase_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_6_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetsBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("AssetsBase","\x54","\x5e","\x60","\x73"); }

		::String getTextDelegate(::String resourceId);
		::Dynamic getTextDelegate_dyn();

		void getImageInternal(::String resourceId, ::Dynamic callback);
		::Dynamic getImageInternal_dyn();

		void getImageFromHaxeResource(::String resourceId, ::Dynamic callback);
		::Dynamic getImageFromHaxeResource_dyn();

		void getFontInternal(::String resourceId, ::Dynamic callback);
		::Dynamic getFontInternal_dyn();

		void getFontFromHaxeResource(::String resourceId, ::Dynamic callback);
		::Dynamic getFontFromHaxeResource_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AssetsBase */ 
