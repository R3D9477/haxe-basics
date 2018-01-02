// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_BestSize
#define INCLUDED_haxe_ui_backend_hxwidgets_size_BestSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,size,BestSize)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{


class HXCPP_CLASS_ATTRIBUTES BestSize_obj : public  ::haxe::ui::layouts::DelegateLayoutSize_obj
{
	public:
		typedef  ::haxe::ui::layouts::DelegateLayoutSize_obj super;
		typedef BestSize_obj OBJ_;
		BestSize_obj();

	public:
		enum { _hx_ClassId = 0x49e0986b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.size.BestSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.size.BestSize"); }
		static hx::ObjectPtr< BestSize_obj > __new();
		static hx::ObjectPtr< BestSize_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BestSize_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BestSize","\x25","\xdc","\xab","\x23"); }

		Float get_width();

		Float get_height();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_size_BestSize */ 
