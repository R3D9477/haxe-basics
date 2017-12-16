// GeneratedByHaxe
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_size_NotebookSize
#define INCLUDED_haxe_ui_backend_hxwidgets_size_NotebookSize

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,size,NotebookSize)
HX_DECLARE_CLASS3(haxe,ui,layouts,DelegateLayoutSize)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace size{


class HXCPP_CLASS_ATTRIBUTES NotebookSize_obj : public  ::haxe::ui::layouts::DelegateLayoutSize_obj
{
	public:
		typedef  ::haxe::ui::layouts::DelegateLayoutSize_obj super;
		typedef NotebookSize_obj OBJ_;
		NotebookSize_obj();

	public:
		enum { _hx_ClassId = 0x58d816e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.size.NotebookSize")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.size.NotebookSize"); }
		static hx::ObjectPtr< NotebookSize_obj > __new();
		static hx::ObjectPtr< NotebookSize_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NotebookSize_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NotebookSize","\x9c","\xbf","\x88","\x65"); }

		Float get_width();

		Float get_height();

		Float get_usableWidthModifier();

		Float get_usableHeightModifier();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace size

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_size_NotebookSize */ 
