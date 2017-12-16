// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_ConstructorParams
#define INCLUDED_haxe_ui_backend_hxwidgets_ConstructorParams

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,hxwidgets,ConstructorParams)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{


class HXCPP_CLASS_ATTRIBUTES ConstructorParams_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConstructorParams_obj OBJ_;
		ConstructorParams_obj();

	public:
		enum { _hx_ClassId = 0x6697875b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.hxwidgets.ConstructorParams")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.hxwidgets.ConstructorParams"); }

		hx::ObjectPtr< ConstructorParams_obj > __new() {
			hx::ObjectPtr< ConstructorParams_obj > __this = new ConstructorParams_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ConstructorParams_obj > __alloc(hx::Ctx *_hx_ctx) {
			ConstructorParams_obj *__this = (ConstructorParams_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConstructorParams_obj), false, "haxe.ui.backend.hxwidgets.ConstructorParams"));
			*(void **)__this = ConstructorParams_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstructorParams_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConstructorParams","\xc0","\x53","\x79","\x49"); }

		static ::cpp::VirtualArray build(::String constructorSignature,int style);
		static ::Dynamic build_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_ConstructorParams */ 
