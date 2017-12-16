// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer
#define INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,data,transformation,IItemTransformer)
HX_DECLARE_CLASS4(haxe,ui,data,transformation,NativeTypeTransformer)

namespace haxe{
namespace ui{
namespace data{
namespace transformation{


class HXCPP_CLASS_ATTRIBUTES NativeTypeTransformer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeTypeTransformer_obj OBJ_;
		NativeTypeTransformer_obj();

	public:
		enum { _hx_ClassId = 0x77924dfb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.data.transformation.NativeTypeTransformer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.data.transformation.NativeTypeTransformer"); }
		static hx::ObjectPtr< NativeTypeTransformer_obj > __new();
		static hx::ObjectPtr< NativeTypeTransformer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeTypeTransformer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("NativeTypeTransformer","\x48","\x14","\xe0","\x27"); }

		 ::Dynamic transformFrom( ::Dynamic i);
		::Dynamic transformFrom_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace data
} // end namespace transformation

#endif /* INCLUDED_haxe_ui_data_transformation_NativeTypeTransformer */ 
